#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

//EPersona lista[LEN];

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);







/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dniABuscar);





/**
 * Verifica si buffer coincide con parametros para campo nombre
 * @param lista el array se pasa como parametro.
 * @return 1 si es correcto, 0 si no es correcto
 */

int verificarNombre(char buffer[]);

/**
 * Verifica si buffer coincide con parametros para campo nombre
 * @param lista el array se pasa como parametro.
 * @return 1 si es correcto, 0 si no es correcto
 */

int verificarEdad(char buffer[]);

/**
 * Verifica si buffer coincide con parametros para campo nombre
 * @param lista el array se pasa como parametro.
 * @return 1 si es correcto, 0 si no es correcto
 */
int verificarDni(char buffer[]);


#endif // FUNCIONES_H_INCLUDED
