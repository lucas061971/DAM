#include<stdio.h>
#include<stdlib.h> 
#include<string.h>


int main(){

	int numero;

	printf("Cuantos números quieres introducir?\n");
	scanf("%d", &numero);

	int * array = (int*)malloc(sizeof(int)*numero);




	// En el caso de que argc sea 0:

			// SIN LINEA DE COMANDOS
			//1. Pedir al usuario cuántos enteros quiere introducir.

			// 2. Reservar un array de ese tamaño.

			// 3. Rellenar el array preguntando por pantalla.

	// ELSE:
			// CON LINEA DE COMANDOS

			// 1. Leer cuántos (argv[1])

			// 2. Reservar memoria para ese valor

			// 3.  Rellenar el array con los siguientes argumentos


	// ORDENARLOS



	// IMPRIMIR EL ARRAY ORDENADO

}