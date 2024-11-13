#include <stdio.h>
#include <stdlib.h>

int main(){
	int edad;

	printf("Ingrese su edad:");
	scanf("%d",&edad);

	if(edad < 12){
		printf("Categoría->Niño\n");
		
	} else if (edad >12 && edad <17){
             	printf("Categoría->Adolescente\n");
	
	} else if (edad >18 && edad <64){
		printf("Categoría->Adulto\n");

	} else if (edad > 65){
		printf("Categoría->Mayor\n");
	} else {
		printf("Categoría no válida\n");
	}
		return 0 ;
}
