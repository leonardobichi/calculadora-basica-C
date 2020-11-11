#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int menu(int flagA, int flagB, int A, int B)
    {
    int opcion;
    if(flagA==0 && flagB==0)
        {
        system("cls");
        printf("1.Ingresar el primer numero \n");
        printf("2.Ingresar el segundo numero \n");
        printf("3.Calcular la suma \n");
        printf("4.Calcular la resta \n");
        printf("5.Calcular la division \n");
        printf("6.Calcular la multiplicacion \n");
        printf("7.Calcular el factorial \n");
        printf("8.Salir \n");
        fflush(stdin);
        scanf("%d", &opcion);
        system("cls");
    }
    else if(flagA==1 && flagB==0)
        {
        system("cls");
        printf("1.Ingresar el primer numero \n");
        printf("2.Ingresar el segundo numero \n");
        printf("3.Calcular la suma \n");
        printf("4.Calcular la resta \n");
        printf("5.Calcular la division \n");
        printf("6.Calcular la multiplicacion \n");
        printf("7.Calcular el factorial \n");
        printf("8.Salir \n");
        fflush(stdin);
        scanf("%d", &opcion);
        system("cls");
    }else if(flagA==1 && flagB==1)
    {
        system("cls");
        printf("1.Ingresar el primer numero \n");
        printf("2.Ingresar el segundo numero \n");
        printf("3.Calcular la suma \n");
        printf("4.Calcular la resta \n");
        printf("5.Calcular la division \n");
        printf("6.Calcular la multiplicacion \n");
        printf("7.Calcular el factorial \n");
        printf("8.Salir \n");
        fflush(stdin);
        scanf("%d", &opcion);
        system("cls");
    }else if(flagA==1 && flagB==0)
    {
        system("cls");
        printf("1.Ingresar el primer numero \n");
        printf("2.Ingresar el segundo numero \n");
        printf("3.Calcular la suma \n");
        printf("4.Calcular la resta \n");
        printf("5.Calcular la division \n");
        printf("6.Calcular la multiplicacion \n");
        printf("7.Calcular el factorial \n");
        printf("8.Salir \n");
        fflush(stdin);
        scanf("%d", &opcion);
        system("cls");
    }
    return opcion;
    }
int sumar(int A, int B)
{
int respuesta;
respuesta = A+B;
return respuesta;
}
int restar(int A, int B)
{
    int respuesta;
    respuesta = A-B;
    return respuesta;
}
void dividir (int A, int B, char* mensaje, char* Error)
{
    float respuesta;
    if(B!=0){
        respuesta =(float)A/B;
        printf("%s %.2f\n\n", mensaje, respuesta);
        }else{
        printf("%s\n\n", Error);
    }

}
int multiplicar(int A, int B){
    int respuesta;
    respuesta = A*B;
    return respuesta;
}
void GetFactorial(int A, char* mensaje, char* Error){
    int factorial=1;
    if(A>0){
    for(int i=1; i<=A; i++){
            factorial = factorial*i;
        }
        printf("%s %d\n", mensaje, factorial);
    }else{
    printf("%s\n\n", Error);
    }
}
