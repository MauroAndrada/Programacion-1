#include <stdio.h>
#include <stdlib.h>

int verificacionNum()
{
        int num;
        printf("ingrese numero: ");
        scanf("%d",&num);

        while(num<1 || num>255)
        {
            printf("ingrese numero entre 1 y 255:");
            scanf("%d",&num);
        }

return num;
}
