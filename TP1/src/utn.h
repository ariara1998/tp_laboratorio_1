/*
 * utn.h
 *
 *  Created on: 2 abr. 2020
 *      Author: Ariel Arakaki
 */

#ifndef UTN_H_
#define UTN_H_
#endif /* UTN_H_ */

//La funcion toma un numero entero que quiera ingresar el suario (prototipo)
int utn_getInt(int* a,char* mensaje);
//La funcion toma un numero flotante que quiera ingresar el suario (prototipo)
float utn_getFloat(float* a,char* mensaje);
//La funcion toma un caracter que quiera ingresar el suario (prototipo)
char utn_getChar(char* a, char* mensaje);
//La funcion toma un numero entero que quiera ingresar el suario pero con un valor maximo y minimo y
//mensaje de error si el dato ingresado no es un numero y una cantidad de reintentos
int utn_getNumero(int* pResultado,char* mensaje, char* mensajeError,int minimo, int maximo, int reintentos);
//La funcion toma un caracter que quiera ingresar el suario pero con un valor maximo y minimo y
//mensaje de error si el dato ingresado no es un caracter que esta en el rago y una cantidad de reintentos
int utn_getCaracter(char* pResultado, char* mensaje,char* mensajeError, char minimo,char maximo,int reintentos);
//La funcion suma dos enteros
int utn_suma(int x, int y);
//La funcion resta dos enteros
int utn_resta(int x, int y);
//La funcion multiplica dos enteros
int utn_mult(int x, int y);
//La funcion hace la division de dos enteros
int utn_div(int x, int y);
//La funcion factorea un numero entero
int utn_factorial(int x);
//La funcion imprime el resultado de todos los calculos
int utn_imprimirCalculos(int x, int y, int suma, int resta, float division, int multiplicacion,int factorialx, int factorialy);
