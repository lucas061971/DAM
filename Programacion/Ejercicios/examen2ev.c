#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

int numero ;
int *array;
int *array2;
printf("Introduce un número positivo para determinar el tamaño del primer array:");
scanf("%d", &numero);

array = (int*)malloc(numero* sizeof(int));

if(array == NULL){
printf("Error");

return 1;
}
for (int i = 0; i < numero; i++){
	printf("Escribe un número para el array:");
	scanf("%d", &array[i]);

}
printf("Introduce un número positivo para determinar el tamaño del segundo array:");
scanf("%d", &numero);
array2 = (int*)malloc(numero* sizeof(int));

if(array2 == NULL){
printf("Error");

return 1;
}

for (int i=0; i< numero; i++){
	printf("Escribe un número para el segundo array:");
	scanf("%d", &array[i]);

}
int pregunta;
printf("Desea concatenar o sumar coordenada a coordenada?");
scanf("%d", &pregunta);

free (array);
free (array2);
	return 0;
}