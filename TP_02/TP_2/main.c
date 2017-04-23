#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define LEN 20





int main()
{
    char seguir='s';
    int opcion=0;
    int verNom=0,verDni=0,verEdad=0;
    int i=0;
    int auxEdad=0;
    int lenDni;
    int contPuestaACero=0;
    char buffer[60];
    EPersona lista[LEN];


    for(contPuestaACero=0;contPuestaACero<20;contPuestaACero++)
    {
        lista[contPuestaACero].estado=0;
        contPuestaACero++;
    }

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {

//pedir nombre y verificarlo.Comprobar si no contiene numeros y si es acorde a una nombre

            case 1:
                printf("\nIngrese nombre: ");
                scanf("%s",buffer);
                verNom=verificarNombre(buffer);
                while(verNom==0)
                {
                    printf("\nIngrese nombre correctamente: ");
                    scanf("%s",buffer);
                    verNom=verificarNombre(buffer);
                }
                strcpy(lista[i].nombre,buffer);

//pedir edad y verificarlo.Comprobar si es numero y si es acorde a una edad

                printf("\nIngrese edad: ");
                //scanf("%d",&auxEdad);
                scanf("%s",buffer);
                verEdad=verificarEdad(buffer);
                auxEdad=atoi(buffer);

                while(verEdad==0 || auxEdad>=120)
                {
                    printf("\nIngrese edad correctamente: ");
                    scanf("%s",buffer);
                    verEdad=verificarEdad(buffer);
                    auxEdad=atoi(buffer);
                }
                lista[i].edad=auxEdad;

//pedir DNI y verificarlo.Comprobar si es numero y si es acorde a DNI

                printf("\nIngrese DNI: ");
                scanf("%s",buffer);
                verDni=verificarDni(buffer);
                lenDni=strlen(buffer);

                while(verDni==0 || lenDni>10)
                {
                    printf("\nIngrese DNI correctamente: ");
                    scanf("%s",buffer);
                    verDni=verificarDni(buffer);
                    lenDni=strlen(buffer);
                }
                strcpy(lista[i].dni,buffer);
                lista[i].estado='1';
                i++;


                printf("\t%c\t%d\t%d\t%d",lista[i].nombre,lista[i].edad,lista[i].dni,lista[i].estado);

                break;


            case 2:

                break;

            case 3:

                break;


            case 4:

                break;


            case 5:
                seguir = 'n';
                break;
        }

        printf("\t%s\t%s\t%s",lista[i].nombre,lista[i].edad,lista[i].dni,lista[i].estado);
    }

    return 0;
}
