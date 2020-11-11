#include <stdio.h>
#include <stdlib.h>

/*  Menu de opciones
    param flagA bandera, verifica el ingreso del primer numero.
    param flagB bandera, verifica el ingreso del segundo numero
    param A primer numero
    param B segundo numero
 */
int menu(int flagA, int flagB, int A, int B);
/*
    suma dos numeros.
    A= primer numero.
    B= segundo numero.
    Muestra el resultado
 */
int sumar(int A, int B);
/*
    resta dos numeros.
    A= primer numero.
    B= segundo numero.
    Muestra el resultado
 */

int restar(int A, int B);
/*
    divide dos numeros.
    A= primer numero.
    B= segundo numero.
    Muestra el resultado
    Muestra error si se divide por cero.
 */

void dividir (int A, int B, char* mensaje, char* mensajeError);

/*
    multiplica dos numeros.
    A= primer numero.
    B= segundo numero.
    Muestra el resultado.
 */
int multiplicar(int A, int B);

/* Encuentra factorial de un numero.
   Muestra mensaje del resultado o si tiene un error.
 */
void GetFactorial(int A, char* mensaje, char* Error);
