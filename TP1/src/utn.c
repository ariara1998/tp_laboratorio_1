/*
 * utn.c
 *
 *  Created on: 2 abr. 2020
 *      Author: Ariel Arakaki
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int utn_getInt(int* a,char* mensaje)
{
	int retorno =-1;
	if(a != NULL && mensaje != NULL){
	  printf(mensaje);
	  fflush(stdin);
	  scanf("%d",a);
	  retorno=0;
	}
	return retorno;

}
float utn_getFloat(float* a,char* mensaje){
	printf(mensaje);
	scanf("%f",a);
	return 0;
}
char utn_getChar(char* a, char* mensaje){
	printf(mensaje);
	scanf("%s",a);
	return 0;
}

int utn_getNumero(int* pResultado,char* mensaje, char* mensajeError,int minimo, int maximo, int reintentos)
{
 int ret;
 int num;
 while(reintentos>0)
 {
   printf("%s",mensaje);
   fflush(stdin);
   scanf("%d",&num);
   //if(scanf("%d",&num)==1){  //si scanf=1(pudo escribir la variable)
   if(num<=maximo && num>=minimo)
    {break;}
   //}
   reintentos--;
   printf("%s",mensajeError);
 }
if(reintentos==0)
{
 ret=-1;
}
else
{
 ret=0;
 *pResultado = num;
}
return ret;
}

int utn_getCaracter(char* pResultado, char* mensaje,char* mensajeError, char minimo,char maximo,int reintentos)
{
	int retorno = -1;
	char buffer;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%c",&buffer);
			if(buffer >= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				retorno = 0;
				break;
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos>=0);

	}
	return retorno;
}

int utn_suma(int x, int y){
	int resp;
	resp = x + y;
	return (resp);
}

int utn_resta(int x, int y){
	int resp;
	resp = x - y;
	return (resp);
}

int utn_mult(int x, int y){
	int resp;
	resp = x * y;
	return (resp);
}

int utn_div(int x, int y){
	float resp;
	if(x==0||y==0){
		resp = 0;
	}
	else{
	    resp = x / y;
	}
	return (resp);
}

int utn_factorial(int x){
	int resp;
	int numIni;
	int cont;
	cont = x;
	numIni = x;
	  while(cont>1){
		cont--;
		numIni = numIni * cont;
	  }
	resp = numIni;
	return(resp);
}

int utn_imprimirCalculos(int x, int y, int suma, int resta, float division, int multiplicacion,int factorialx, int factorialy){
	printf("El resultado de %d + %d es %d \n" ,x,y,suma);
	printf("El resultado de %d - %d es : %d \n" ,x,y,resta);
	if(division==0){
		printf("No es posible dividir con ceros \n");
	}
	else{
	    printf("El resultado de %d / %d es : %f \n" ,x,y,division);
	}
	printf("El resultado de %d * %d es : %d \n" ,x,y,multiplicacion);
	printf("El factorial de %d : %d y El factorial de %d : %d \n" ,x,factorialx,y,factorialy);
	return 0;

}
