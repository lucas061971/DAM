#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	
	int main(){
		float num1, num2, resultado;
		char operador;

		
		printf("Introduce el primer numero:");
		scanf("%f",&num1);

		printf("Introduce el segundo número:");
		scanf("%f",&num2);

		printf("Intoduce el operador:");
		scanf("%c",&operador);

		
		if(operador == '+'){
			resultado = num1 + num2;
			printf("El resultado es:%f\n",resultado);

		} else if(operador == '-'){
			resultado = num1 - num2;                                        
			printf("El resultado es:%f\n",resultado);

		} else if(operador == '*'){
			resultado = num1 * num2;
			printf("El resultado es:%f\n",resultado);

		} else if(operador == '/'){
			resultado = num1 / num2;
			printf("El resultado es:%f\n",resultado);

		} else {
			printf("Te has equivocado de operador:\n");
	
		
		}
		return 0;

		}

