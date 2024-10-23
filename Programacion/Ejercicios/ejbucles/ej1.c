#include<stdio.h>
#include<stdlib.h>


/**
 * 
 * 	Autor: Lucas Mediavilla Robledo
 */

int main(){

	int i = 0;

	for ( /*valor inicial*/ i = 0; i<11 /*condicion*/ ; i = i + 1 /*Código a ejecutar entre vueltas*/){
	printf("%d\n ",i);
	}
	
	  /**
	   	1) inicializado i=0
		2) compruebo si i<5. Como se cumple, ejecuto el interior del bucle
		3) printf
		4) Terminando el interior del bucle, ejecuto el "código entre vueltas": i=i+1
		5) Vuelvo al punto 2. Compruebo si i<5. Se cumple porque i==1. Ahora i vale 2
		6) printf
		7) Terminando el interior del bucle, ejecuto e11 interior

**/
return 0;
}
 


