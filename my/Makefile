LEX = flex -I
YACC = yacc -dv

all: sql

sql: y.tab.h y.tab.c lex.yy.c sqltext.c
	gcc -o $@ sqltext.c y.tab.c lex.yy.c -ll -ly -lm

y.tab.c y.tab.h: sql.y
	$(YACC) sql.y

lex.yy.c: sql.l
	$(LEX) sql.l

clean:
	rm y.* lex.*