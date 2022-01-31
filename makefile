# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = clang++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
main: matrixInverse.o matrixMult.o matrixTranspose.o binder.o
	$(CC) $(CFLAGS) -o main matrixInverse.o matrixNumMult.o matrixTranspose.o matrixToMatrixMult.o binder.o

# The main.o target can be written more simply
 
binder.o: binder.cpp linker.h
	$(CC) $(CFLAGS) -c binder.cpp

matrixTranspose.o: matrixFuncs/matrixTranspose.cpp linker.h
	$(CC) $(CFLAGS) -c matrixFuncs/matrixTranspose.cpp

matrixNumMult.o: matrixFuncs/matrixNumMult.cpp linker.h
	$(CC) $(CFLAGS) -c matrixFuncs/matrixNumMult.cpp

matrixToMatrixMult.o: matrixFuncs/matrixToMatrixMult.cpp linker.h
	$(CC) $(CFLAGS) -c matrixFuncs/matrixToMatrixMult.cpp

matrixInverse.o: matrixFuncs/matrixInverse.cpp linker.h
	$(CC) $(CFLAGS) -c matrixFuncs/matrixInverse.cpp