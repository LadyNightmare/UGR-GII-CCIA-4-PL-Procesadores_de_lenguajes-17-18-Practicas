////////////////////////////////////////////////////////////////////////////////
//
// Ismael Sánchez García
// Juan Manuel Fajardo Sarmiento
// Francisco Javier Caracuel Beltrán
//
// PL - Procesadores de Lenguajes - CCIA
//
// ETSIIT - UGR
//
// Curso 2017-2018
//
// semantico.h
//
// Archivo con las constantes necesarias para desarrollar el analizador
// semántico
//
////////////////////////////////////////////////////////////////////////////////

#ifndef SEMANTIC_H
#define SEMANTIC_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef enum {
	marca,
	funcion,
	variable,
	parametro_formal,
} tipoEntrada ;

typedef enum {

	ENTERO,
	FLOTANTE,
	CARACTER,
	BOOLEANO,
	DESCONOCIDO,
	NO_ASIGNADO
} dtipo ;

typedef struct {

	tipoEntrada entrada ;
	char *nombre ;
	dtipo tipoDato ;
	unsigned int parametros ;
	unsigned int dimensiones ;
	/* Tamaño Dimensión 1 */
	int TamDimen1 ;
	/* Tamaño Dimensión 2 */
	int TamDimen2 ;

} entradaTS ;

#define MAX_TS 500

unsigned int TOPE ;
unsigned int Subprog ; /* Tope de la pila */

/* Indicador de comienzo de bloque de un subprog */
entradaTS TS[MAX_TS] ;

/* Pila de la tabla de símbolos */
typedef struct {

	/* Atributo del símbolo (si tiene) */
	int atrib ;
	/* Nombre del lexema */
	char *lexema ;
  	/* Tipo del símbolo */
	dtipo tipo ;

} atributos ;


#define YYSTYPE atributos
/* A partir de ahora, cada símbolo tiene */
/* una estructura de tipo atributos */
/* Lista de funciones y procedimientos para manejo de la TS */

// Inserta una marca de bloque en la tabla de símbolos
void TS_InsertaMARCA();

/* Fin de funciones y procedimientos para manejo de la TS */

#endif
