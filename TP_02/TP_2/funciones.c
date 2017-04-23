#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#define LEN 20



int obtenerEspacioLibre(EPersona lista[])
{


}


int buscarPorDni(EPersona lista[], int dni)
{



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
