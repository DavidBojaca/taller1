/**********************************************************
*Fecha: 8 agosto 2022
*Autor: David Bojaca
*Materia: Parallel and Distributed Computing
*Tema:Introduccion a la programacion en C
*programas taller 1
*Topico: Aplicacion con funciones operacionales en numeros naturales y matrices
*********************************************************/
#include "taller1_lib.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/***************** MENU DE OPCIONES ******************/

int opcion;
void menu(){
	while (opcion<11){
	printf("**********************************************************\n");
	printf("*   BIEMVENIDO OPRIMA ENTER PARA DESPLEGAR EL MENU       *\n");
	printf("**********************************************************\n");
	getchar();
	getchar();
	
	printf("selecione una de las opciones presentadas por pantalla\n");
	printf("1. producto de dos numeros\n" );
	printf("2. transformacion de dias a fechas\n");
	printf("3. distancia entre dos puntos\n");
	printf("4. 10 primeros numeros naturales\n");
	printf("5. figura de triangulo\n");
	printf("6. matriz de unos\n");
	printf("7. matriz de numeros random\n");
	printf("8  suma de dos matrices\n");
	printf("9. resta de dos matrices\n");
	printf("10. producto de dos matrices\n");
	printf("11. salir\n");
	
	scanf("%d",&opcion);
	
	switch(opcion){
		case 1:func_multiplicacion();
		printf("\n");

		break;
		
		case 2:func_dias_fechas();
		printf("\n");
		break;		
	
		case 3:func_distancia_puntos();
		printf("\n");
		break;
	
		case 4:func_numeros_naturales();
		printf("\n");
		break;

		case 5:func_triangulo();
		printf("\n");
		break;

		case 6:matrices_unos();
		printf("\n");
		break;
	
		case 7:matriz_aleatorios();
		printf("\n");
		break;

		case 8:matriz_suma();
		printf("\n");
		break;

		case 9:matriz_resta();
		printf("\n");
		break;
		
		case 10:producto_matrices();
		printf("\n");
		break;
		
		default:
		printf("Ingrese una opcion valida\n");
		printf("\n");
		break;
		}
		
	}
}
/*************** 1.funcion de multiplicacion ***********/
void func_multiplicacion(){
	int numero1, numero2, resultado ;
	printf("ingrese un numero: ");
	scanf("%d",&numero1);
	
	printf("ingrese el segundo numero: ");
	scanf("%d",&numero2);
	resultado = numero1*numero2;
	
	printf("la multiplicacion entre %d y %d es: %d\n",numero1,numero2,resultado);
	

}

/*************** 2. funcion de las fechas ***********/
void func_dias_fechas(){
	int dias, inicio;
	int anos, semanas, dias_r;
	printf("Ingrese los dias que quiere pasar: ");
	scanf("%d",&dias);
	inicio=dias;
	anos=(dias/365);
	semanas=((dias% 365)/7);
	dias = ((dias%365)%7);
	
	printf("%d dias equivale a %d años, %d semanas y %d dias ",inicio,anos,semanas,dias);	

}
/*************** 3. funcion de distancia entre dos puntos ***********/
void func_distancia_puntos(){
	float x1,y1,x2,y2, resultado;
	printf("ingrese el valor en x del primer punto: ");
	scanf("%f",&x1);
	
	printf("ingrese el valor en y del primer punto: ");
	scanf("%f",&y1);
	
	printf("ingrese el valor en x del segundo punto: ");
	scanf("%f",&x2);
	
	printf("ingrese el valor en y del segundo punto: ");
	scanf("%f",&y2);


	resultado= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	
	printf(" la distancia entre el punto uno (x: %f y: %f) y el punto dos (x: %f y: %f) es de: %f ",x1 ,y1 ,x2 ,y2,resultado);
	
	 

}
/*************** 4. funcion 10 primeros numeros naturales ***********/
void func_numeros_naturales(){
	int resultado;
	int i;
	printf("Resultado\n");

	for ( i = 1; i <= 10; i++){
	
		printf("%d \n", i);
	}

}

/*************** 5. funcion triangulo ***********/
void func_triangulo(){
	int lineas, contador;
	do
	{
		printf("digite cuantas lineas quiere que tenga el triangulo (max 14): ");
		scanf("%d",&lineas);
		if(lineas>14){
		printf("las lineas solicitadas sobrepasan el limite permitido");
		}
		if(lineas<=14){
		printf("Resultado\n");
		for(int i=1;i<lineas; i++){
			for(int j = 0; j<i;j++){
		
				printf("* ");
			}
			printf("\n");
		}
	}
	} while (lineas>14);
	
	
}

/*************** 6. funcion matriz de unos ***********/

void matrices_unos(){
	int n, size;
	do
	{
		printf("Digite el numero de la matriz NxN (maximo 8): ");
		scanf("%d",&n);
		size=n*n;
		int a[size];
		int i,j;
		for (i=0; i<n; i++){
	
			for (j=0; j<n;j++){
				a[i+j*n]=1;
				printf(" %d ",a[i+j*n]);
			}
			printf("\n");
		}
	
	} while (n>8);
	
	
}

/*************** 7. funcion matriz de numeros aleatorios entre 0-9 ***********/
void 	matriz_aleatorios(){
	int n,size;
	do
	{
		printf("Digite el numero de la matriz NxN (maximo 8): ");
		scanf("%d",&n);
		size = n*n;
		int matriz1[size];
		crear_matriz(matriz1,n);
		imprimir_matriz(matriz1,n);
	
	} while (n >8);	
}


/*************** 8. funcion suma de matices ***********/
void matriz_suma(){
	int n, size;
	
	do{
		printf("Digite el numero de la matriz NxN (maximo 8): ");
		scanf("%d",&n);
		size = n*n;
		int matriz1[size],matriz2[size], matriz3[size];
		crear_matriz(matriz1,n);
		imprimir_matriz(matriz1,n);
		
		crear_matriz(matriz2,n);
		imprimir_matriz(matriz2,n);
		
		suma(matriz1,matriz2,matriz3,n);
		imprimir_matriz(matriz3,n);

		
	} while (n>8);
	

}

/*************** 9. funcion resta de matrices ***********/
void matriz_resta(){
	int n, size;
	
	do{
		printf("Digite el numero de la matriz NxN (maximo 8): ");
		scanf("%d",&n);
		size = n*n;
		int matriz1[size],matriz2[size], matriz3[size];
		crear_matriz(matriz1,n);
		imprimir_matriz(matriz1,n);
		
		crear_matriz(matriz2,n);
		imprimir_matriz(matriz2,n);
		
		resta(matriz1,matriz2,matriz3,n);
		imprimir_matriz(matriz3,n);

	} while (n>8);
	
}
/*************** 10.funcion multiplicacion de matrices ***********/
void producto_matrices(){
	int n, size;
	do{
		printf("Digite el numero de las matriz NxN (maximo 8): ");
		scanf("%d",&n);
		size=n*n;
		int matriz1[size],matriz2[size], matriz3[size];
		crear_matriz(matriz1,n);
		imprimir_matriz(matriz1,n);
		
		crear_matriz(matriz2,n);
		imprimir_matriz(matriz2,n);
		
		multiplicacion(matriz1,matriz2,matriz3,n);
		imprimir_matriz(matriz3,n);

	
	} while (n>8);
	
	
		
		
}
/****************** Funcion creacion de matrices************/
void crear_matriz(int matriz[], int n){
	for (int i=0; i<n; i++){
			for (int j=0; j<n;j++){
				matriz[i+j*n]=rand() %10;
			}
		}

	printf("\n");

}
/*****************Funcion impresion***********/
void imprimir_matriz(int matriz[], int n){
	for (int i=0; i<n; i++){
			for (int j=0; j<n;j++){
				printf("%d\t",matriz[i+j*n]);
			}
			printf("\n");
		}
	printf("\n");

}
/************Funcion suma***********/
void suma(int matriz1[],int matriz2[], int matriz3[], int n){
	for (int i=0; i<n; i++){
			for (int j=0; j<n;j++){
				matriz3[i+j*n]= matriz1[i+j*n] + matriz2[i+j*n];
			}
			
		}

 	printf("\n");
}

/************Funcion resta***********/
void resta(int matriz1[],int matriz2[], int matriz3[], int n){
	for (int i=0; i<n; i++){
			for (int j=0; j<n;j++){
				matriz3[i+j*n]= matriz1[i+j*n] - matriz2[i+j*n];
			}
		}
	printf("\n");
}
/************Funcion Producto**************/
 void multiplicacion(int matriz1[],int matriz2[], int matriz3[], int n){
	int suma_parcial;
	for (int i=0; i<n; i++){
			for (int j=0; j<n;j++){
			
				suma_parcial =0;
				for (int k=0; k<n; k++){
				
					suma_parcial += matriz1[j+k*n]*matriz2[k+i*n];
				}	
		 		matriz3[j+i*n] = suma_parcial;
		 	}
		}
	printf("\n");
 }



