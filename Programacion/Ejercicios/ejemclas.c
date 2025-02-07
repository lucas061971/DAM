#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int es_consonante(char palabra){

	return ( palabra > 'a' && palabra <= 'z') && !( palabra == 'a' || palabra == 'e' || palabra == 'i' || palabra == 'o' || palabra == 'u') || ( palabra > 'A' && palabra <= 'Z') && !( palabra == 'A' || palabra == 'E' || palabra == 'I' || palabra == 'O' || palabra == 'U');

}


/* 
Paso 1: "hola"




*/
int contar_consonantes(const char *palabra){

 if (*palabra == '\0'){
 return 0;
 }


	return es_consonante(*palabra) + contar_consonantes(palabra + 1);

	// Compruebo la última letra si es consonante o no. 
	// Si es consonante, añado uno a contador
	// Si no, no

	// Luego, resto 1 a la posición

	// Compruebo para el siguiente. Eso en recursión es volver a llamar a la funión con los nuevos argumentos.
	// OJO: el valor de retorno de la llamada a contar_consonantes, tengo que devolverlo.
}

int main(){

char palabra[40];

	printf("Introduce una palabra : ");
	scanf("%s", palabra);

	printf("Numero de consonantes : %d", contar_consonantes(palabra));



return 0;
}