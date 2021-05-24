GCC = gcc
SOURCE = $(wildcard *.c)
BINAIRE = $(patsubst %.c,%.o,${SOURCE})

all: main
main: ${BINAIRE}
#${GCC} calculatrice.o main.c -o main
	${GCC} $^ -o $@

#calculatrice.o: calculatrice.c
%.o: %.c calculatrice.h
#${GCC} -c calculatrice.c
	${GCC} -c $<


clean: 
	rm main
	rm *.o




