/* Soot - a J*va Optimization Framework
 * Copyright (C) 1999 Patrick Lam
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

/*
 * Modified by the Sable Research Group and others 1997-1999.  
 * See the 'credits' file distributed with Soot for the complete list of
 * contributors.  (Soot is distributed at http://www.sable.mcgill.ca/soot)
 */

/* Reference Version: $SootVersion: 1.beta.5.dev.74 $ */





package soot.jimple.internal;

import soot.*;
import soot.jimple.*;
import soot.baf.*;
import soot.jimple.*;
import soot.util.*;
import java.util.*;

public class JAssignStmt extends AbstractDefinitionStmt
    implements AssignStmt
{
    private class LinkedVariableBox extends VariableBox
    {
        ValueBox otherBox = null;

        private LinkedVariableBox(Value v)
        {
            super(v);
        }

        public void setOtherBox(ValueBox otherBox) { this.otherBox = otherBox; }

        public boolean canContainValue(Value v) 
        { 
            if (otherBox == null) return super.canContainValue(v);
            Value other = otherBox.getValue();
            return super.canContainValue(v) && 
                ((v instanceof Local || v instanceof Constant) || (other instanceof Local || other instanceof Constant));
        }
    }

    private class LinkedRValueBox extends RValueBox
    {
        ValueBox otherBox = null;

        private LinkedRValueBox(Value v)
        {
            super(v);
        }

        public void setOtherBox(ValueBox otherBox) { this.otherBox = otherBox; }

        public boolean canContainValue(Value v) 
        { 
            if (otherBox == null) return super.canContainValue(v);
            Value other = otherBox.getValue();
            return super.canContainValue(v) && 
                ((v instanceof Local || v instanceof Constant) || (other instanceof Local || other instanceof Constant));
        }
    }

    public JAssignStmt(Value variable, Value rvalue)
    {
        leftBox = new LinkedVariableBox(variable);
        rightBox = new LinkedRValueBox(rvalue);

        ((LinkedVariableBox)leftBox).setOtherBox(rightBox); 
        ((LinkedRValueBox)rightBox).setOtherBox(leftBox);

        if (!leftBox.canContainValue(variable) || 
            !rightBox.canContainValue(rvalue))
            throw new RuntimeException("illegal assignstmt!");

        defBoxes = new ArrayList();
        defBoxes.add(leftBox);
        defBoxes = Collections.unmodifiableList(defBoxes);
    }

    protected JAssignStmt(ValueBox variableBox, ValueBox rvalueBox)
    {
        this.leftBox = variableBox;
        this.rightBox = rvalueBox;

        defBoxes = new ArrayList();
        defBoxes.add(leftBox);
        defBoxes = Collections.unmodifiableList(defBoxes);
    }

    public boolean containsInvokeExpr()
    {
        return rightBox.getValue() instanceof InvokeExpr;
    }

    public Value getInvokeExpr()
    {
        if (!containsInvokeExpr())
            throw new RuntimeException("getInvokeExpr() called with no invokeExpr present!");

        return (InvokeExpr)rightBox.getValue();
    }

    public ValueBox getInvokeExprBox()
    {
        if (!containsInvokeExpr())
            throw new RuntimeException("getInvokeExpr() called with no invokeExpr present!");

        return rightBox;
    }

    protected String toString(boolean isBrief, Map stmtToName, String indentation)
    {
        if(isBrief)
        {
            return indentation + ((ToBriefString) leftBox.getValue()).toBriefString() + " = " + 
                ((ToBriefString) rightBox.getValue()).toBriefString();
        }
        else
            return indentation + leftBox.getValue().toString() + " = " + rightBox.getValue().toString();
    }

    public Object clone() 
    {
            return new JAssignStmt(Jimple.cloneIfNecessary(getLeftOp()), Jimple.cloneIfNecessary(getRightOp()));
    }

    public void setLeftOp(Value variable)
    {
        leftBox.setValue(variable);
    }

    public void setRightOp(Value rvalue)
    {
        rightBox.setValue(rvalue);
    }

    public void apply(Switch sw)
    {
        ((StmtSwitch) sw).caseAssignStmt(this);
    }

    public void convertToBaf(final JimpleToBafContext context, final List out)
    {
        final Value lvalue = this.getLeftOp();
        final Value rvalue = this.getRightOp();

        
        // Handle simple subcase where you can use the efficient iinc bytecode
            if(lvalue instanceof Local && (rvalue instanceof AddExpr || rvalue instanceof SubExpr))
            {
                Local l = (Local) lvalue;
                BinopExpr expr = (BinopExpr) rvalue;
                Value op1 = expr.getOp1();
                Value op2 = expr.getOp2();
                                
                if(l.getType().equals(IntType.v()))
                {
                    boolean isValidCase = false;
                    int x = 0;
                    
                    if(op1 == l && op2 instanceof IntConstant) 
                    {
                        x = ((IntConstant) op2).value;
                        isValidCase = true;
                    }
                    else if(expr instanceof AddExpr && 
                        op2 == l && op1 instanceof IntConstant)
                    {
                        // Note expr can't be a SubExpr because that would be x = 3 - x

                        
                        x = ((IntConstant) op1).value;
                        isValidCase = true;
                    }
                    
                    if(isValidCase && x >= Short.MIN_VALUE && x <= Short.MAX_VALUE)
                    {
                        out.add(Baf.v().newIncInst(context.getBafLocalOfJimpleLocal(l),  IntConstant.v((expr instanceof AddExpr) ? x : -x)));    
                        return;
                    }        
                }
            }


            lvalue.apply(new AbstractJimpleValueSwitch()
            {
                public void caseArrayRef(ArrayRef v)
                {
                    ((ConvertToBaf)(v.getBase())).convertToBaf(context, out);
                    ((ConvertToBaf)(v.getIndex())).convertToBaf(context, out);
                    ((ConvertToBaf) rvalue).convertToBaf(context, out);
                    
                    out.add(Baf.v().newArrayWriteInst(v.getType()));
                }
                
                public void defaultCase(Value v)
                {
                    throw new RuntimeException("Can't store in value " + v);
                }
                
                public void caseInstanceFieldRef(InstanceFieldRef v)
                {
                    ((ConvertToBaf)(v.getBase())).convertToBaf(context, out);
                    ((ConvertToBaf) rvalue).convertToBaf(context, out);

                    out.add(Baf.v().newFieldPutInst(v.getField()));
                }
                
                public void caseLocal(final Local v)
                {
                    ((ConvertToBaf) rvalue).convertToBaf(context, out);
                    
                    out.add(Baf.v().newStoreInst(v.getType(), 
                        context.getBafLocalOfJimpleLocal(v)));
                }
                
                public void caseStaticFieldRef(StaticFieldRef v)
                {
                    ((ConvertToBaf) rvalue).convertToBaf(context, out);

                    out.add(Baf.v().newStaticPutInst(v.getField()));
                }
            }); 
    }    
}



