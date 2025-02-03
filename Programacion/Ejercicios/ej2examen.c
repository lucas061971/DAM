#include<stdio.h>
#include<stdlib.h> 
#include<string.h>


void modificar_elemento(int valor){

}

void modificar_por_referencia(int *valor){

}

int main(){

	int n = 0;
	printf("Introduce un número que determine el tamaño del array : ");   //Aqui pido el numero que va a determinar el tamaño del array
	scanf("%d", &n);

	int * array = (int*)malloc(sizeof(int)*n);
	if (array == NULL){
		printf("El número que has introducido para reservar memoria es incorrecto. \n");		// Esto es por si hay un numero no valido que te genere un error y te lo muestre
		return 1;
	}
		for(int i = 0; i < n;i++){
		printf("Introduce un número para el array = ");		//Esto sirve para saber el contenido del array
		scanf("%d", array);
		array[i] = *array;

	}


return 0;
}