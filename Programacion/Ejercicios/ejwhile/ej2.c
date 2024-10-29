#include <stdio.h>
#include <stdlib.h>

int main() {
	int suma =  0;
	int n = 1847;
	int resultado_suma = 0;

	while (n != 0) {
		resultado_suma = n/10;
		n = n % 10;
		printf("n = %d\n",n);
		resultado_suma = n;
		suma += n;
}
	printf("La suma de los números es %d\n", suma);
	return 0;
}
