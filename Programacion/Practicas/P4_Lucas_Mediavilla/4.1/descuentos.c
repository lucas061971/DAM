#include <stdio.h>
#include <stdlib.h>

int main(){
	float costo;
	float costoreal;

		printf("Introduce cuanto te costo el producto\n");
		scanf("%f", &costo);
	float rol;
		printf("Cual es tu Rol?\n 1. Estudiante \n 2. Profesor \n 3.Otro\n");
		scanf("%f", &rol);

		if( rol == 1){
			costoreal = costo * 0.85;
			printf("%f\n",costoreal);
		} else if(rol == 2){
			costoreal = costo * 0.90;
			printf("%f\n",costoreal);
		}else {
			printf("No tienes descuento\n");
		}


	return 0;

}
