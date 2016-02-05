package antlr;

/**
 * <b>SOFTWARE RIGHTS</b>
 * <p>
 * ANTLR 2.5.0 MageLang Institute, 1998
 * <p>
 * We reserve no legal rights to the ANTLR--it is fully in the
 * public domain. An individual or company may do whatever
 * they wish with source code distributed with ANTLR or the
 * code generated by ANTLR, including the incorporation of
 * ANTLR, or its output, into commerical software.
 * <p>
 * We encourage users to develop software with ANTLR. However,
 * we do ask that credit is given to us for developing
 * ANTLR. By "credit", we mean that if you use ANTLR or
 * incorporate any source code into one of your programs
 * (commercial product, research project, or otherwise) that
 * you acknowledge this fact somewhere in the documentation,
 * research report, etc... If you like ANTLR and have
 * developed a nice tool with the output, please mention that
 * you developed it using ANTLR. In addition, we ask that the
 * headers remain intact in our source code. As long as these
 * guidelines are kept, we expect to continue enhancing this
 * system and expect to make other tools available as they are
 * completed.
 * <p>
 * The ANTLR gang:
 * @version ANTLR 2.5.0 MageLang Institute, 1998
 * @author Terence Parr, <a href=http://www.MageLang.com>MageLang Institute</a>
 * @author <br>John Lilley, <a href=http://www.Empathy.com>Empathy Software</a>
 */
import antlr.collections.impl.BitSet;
import antlr.collections.AST;

public class MismatchedTokenException extends ParserException {
	// Token names array for formatting 
	String[] tokenNames;
	// The token that was encountered
	public Token token;
	// The offending AST node if tree walking
	public AST node;

	String tokenText=null; // taken from node or token object

	// Types of tokens
	public static final int TOKEN = 1;
	public static final int NOT_TOKEN = 2;
	public static final int RANGE = 3;
	public static final int NOT_RANGE = 4;
	public static final int SET = 5;
	public static final int NOT_SET = 6;
	// One of the above
	protected int mismatchType;

	// For TOKEN/NOT_TOKEN and RANGE/NOT_RANGE
	protected int expecting;

	// For RANGE/NOT_RANGE (expecting is lower bound of range)
	protected int upper;

	// For SET/NOT_SET
	protected BitSet set;

	/** Looking for AST wildcard, didn't find it */
	public MismatchedTokenException() {
		super("Mismatched Token: expecting any AST node");
	}
// Expected range / not range
public MismatchedTokenException(String[] tokenNames_, AST node, int lower, int upper_, boolean matchNot) {
	super("Mismatched Token");
	tokenNames = tokenNames_;
	this.node = node;
	if ( node==null ) {
		tokenText = "<empty tree>";
	}
	else {
		tokenText = node.toString();
	}
	expecting = lower;
	upper = upper_;
	mismatchType = matchNot ? NOT_RANGE : RANGE;
}
// Expected token / not token
public MismatchedTokenException(String[] tokenNames_, AST node, int expecting_, boolean matchNot) {
	super("Mismatched Token");
	tokenNames = tokenNames_;
	this.node = node;
	if ( node==null ) {
		tokenText = "<empty tree>";
	}
	else {
		tokenText = node.toString();
	}
	expecting = expecting_;
	mismatchType = matchNot ? NOT_TOKEN : TOKEN;
}
// Expected BitSet / not BitSet
public MismatchedTokenException(String[] tokenNames_, AST node, BitSet set_, boolean matchNot) {
	super("Mismatched Token");
	tokenNames = tokenNames_;
	this.node = node;
	if ( node==null ) {
		tokenText = "<empty tree>";
	}
	else {
		tokenText = node.toString();
	}
	set = set_;
	mismatchType = matchNot ? NOT_SET : SET;
}
// Expected range / not range
public MismatchedTokenException(String[] tokenNames_, Token token_, int lower, int upper_, boolean matchNot) {
	super("Mismatched Token");
	tokenNames = tokenNames_;
	token = token_;
	tokenText = token.getText();
	expecting = lower;
	upper = upper_;
	mismatchType = matchNot ? NOT_RANGE : RANGE;
}
// Expected token / not token
public MismatchedTokenException(String[] tokenNames_, Token token_, int expecting_, boolean matchNot) {
	super("Mismatched Token");
	tokenNames = tokenNames_;
	token = token_;
	tokenText = token.getText();
	expecting = expecting_;
	mismatchType = matchNot ? NOT_TOKEN : TOKEN;
}
// Expected BitSet / not BitSet
public MismatchedTokenException(String[] tokenNames_, Token token_, BitSet set_, boolean matchNot) {
	super("Mismatched Token");
	tokenNames = tokenNames_;
	token = token_;
	tokenText = token.getText();
	set = set_;
	mismatchType = matchNot ? NOT_SET : SET;
}
	private String tokenName(int tokenType)
	{
		if (tokenType == Token.INVALID_TYPE) {
			return "<Set of tokens>";
		}
		else if (tokenType < 0 || tokenType >= tokenNames.length) {
			return "<" + String.valueOf(tokenType) + ">";
		} 
		else {
			return tokenNames[tokenType];
		}
	}
public String toString() {
	String s = (token == null) ? "" : "line(" + token.getLine() + "), ";
	switch (mismatchType) {
		case TOKEN :
			s += "expecting " + tokenName(expecting) + ", found '" + tokenText + "'";
			break;
		case NOT_TOKEN :
			s += "expecting anything but " + tokenName(expecting) + "; got it anyway";
			break;
		case RANGE :
			s += "expecting token in range: " + tokenName(expecting) + ".." + tokenName(upper) + ", found '" + tokenText + "'";
			break;
		case NOT_RANGE :
			s += "expecting token NOT in range: " + tokenName(expecting) + ".." + tokenName(upper) + ", found '" + tokenText + "'";
			break;
		case SET :
		case NOT_SET :
			s += "expecting " + (mismatchType == NOT_SET ? "NOT " : "") + "one of (";
			int[] elems = set.toArray();
			for (int i = 0; i < elems.length; i++) {
				s += " ";
				s += tokenName(elems[i]);
			}
			s += "), found '" + tokenText + "'";
			break;
		default :
			s = super.toString();
			break;
	}
	return s;
}
}