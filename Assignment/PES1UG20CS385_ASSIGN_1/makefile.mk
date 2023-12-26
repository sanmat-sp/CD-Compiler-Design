all:
	lex lexer.l
	yacc parser.y -d
	gcc y.tab.c lex.yy.c -ll 
