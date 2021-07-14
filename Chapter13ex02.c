  
/********************************************************
 * Ex02 -- Reconocimiento de valores. *
 * Not an especially earth-shattering program. *
 * *
 * Author: Israel Prado. *
 * *
 * Purpose: Usando punteros, identifica el primer caracter que no sea blanco. *
 * *
 * Usage: *
 * Ingresa un texto cualquiera
 * *
 * Restriction: *
 * Este progrma solo funciona ingresando el texto en la parte central de este
 ********************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *Blanco(char *string); //este busca el primer caractr que no sea blanco

int main()
{
	char string[] = "Ingresa el string aqui"; //el valor de nuestro string 

	printf("el siguiente caracter es el primero que no es blanco: '%c'\n", *Blanco(string)); //imprimo lo que el programa encontro como primer caracter que no sea espacio

	return 0;
}

char *Blanco(char *string) //paso a la funcion con el almacenamiento de memoria activo
{
	//ciclo a travez de todos los caracteres
	while (*string != '\0') {
		//se cumplira si los valores son diferentes de un espacion blanco
		if (! isspace(*string))
	//se regresa la base de almacenamiento al primer caracter que no sea un espacio
			return string; //regresamos el valor de la funcion
		++string;
	}

	return string;
}
