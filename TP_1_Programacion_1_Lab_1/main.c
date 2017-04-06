/*******************************************************************
*Programa:TP_1_Programacion_1_Laboratorio_1
*
*Objetivo:
Ingresar_2_numeros_(A_y_B)_;_y_ejecutar_las_siguientes_operaciones:
Suma
Resta
Multiplicacion
Division
Factorial de A
*
*Version:0.1del06abrilde2017
*Autor:Mauro_Andrada
*
********************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0,A=0,B=0,sum=0,rest=0,mult=0,factor=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando A=%d\n",A);
        printf("2- Ingresar 2do operando B=%d\n",B);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese A: ");
                scanf("%d",&A);
                while(A<=0 || A>=255)
                {
                    printf("ingrese numero entre o y 255:");
                    scanf("%d",&A);
                }

                break;

            case 2:
                printf("Ingrese B: ");
                scanf("%d",&B);
                while(B<=1 || B>=255)
                {
                    printf("ingrese numero entre 1 y 255:");
                    scanf("%d",&B);
                }
                break;

            case 3:
                sum=suma(A,B);
                printf("\nLa suma es %d\n\n",sum);
                break;

            case 4:
                rest=resta(A,B);
                printf("\nLa resta es %d\n\n",rest);
                break;

            case 5:
                if(B==0)
                {
                    printf("Ingrese B, no es posible dividir por 0: ");
                    scanf("%d",&B);
                    while(B<=1 || B>=255)
                    {
                        printf("ingrese numero entre 1 y 255:");
                        scanf("%d",&B);
                    }
                }

                division(A,B);
                break;

            case 6:
                mult=multiplicacion(A,B);
                printf("\nLa multiplicacion es %d\n\n",mult);
                break;

            case 7:
                factor = factorial(A);
                printf("\nEl factorial de A es %d\n\n",factor);
                break;

            case 8:
                sum=suma(A,B);
                printf("\nLa suma es %d\n\n",sum);
                rest=resta(A,B);
                printf("\nLa resta es %d\n\n",rest);
                if(B==0)
                {
                    printf("Ingrese B, no es posible dividir por 0: ");
                    scanf("%d",&B);
                    while(B<=1 || B>=255)
                    {
                        printf("ingrese numero entre 1 y 255:");
                        scanf("%d",&B);
                    }
                }

                division(A,B);
                mult=multiplicacion(A,B);
                printf("\nLa multiplicacion es %d\n\n",mult);
                factor = factorial(A);
                printf("\nEl factorial de A es %d\n\n",factor);

                break;

            case 9:
                seguir = 'n';
                break;
        }

}
return 0;

}
