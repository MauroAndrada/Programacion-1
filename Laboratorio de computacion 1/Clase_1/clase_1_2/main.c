#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0;
    int num2=0;
    int suma=0;
    printf("Ingrese primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese segundo numero: ");
    scanf("%d",&num2);

    suma=num1+num2;
    printf("La suma de los numeros es: %d",suma);

    return 0;
}
