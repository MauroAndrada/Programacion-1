#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#define LEN 20



int obtenerEspacioLibre(EPersona lista[])
{
    int i=0;
    int returnEstado=0;

    for(i=0;i<20;i++)
    {
        if(lista[i].estado==0)
        {
            returnEstado=i;
            break;
        }else
        {
            returnEstado = -1;
        }

    }

    return returnEstado;
}


int buscarPorDni(EPersona lista[], int dniABuscar)
{
    int i=0;
    int retornoIndice=0;

    for(i=0;i<20;i++)
    {
        if(lista[i].dni==dniABuscar)
        {
            retornoIndice=i;

        }else
        {
            retornoIndice=-1;
        }
        //printf("\%d",lista[i].dni);
        //printf("\%d",lista[i].estado);
        printf("\%d",retornoIndice);
    }

    return retornoIndice;

}



int verificarNombre(char buffer[])
{
    int i=0;
    int retorno=0;

    while(buffer[i]!='\0')
    {
        if(isdigit(buffer[i])!= 0)
        {
            retorno = 0;
            break;
        }
        retorno = 1;
        i++;
    }
    return retorno;

}

int verificarEdad(char buffer[])
{
    int i=0;
    int retorno=0;

    while(buffer[i]!='\0')
    {
        if(isdigit(buffer[i])== 0)
        {
            retorno = 0;
            break;
        }
        retorno = 1;
        i++;
    }
    return retorno;


}


int verificarDni(char buffer[])
{
    int i=0;
    int retorno=0;

    while(buffer[i]!='\0')
    {
        if(isdigit(buffer[i])== 0)
        {
            retorno = 0;
            break;
        }
        retorno = 1;
        i++;
    }
    return retorno;


}


void bubleSort(EPersona lista[])
{
    int i;
    int flagSwap = 1;
    EPersona aux;
    while(flagSwap)
    {
        flagSwap = 0;
        for(i = 0; i<20 ; i++)
        {
            if(strcmp(lista[i].nombre,lista[i+1].nombre) > 0)
            {
                aux = lista[i];
                lista[i] = lista[i+1];
                lista[i+1] = aux;
                flagSwap = 1;
            }
        }
    }
}
