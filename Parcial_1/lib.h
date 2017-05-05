#include <stdio.h>
#include <stdlib.h>
#define LENUSER 100
#define LENPROD 1000


typedef struct {

    char user[50];
    char password[50];
    int estadoUserFlg;
    int IdUser;

}EUser;

typedef struct {

    char nombreProd[50];
    int estadoProdFlg;
    int IdUser;
    int IdProd;
    float precio;
    int stockProd;
    int calificacion;

}EProducto;

/**
 * Inicializa el estado del usuario a 0,vacio
 * @param inicializa a 0 el array se pasa como parametro.
 */

void initEstadoUser(EUser arrayUser[]);

/**
 * Inicializa el estado del producto a 0,vacio
 * @param inicializa a 0 el array se pasa como parametro.
 */

void initEstadoProd(EProducto arrayProducto[]);

/**
 * Obtiene el primer indice libre del array usuario.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibreUser(EUser arrayUser[]);

/**
 * Obtiene el primer indice libre del array producto.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibreProd(EProducto arrayProducto[]);

/**
 * Verifica si buffer coincide con parametros para campo usuario,
 *el campo acepta solo letras; no numeros ni caracteres especiales.
 * @param lista el array se pasa como parametro.
 * @return 1 si es correcto, 0 si no es correcto
 */

int verificarNombre(char buffer[]);


/**
 * Obtiene el indice que coincide con el user pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param el user a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro user
 */
int buscarPorUser(EUser arrayUser[], char buffer[]);

/**
 * Obtiene el indice que coincide con el user pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param el user a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro user
 */
int buscarPorUserProd(EProducto arrayProducto[], char buffer[]);


