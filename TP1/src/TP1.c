/*
 ============================================================================
 Name        : TP1.c
 Author      : Ariel Arakaki 1e
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Calculadora
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn.h"

int main() {
	setbuf(stdout, NULL);
	int a;
	int b;
	int valora;
	int valorb;
	int suma;
	int resta;
	int multi;
	float div;
	int factoriala;
	int factorialb;
	int opcion;
	int respuesta;



    valora = utn_getNumero(&a,"Ingrese un numero\n","Error ingrese un numero del 0 al 1000\n",0,1000,3);
	valorb = utn_getNumero(&b,"Ingrese un numero\n","Error ingrese un numero del 0 al 1000\n",0,1000,3);
	if(valora != 0 || valorb != 0){
		a = 0;
		b = 0;
		printf("\n\n*Error uno de los valores ingresado no fue valida*\n");
	}
	suma = utn_suma(a,b);
	resta = utn_resta(a,b);
	multi = utn_mult(a,b);
	div = utn_div(a,b);
	factoriala = utn_factorial(a);
	factorialb = utn_factorial(b);
	utn_imprimirCalculos(a, b, suma, resta, div, multi, factoriala, factorialb);
	do{
	   printf("\n\nValores actuales : %d y %d\n",a,b);
	   respuesta = utn_getNumero(&opcion, "Seleccione una opcion\n\n1-Ver resultado\n2-Calcular otros numeros\n3-Salir\n", "No se una opcion valida\n", 1, 3, 2);
	   if(!respuesta){
		   switch(opcion){
		      case 1:
		    	   utn_imprimirCalculos(a, b, suma, resta, div, multi, factoriala, factorialb);
		    	   break;
		      case 2:
		    	   utn_getNumero(&a,"Ingrese un numero \n","Error ingrese un numero del 0 al 1000",0,1000,3);
		    	   utn_getNumero(&b,"Ingrese un numero \n","Error ingrese un numero del 0 al 1000",0,1000,3);
		    	   if(valora != 0 || valorb != 0){
		    	   		a = 0;
		    	   		b = 0;
		    	   		printf("\n\n*Error uno de los valores ingresado no fue valida*\n");
		    	   	}
		    	   resta = utn_resta(a,b);
		    	   multi = utn_mult(a,b);
		    	   div = utn_div(a,b);
		    	   factoriala = utn_factorial(a);
		    	   factorialb = utn_factorial(b);
		    	   break;
		   }
	   }
	}while(opcion!=3);
	return 0;
}




