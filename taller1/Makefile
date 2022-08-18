#*************************************************************
#Fecha: 17 deagosto 2022
#Autor : David Santiago Bojaca
#Materia : Parallel and distribited computing
#Topico: Diseño make file taller 1
#fase 01: Programas en c
#**********************************************************/

GCC = gcc
GFLAGS = -ansi -pedantic -Wall -std=c11
FMATH = -lm
PROGRAMAS= taller1_main

taller1_main:
	$(GCC) $(GFLAGS) -c $@.c	
	$(GCC) $(GFLAGS) -c taller1_lib.c $(FMATH)
	$(GCC) $(GFLAGS) -o $@ $@.o taller1_lib.o $(FMATH)
	
	
clean: 
	$(RM) *.o $(PROGRAMS)
	
	