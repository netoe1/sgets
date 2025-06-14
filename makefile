# Script parametric's

COMPILER = gcc
SGETS_H = ./include/sgets.h
SGETS_C = ./src/sgets.c
SGETS_O = ./bin/sgets.o


MAIN_C = main.c
# Calls
all:
	${CC} -o main.o ${MAIN_C} ${SGETS_C}
sgets.o: ${SGETS_C} ${SGETS_H}
	${CC} -c ${SGETS_C} -o ${SGETS_O}

sgets_directly.o