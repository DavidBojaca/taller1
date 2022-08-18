/**********************************************************
*Fecha: 8 agosto 2022
*Autor: David Bojaca
*Materia: Parallel and Distributed Computing
*Tema:Introduccion a la programacion en C
*programas taller 1
*Topico: Aplicacion con funciones operacionales en numeros naturales y matrices
*********************************************************/
#ifdef TALLER1_LIB_H_INCLUDED
#define TALLER1_LIB_H_INCLUDED
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/***************Se Presentasn las funciones***********/
void menu();
void func_multiplicacion();
void func_dias_fechas();
void func_distancia_puntos();
void func_numeros_naturales();
void func_triangulo();
void matrices_unos();
void 	matriz_aleatorios();
void matriz_suma();
void matriz_resta();
void producto_matrices();
void crear_matriz(int matriz[], int n);
void imprimir_matriz(int matriz[], int n);
void suma(int matriz1[],int matriz2[], int matriz3[], int n);
void resta(int matriz1[],int matriz2[], int matriz3[], int n);
void multiplicacion(int matriz1[],int matriz2[], int matriz3[], int n);

#endif

