#include <stdio.h>
#include <stdlib.h>

void incrementar(int *n){
	printf("Valor recibido: %d\n",*n);
	*n = *n + 1;
	printf("Valor incrementado en la función: %d\n",*n);
}
int main(){
	int valor = 10;
	incrementar (&valor);
	printf("Valor en el main: %d\n", valor);


return 0;
}

// cuando tu accedes a la memoria es porque le estas dando un valor en cambio el []explota .
