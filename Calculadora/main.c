#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='n';
    int num1;
    int num2;
    int flagA=0;
    int flagB=0;
    int resultado;

    do{
    switch(menu(flagA, flagB, num1, num2)){
case 1:
    printf("Ingrese el primer numero ");
    scanf("%d",&num1);
    flagA=1;
    system("pause");
    break;
case 2:
    if(flagA==1){
    printf("ingrese el segundo numero ");
    scanf("%d", &num2);
    flagB=1;
    }else{
    printf("Debe ingresar los dos numeros \n\n");
    }
    system("pause");
    break;
case 3:
    if(flagA==1 && flagB==1){
    resultado=sumar(num1, num2);
    printf ("El resultado de la suma es: %d\n\n\n", resultado);
    }else{
        printf("Debe ingresar los dos numeros  \n\n");
    }
    system("pause");
    break;
case 4:
    if(flagA==1 && flagB==1){
    resultado=restar(num1, num2);
    printf("El resultado de la resta es: %d\n\n", resultado);
    }else{
        printf("Debe ingresar los dos numeros  \n\n");
    }
    system("pause");
    break;
case 5:
    if(flagA==1 && flagB==1){
    dividir(num1, num2,"El resultado de la division es: ", "Error, no se puede dividir por cero");
    }else{
        printf("Debe ingresar los dos numeros  \n\n");
    }
    system("pause");
    break;
case 6:
    if(flagA==1 && flagB==1){
    resultado=multiplicar(num1, num2);
    printf("El resultado de la multiplicacion es: %d\n\n", resultado);
    }else{
        printf("Debe ingresar los dos numeros  \n\n");
    }
    system("pause");
    break;
case 7:
    if(flagA==1){
    GetFactorial(num1, "El resultado es: ", "Error, no se puede factoriar por cero o numeros negativos");
    }else{
        printf("Debe ingresar los dos numeros  \n\n");
    }
    system("pause");
    break;
case 8:
    printf("¿Confirma Salida? s/n ");
    fflush(stdin);
    scanf("%c", &seguir);
    break;
default:
    printf("Ingrese una opcion valida \n\n");
    system("pause");
    }
    }while(seguir=='n');
    return 0;
}
