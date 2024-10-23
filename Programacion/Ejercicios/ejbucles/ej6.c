#include<stdio.h>
#include<stdlib.h>

int main () { 
	
	int i;	
	int resultado=0;
	int n;
	printf("Dime un número:\n");
	scanf("%d", &n);

	for( i = 1; i <= n; i++){
		resultado = i + resultado;
		printf("%d\n", resultado); 

	}
	return 0;
	}
		
