LEX = flex -I
YACC = yacc -dv
CFLAGS = -DYDEBUG=1

all:sql1

sql1: sql1.o scn1.o
	$(CC) -o $@ sql1.c scn1.c -lm -ly -ll

sql1.c sql1.h: sql1.y
	$(YACC) sql1.y
	mv y.tab.h sql1.h
	mv y.tab.c sql1.c
	mv y.output sql1.out

scn1.c : sql1.h sql1.l
	$(LEX) sql1.l
	mv lex.yy.c scn1.c


clean:
	rm *.h *.c *.out
