#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "lib.h"
#define LENUSER 100
#define LENPROD 1000

void initEstadoUser(EUser arrayUser[])
{
    int i=0;

    for(i=0;i<LENUSER;i++)
    {
        arrayUser[i].estadoUserFlg=0;

    }
}

void initEstadoProd(EProducto arrayProducto[])
{
    int i=0;

    for(i=0;i<LENPROD;i++)
    {
        arrayProducto[i].estadoProdFlg=0;

    }

}


int obtenerEspacioLibreUser(EUser arrayUser[])
{
    int i=0;
    int indiceEspacioLibreUser=0;

    for(i=0;i<20;i++)
    {
        if(arrayUser[i].estadoUserFlg==0)
        {
            indiceEspacioLibreUser=i;

            break;
        }else
        {
            indiceEspacioLibreUser = -1;
        }
    }

    return indiceEspacioLibreUser;


}

int obtenerEspacioLibreProd(EProducto arrayProducto[])
{
    int i=0;
    int indiceEspacioLibreProd=0;

    for(i=0;i<20;i++)
    {
        if(arrayProducto[i].estadoProdFlg==0)
        {
            indiceEspacioLibreProd=i;

            break;
        }else
        {
            indiceEspacioLibreProd = -1;
        }
    }

    return indiceEspacioLibreProd;


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

int buscarPorUser(EUser arrayUser[], char buffer[])
{
    int i=0;
    int retornoIndice;

    for(i=0;i<LENUSER;i++)
    {
        if(strcmp(arrayUser[i].user,buffer)==0)
        {
            retornoIndice=i;
            break;

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

int buscarPorUserProd(EProducto arrayProducto[], char buffer[])
{
    int i=0;
    int retornoIndice;

    for(i=0;i<LENUSER;i++)
    {
        if(strcmp(arrayProducto[i].IdUser,buffer)==0)
        {
            retornoIndice=i;
            break;

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



