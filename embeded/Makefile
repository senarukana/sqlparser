LEX = flex -I
YACC = yacc -dv
CFLAGS = -DYDEBUG=1

all:embededsql

embededsql: embeded_parser.c embeded_scanner.c sqltext.c
	$(CC) -o $@ embeded_parser.c embeded_scanner.c sqltext.c -lm -ly -ll

embeded_parser.c embeded_parser.h: embeded_sql.y
	$(YACC) embeded_sql.y
	mv y.tab.h embeded_parser.h
	mv y.tab.c embeded_parser.c
	mv y.output embeded_parser.out

embeded_scanner.c : embeded_parser.h embeded_sql.l
	$(LEX) embeded_sql.l
	mv lex.yy.c embeded_scanner.c


clean:
	rm *.h *.c *.out
