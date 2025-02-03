#include<stdio.h>
#include<stdlib.h> 
#include<string.h>

int main() {

int numero = 0;

printf("Introduce un número positivo para definir el tamaño del array:\n");
scanf("%d",&numero);

if(numero <= 0){
printf("ERROR, el número introducido no es válido");

}else if(numero > 0){

float * array = (float*)malloc(sizeof(float)*numero);

printf("Introduce los valores del array:\n");
scanf("%f", array);
for(int i = 0 ; i<numero ; i++){
	
	array[i] = i + 1;

	printf("Posición %f:\n", array[i]);

	array[i] = i / i-1;
	
}
}
	return 0;

}