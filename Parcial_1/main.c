#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "lib.h"
#define LENUSER 100
#define LENPROD 1000


int main()
{
    EUser arrayUser[LENUSER];
    EProducto arrayProducto[LENPROD];
    char seguir='s';
    int opcion=0;
    int contbad=0;
    int indiceUser=0;
    int indiceProd=0;
    char buffer[60];
    int validarUser=0;
    int validarContrasena=0;
    int contIdUser=0;
    int contIdProd=0;
    int contbadU=0;
    int i=0;
    int indiceUserEncontrado;
    int indiceIdUserVendedor;
    int IdUserVendedor;
    int validarProd;
    float precio;
    int stock;
    int calificacion;
    int indiceProdModificar;
    int cantVendida;


    initEstadoUser(arrayUser);
    initEstadoProd(arrayProducto);



    while(seguir=='s')
    {
        printf("\n1- Alta usuario\n");
        printf("2- Modificar datos usuario\n");
        printf("3- Baja usuario\n");
        printf("4- Publicar producto\n");
        printf("5- Modificar publicacion\n");
        printf("6- Cancelar publicacion\n");
        printf("7- Comprar producto\n");
        printf("8- Listar publicaciones de usuario\n");
        printf("9- Listar publicaciones\n");
        printf("10- Listar usuarios\n");
        printf("11- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                indiceUser=obtenerEspacioLibreUser(arrayUser);
                if(indiceUser<0)
                {
                    printf("Borrar elementos de la lista usuario, sin lugares disponibles");
                    break;
                }

                printf("\nIngrese usuario: ");
                scanf("%s",buffer);
                validarUser=verificarNombre(buffer);
                while(validarUser==0)
                {
                    printf("\nIngrese Usuario correctamente: ");
                    scanf("%s",buffer);
                    validarUser=verificarNombre(buffer);
                }
                strcpy(arrayUser[indiceUser].user,buffer);

                //se utiliza misma comprobacion que para el user; solo letras

                printf("\nIngrese password: ");
                scanf("%s",buffer);
                validarContrasena=verificarNombre(buffer);
                while(validarContrasena==0)
                {
                    printf("\nIngrese password correctamente: ");
                    scanf("%s",buffer);
                    validarContrasena=verificarNombre(buffer);
                }
                strcpy(arrayUser[indiceUser].password,buffer);

                arrayUser[indiceUser].IdUser=contIdUser;
                arrayUser[indiceUser].estadoUserFlg=1;
                contIdUser++;
                for(i=0;i<10;i++)
                {
                printf("\t%d",indiceUser);
                printf("\t%s",arrayUser[i].user);
                printf("\t%s",arrayUser[i].password);
                printf("\t%d",arrayUser[i].IdUser);
                printf("\t%d\n",arrayUser[i].estadoUserFlg);
                }


                break;

            case 2:
                printf("\nIngrese usuario a modificar: ");
                scanf("%s",buffer);
                validarUser=verificarNombre(buffer);
                while(validarUser==0)
                {
                    printf("\nIngrese usuario correctamente: ");
                    scanf("%s",buffer);
                    validarUser=verificarNombre(buffer);
                }

                indiceUserEncontrado=buscarPorUser(arrayUser, buffer);
                printf("\n%d\n",indiceUserEncontrado);
                if(indiceUser==-1)
                {
                    printf("\nNo se encuentra usuario en la lista\n");
                    break;
                }
                printf("\n1 - Modicar usuario");
                printf("\n2 - Modicar password");
                scanf("%d",&opcion);

                switch(opcion)
                {
                    case 1:
                        printf("\nIngrese nuevo nombre usuario: \n");
                        scanf("%s",buffer);
                        validarUser=verificarNombre(buffer);
                        while(validarUser==0)
                        {
                            printf("\nIngrese Usuario correctamente: \n");
                            scanf("%s",buffer);
                            validarUser=verificarNombre(buffer);
                        }
                        strcpy(arrayUser[indiceUserEncontrado].user,buffer);

                        break;

                    case 2:
                        printf("\nIngrese nuevo password: \n");
                        scanf("%s",buffer);
                        validarUser=verificarNombre(buffer);
                        while(validarUser==0)
                        {
                            printf("\nIngrese password correctamente: \n");
                            scanf("%s",buffer);
                            validarUser=verificarNombre(buffer);
                        }
                        strcpy(arrayUser[indiceUserEncontrado].password,buffer);

                        break;

                    default:
                        printf("\nIngrese opcion correcta\n");
                        scanf("%d",&opcion);
                        contbadU++;
                        if(contbadU==5)
                        {
                            break;
                        }
                        break;
                }

            case 3:
                printf("\nIngrese usuario a borrar: ");
                scanf("%s",buffer);
                validarUser=verificarNombre(buffer);
                while(validarUser==0)
                {
                    printf("\nIngrese usuario correctamente: ");
                    scanf("%s",buffer);
                    validarUser=verificarNombre(buffer);
                }

                indiceUserEncontrado=buscarPorUser(arrayUser, buffer);
                printf("\n%d\n",indiceUserEncontrado);
                if(indiceUser==-1)
                {
                    printf("\nNo se encuentra usuario en la lista\n");
                    break;
                }
                arrayUser[indiceUserEncontrado].estadoUserFlg=0;

                break;

            case 4:

                indiceProd=obtenerEspacioLibreProd(arrayProducto);
                if(indiceProd<0)
                {
                    printf("Borrar elementos de la lista producto, sin lugares disponibles");
                    break;
                }

                printf("\nIngrese usuario vendedor: ");
                scanf("%s",buffer);
                validarUser=verificarNombre(buffer);
                while(validarUser==0)
                {
                    printf("\nIngrese Usuario correctamente: ");
                    scanf("%s",buffer);
                    validarUser=verificarNombre(buffer);
                }
                indiceIdUserVendedor=buscarPorUser(arrayUser, buffer);
                IdUserVendedor=arrayUser[indiceIdUserVendedor].IdUser;
                printf("\nIngrese nombre producto: "); //solo letras
                scanf("%s",buffer);
                validarProd=verificarNombre(buffer);
                while(validarProd==0)
                {
                    printf("\nIngrese nombre producto correctamente: ");
                    scanf("%s",buffer);
                    validarProd=verificarNombre(buffer);
                }
                strcpy(arrayProducto[indiceProd].nombreProd,buffer);
                printf("\nIngrese precio: ");
                scanf("%f",&precio);
                while(precio<0)
                {
                    printf("\nIngrese precio correctamente: ");
                    scanf("%f",&precio);
                }
                arrayProducto[indiceProd].precio=precio;
                printf("\nIngrese stock: ");
                scanf("%d",&stock);
                while(stock<0)
                {
                    printf("\nIngrese stock correctamente: ");
                    scanf("%d",&stock);
                }

                printf("\nIngrese calificacion (1-5): ");
                scanf("%d",&calificacion);
                if(calificacion>5)
                {
                    printf("\nIngrese calificacion correctamente: ");
                    scanf("%d",&calificacion);
                }else if(calificacion<1)
                {
                    printf("\nIngrese calificacion correctamente: ");
                    scanf("%d",&calificacion);
                }else
                {
                    printf("\nSe ingresa calificacion por default: 3");
                    calificacion=3;
                }

                strcpy(arrayProducto[indiceProd].nombreProd,buffer);
                arrayProducto[indiceProd].stockProd=stock;
                arrayProducto[indiceProd].IdProd=contIdProd;
                arrayProducto[indiceProd].estadoProdFlg=1;
                arrayProducto[indiceProd].IdUser=IdUserVendedor;
                arrayProducto[indiceProd].calificacion=calificacion;

                for(i=0;i<10;i++)
                {
                printf("\t%d",indiceProd);
                printf("\t%d",arrayProducto[i].stockProd);
                printf("\t%d",arrayProducto[i].IdProd);
                printf("\t%d",arrayProducto[i].estadoProdFlg);
                printf("\t%d",arrayProducto[i].IdUser);
                printf("\t%d",arrayProducto[i].calificacion);
                printf("\t%f",arrayProducto[i].precio);

                }

                break;

            case 5:

                printf("\nIngrese usuario vendedor: ");
                scanf("%s",buffer);
                validarUser=verificarNombre(buffer);
                while(validarUser==0)
                {
                    printf("\nIngrese usuario correctamente: ");
                    scanf("%s",buffer);
                    validarUser=verificarNombre(buffer);
                }

                indiceUserEncontrado=buscarPorUser(arrayUser, buffer);
                if(indiceUser==-1)
                {
                    printf("\nNo se encuentra usuario en la lista\n");
                    break;
                }
                for(i=0;i<LENPROD;i++)
                {

                    indiceProdModificar=buscarPorUserProd( arrayProducto,  buffer);
                    if(indiceProdModificar!=-1)
                    {
                        printf("id prod \tnombre prod\tprecio\tcantidad vendidad\tstock");
                        printf("%d",arrayProducto[indiceProdModificar].IdProd);
                        printf("%s",arrayProducto[indiceProdModificar].nombreProd);
                        printf("%f",arrayProducto[indiceProdModificar].precio);
                        printf("%d",cantVendida);
                        printf("%d",arrayProducto[indiceProdModificar].stockProd);

                    }
                }






                break;

            case 6:
                break;

            case 7:
                break;

            case 8:
                break;

            case 9:
                break;

            case 10:
                break;

            case 11:
                seguir = 'n';
                break;

            default:
                printf("Ingrese opcion correcta");
                scanf("%d",&opcion);
                contbad++;
                if(contbad==5)
                {
                    break;
                }
                break;

        }

    }







    return 0;
}
