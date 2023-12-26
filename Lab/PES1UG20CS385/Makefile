all:
	lex lexer.l
	yacc -d parser.y
	gcc -g y.tab.c lex.yy.c -ll

	./a.out<sample_input1.c>output1.txt