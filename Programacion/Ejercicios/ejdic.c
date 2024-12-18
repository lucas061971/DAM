#include<stdio.h>
#include<stdlib.h> 
#include<string.h>


int main(){
	int *arr;
	int num;
	printf("Indica el tamaño del array:\n");
	scanf("%d", &num);

	num *=2;

	arr = (int *)malloc(num * sizeof(int));
	
	if (arr == NULL) {
		printf("Error al asignar memoria.\n");
		return 1;
	}
	for (int i = 0; i < num; i++){
		arr[i] = i*2 + 2;
	}
	printf("Imprimir los valores de un array:\n");
	for (int i = 0; i < num; i++){
		printf("%d\n", arr[i]);
	}
	arr = (int *)realloc(arr,num * sizeof(int));
	
	if (arr == NULL) {
		printf("Error al asignar memoria.\n");
		return 1;
	}
	for (int i = 0; i < num; i++){
		arr[i] = i*2 + 2;
	}
	printf("Imprimir los valores de un array:\n");
	for (int i = 0; i < num; i++){
		printf("%d\n", arr[i]);
	}
	free(arr);

return 0;
}