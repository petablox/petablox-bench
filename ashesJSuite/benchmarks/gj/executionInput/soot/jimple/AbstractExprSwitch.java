/* Soot - a J*va Optimization Framework
 * Copyright (C) 1997-1999 Raja Vallee-Rai
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




package soot.jimple;

public abstract class AbstractExprSwitch implements ExprSwitch
{
    Object result;

    public void caseAddExpr(AddExpr v)
    {
        defaultCase(v);
    }

    public void caseAndExpr(AndExpr v)
    {
        defaultCase(v);
    }

    public void caseCmpExpr(CmpExpr v)
    {
        defaultCase(v);
    }

    public void caseCmpgExpr(CmpgExpr v)
    {
        defaultCase(v);
    }

    public void caseCmplExpr(CmplExpr v)
    {
        defaultCase(v);
    }

    public void caseDivExpr(DivExpr v)
    {
        defaultCase(v);
    }

    public void caseEqExpr(EqExpr v)
    {
        defaultCase(v);
    }

    public void caseNeExpr(NeExpr v)
    {
        defaultCase(v);
    }

    public void caseGeExpr(GeExpr v)
    {
        defaultCase(v);
    }

    public void caseGtExpr(GtExpr v)
    {
        defaultCase(v);
    }

    public void caseLeExpr(LeExpr v)
    {
        defaultCase(v);
    }

    public void caseLtExpr(LtExpr v)
    {
        defaultCase(v);
    }

    public void caseMulExpr(MulExpr v)
    {
        defaultCase(v);
    }

    public void caseOrExpr(OrExpr v)
    {
        defaultCase(v);
    }

    public void caseRemExpr(RemExpr v)
    {
        defaultCase(v);
    }

    public void caseShlExpr(ShlExpr v)
    {
        defaultCase(v);
    }

    public void caseShrExpr(ShrExpr v)
    {
        defaultCase(v);
    }

    public void caseUshrExpr(UshrExpr v)
    {
        defaultCase(v);
    }

    public void caseSubExpr(SubExpr v)
    {
        defaultCase(v);
    }

    public void caseXorExpr(XorExpr v)
    {
        defaultCase(v);
    }

    public void caseInterfaceInvokeExpr(InterfaceInvokeExpr v)
    {
        defaultCase(v);
    }

    public void caseSpecialInvokeExpr(SpecialInvokeExpr v)
    {
        defaultCase(v);
    }

    public void caseStaticInvokeExpr(StaticInvokeExpr v)
    {
        defaultCase(v);
    }

    public void caseVirtualInvokeExpr(VirtualInvokeExpr v)
    {
        defaultCase(v);
    }

    public void caseCastExpr(CastExpr v)
    {
        defaultCase(v);
    }

    public void caseInstanceOfExpr(InstanceOfExpr v)
    {
        defaultCase(v);
    }

    public void caseNewArrayExpr(NewArrayExpr v)
    {
        defaultCase(v);
    }

    public void caseNewMultiArrayExpr(NewMultiArrayExpr v)
    {
        defaultCase(v);
    }

    public void caseNewExpr(NewExpr v)
    {
        defaultCase(v);
    }

    public void caseLengthExpr(LengthExpr v)
    {
        defaultCase(v);
    }

    public void caseNegExpr(NegExpr v)
    {
        defaultCase(v);
    }

    public void defaultCase(Object obj)
    {
    }

    public void setResult(Object result)
    {
        this.result = result;
    }

    public Object getResult()
    {
        return result;
    }
}
