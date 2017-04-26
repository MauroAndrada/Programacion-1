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
    int indVacio=0;
    int dniABuscar;
    int contIngresados=0;
    int indiceDniABuscar=0;
    char buffer[60];
    int cont18=0;
    int cont19e35=0;
    int cont35=0;
    EPersona lista[LEN];


    for(contPuestaACero=0;contPuestaACero<20;contPuestaACero++)
    {
        lista[contPuestaACero].estado=0;
        contPuestaACero++;
    }

    while(seguir=='s')
    {
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {

//pedir nombre y verificarlo.Comprobar si no contiene numeros y si es acorde a una nombre

            case 1:

                indVacio=obtenerEspacioLibre(lista);
                if(indVacio<0)
                {
                    printf("Borrar elementos de la lista, sin lugares disponibles");
                    break;
                }else
                {
                    i=indVacio;
                }

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

                if(auxEdad<=18)
                {
                    cont18++;
                }else if(auxEdad>18 || auxEdad<35)
                {
                    cont19e35++;
                }else{
                cont35++;
                }

                lista[i].edad=auxEdad;

//pedir DNI y verificarlo.Comprobar si es numero y si es acorde a DNI

                printf("\nIngrese DNI: ");
                scanf("%s",buffer);
                verDni=verificarDni(buffer);
                lenDni=strlen(buffer);

                while(verDni==0 || lenDni>10)
                {
                    printf("\nIngrese DNI correctamente: \n");
                    scanf("%s",buffer);
                    verDni=verificarDni(buffer);
                    lenDni=strlen(buffer);
                }
                lista[i].dni=atoi(buffer);
                lista[i].estado= 1;


                printf("%s",lista[i].nombre);
                printf("\t%d",lista[i].edad);
                printf("\t%d",lista[i].dni);
                printf("\t%d",lista[i].estado);
                printf("\t%d",i);

                contIngresados++;
                //printf("\t%c\t%d\t%d\t%d",lista[i].nombre,lista[i].edad,lista[i].dni,lista[i].estado);

                break;


            case 2:

                /*printf("\nIngrese DNI de persona a borrar: ");
                scanf("%s",buffer);
                //printf("\n%s\n",buffer);
                verDni=verificarDni(buffer);
                lenDni=strlen(buffer);

                while(verDni==0 || lenDni>10)
                {
                    printf("\nIngrese DNI correctamente: \n");
                    scanf("%s",buffer);
                    verDni=verificarDni(buffer);
                    lenDni=strlen(buffer);
                }
                dniABuscar=atoi(buffer);

                indiceDniABuscar=buscarPorDni(lista, dniABuscar);
                if(indiceDniABuscar==-1)
                {
                    printf("\nNo se encuentra DNI en la lista\n");

                }

                lista[indiceDniABuscar].estado=0;

                /*printf("%s",lista[0].nombre);
                printf("\t%d",lista[0].edad);
                printf("\t%d",lista[0].dni);
                printf("\t%d",lista[0].estado);
                //printf("\t%d",0);

                printf("\n%s",lista[1].nombre);
                printf("\t%d",lista[1].edad);
                printf("\t%d",lista[1].dni);
                printf("\t%d",lista[1].estado);
                //printf("\n\t%d",1);

                printf("\n%s",lista[2].nombre);
                printf("t%d",lista[2].edad);
                printf("\t%d",lista[2].dni);
                printf("\t%d",lista[2].estado);
                //printf("\n\t%d",2);*/




                break;

            case 3:

                for(i=0;i<contIngresados;i++)
                {
                    printf("\t\n\n%s",lista[i].nombre);
                }


                break;


            case 4:
                for(i=0;i<contIngresados;i++)
                {

                }


                break;


            case 5:
                seguir = 'n';
                break;
        }

        //printf("\t%s\t%s\t%s",lista[i].nombre,lista[i].edad,lista[i].dni,lista[i].estado);
    }

    return 0;
}
