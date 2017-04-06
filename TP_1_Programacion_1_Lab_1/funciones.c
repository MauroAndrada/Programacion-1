#include <stdio.h>
#include <stdlib.h>


/**
*\sumapidedosnumerosAyB
*\lossuma
*\returnlasumadelosmismos
*/
int suma(int A,int B)
{
    int total;
    total=A+B;
    return total;
}


/**
*\restapidedosnumerosAyB
*\losresta
*\returnlarestadelosmismos
*/

int resta(int A,int B)
{
    int total;
    total=A-B;
    return total;
}


/**
*\multiplicacionpidedosnumerosAyB
*\losmultiplica
*\returnlamultiplicaciondelosmismos
*/

int multiplicacion(int A,int B)
{
    int total;
    total=A*B;
    return total;
}


/**
*\divisionpidedosnumerosAyB
*\losdivide
*\imprimeelresutadodelaoperacionenfloat
*/

void division(float A,int B)
{
    float total;
    total=(float)A/B;
    printf("\nLa division es %f\n\n",total);
}


/**
*\factorialpideunnumeroA
*\calculaelfactorialdelmismo
*\returnfactorialdeA
*/

int factorial(int A)
{
    int i;
    int fact=1;
    switch (A)
    {
        case 0:
            fact = 1;
            break;

        case 1:
            fact = 0;
            break;

        default:

            for (i=A; i > 0;i--)
            {
                fact=fact * i;
            }
            break;



    }
    return fact;

}

