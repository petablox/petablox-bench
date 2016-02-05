BACKUP=../..

VPATH = $(BACKUP)/classes/antlr

SUBDIRS = actions collections debug preprocessor

FILES= ANTLRException.class \
 ANTLRGrammarParseBehavior.class \
 ANTLRHashString.class \
 ANTLRLexer.class \
 ANTLRParser.class \
 ANTLRStringBuffer.class \
 ANTLRTokdefLexer.class \
 ANTLRTokdefParser.class \
 ANTLRTokdefParserTokenTypes.class \
 ANTLRTokenTypes.class \
 ASTFactory.class \
 ASTIterator.class \
 ASTNULLType.class \
 ASTPair.class \
 ASTVisitor.class \
 ActionElement.class \
 ActionTransInfo.class \
 Alternative.class \
 AlternativeBlock.class \
 AlternativeElement.class \
 BaseAST.class \
 BlockContext.class \
 BlockEndElement.class \
 BlockWithImpliedExitPath.class \
 ByteBuffer.class \
 CharBuffer.class \
 CharFormatter.class \
 CharLiteralElement.class \
 CharQueue.class \
 CharRangeElement.class \
 CharScanner.class \
 CodeGenerator.class \
 CommonAST.class \
 CommonToken.class \
 CppBlockFinishingInfo.class \
 CppCharFormatter.class \
 CppCodeGenerator.class \
 DefaultToolErrorHandler.class \
 DefineGrammarSymbols.class \
 DiagnosticCodeGenerator.class \
 DumpASTVisitor.class \
 ExceptionHandler.class \
 ExceptionSpec.class \
 FileCopyException.class \
 Grammar.class \
 GrammarAnalyzer.class \
 GrammarAtom.class \
 GrammarElement.class \
 GrammarSymbol.class \
 HTMLCodeGenerator.class \
 InputBuffer.class \
 JavaBlockFinishingInfo.class \
 JavaCharFormatter.class \
 JavaCodeGenerator.class \
 LLkAnalyzer.class \
 LLkGrammarAnalyzer.class \
 LLkParser.class \
 LexerGrammar.class \
 Lookahead.class \
 MakeGrammar.class \
 MismatchedTokenException.class \
 NoViableAltException.class \
 OneOrMoreBlock.class \
 Parser.class \
 ParserException.class \
 ParserGrammar.class \
 RuleBlock.class \
 RuleEndElement.class \
 RuleRefElement.class \
 RuleSymbol.class \
 ScannerException.class \
 SemanticException.class \
 SimpleTokenManager.class \
 StringLiteralElement.class \
 StringLiteralSymbol.class \
 SynPredBlock.class \
 TokdefTokenManager.class \
 Token.class \
 TokenBuffer.class \
 TokenManager.class \
 TokenQueue.class \
 TokenRangeElement.class \
 TokenRefElement.class \
 TokenSymbol.class \
 Tokenizer.class \
 Tool.class \
 ToolErrorHandler.class \
 TreeBlockContext.class \
 TreeElement.class \
 TreeParser.class \
 TreeSpecifierNode.class \
 TreeWalkerGrammar.class \
 VAJANTLRParameters.class \
 WildcardElement.class \
 ZeroOrMoreBlock.class

all: subdirs antlr

subdirs:
	for i in $(SUBDIRS); do \
	  $(MAKE) -C $$i; \
	done

antlr: $(FILES)

%.class: %.java
	javac -classpath "$(BACKUP)/classes;$(BACKUP)/src" -d $(BACKUP)/classes $<
