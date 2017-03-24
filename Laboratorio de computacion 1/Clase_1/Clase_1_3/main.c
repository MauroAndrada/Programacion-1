#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    int i;
    int contpos=0;
    int contneg=0;


    for(i=0;i<10;i++)
    {
        printf("Ingrese numero: ");
        scanf("%f",&num);

        if (num>=0)
        {
            contpos++;
        }

        if (num<0)
        {
            contneg++;
        }



    }

    printf("Cantidad positivos: %d ", contpos);

    printf(" Cantidad negativos: %d", contneg);

    return 0;
}
