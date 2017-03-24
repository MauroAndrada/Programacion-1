#include <stdio.h>
#include <stdlib.h>
#include "funcion1.h"
#include "verificacionnum.h"

int suma(int num1,int num2);
int resta(int num1,int num2);
int multiplicacion(int num1,int num2);
int division(int num1,int num2);
int verificacionNum();

int main()
{

    int z,r,m;
    int ver,num1,num2;
    float d;

    num1=verificacionNum();

    num2=verificacionNum();


    printf("Seleccione numero de operacion:\n\n1-suma\n\n2-resta\n\n3-multiplicacion\n\n4-division\n\n");
    //printf("\n1-suma\n");
    //printf("\n2-resta\n");
    //printf("\n3-multiplicacion\n");
    //printf("\n4-division\n");
    scanf("%d",&ver);

    switch(ver)
    {
    case 1:
        z=suma(num1,num2);
        printf("La suma es %d",z);
        break;

    case 2:
        r=resta(num1,num2);
        printf("La resta es %d",r);
        break;

    case 3:
        m=multiplicacion(num1,num2);
        printf("La multiplicacion es %d",m);
        break;

    case 4:
        d=division(num1,num2);
        printf("La division es %f",d);
        break;
    }

return 0;

}





