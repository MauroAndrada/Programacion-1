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
