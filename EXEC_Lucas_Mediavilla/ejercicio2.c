#include<stdio.h>
#include<stdlib.h>

int main(){

	int n = 0;
	int dia;
	printf("Ingrese el número del dia de la semana :");
	scanf("%d",&n);

	switch(n){

		case 1	:
	       	printf("Hoy es Lunes:",dia);
		break;
		case 2	:
	       	printf("Hoy es Martes:",dia);
		break;
		case 3 :
		printf("Hoy es Miercoles:",dia);
		break;
		case 4 :
		printf("Hoy es Jueves:",dia);
		break;
		case 5 :
		printf("Hoy es Viernes:",dia);
		break;
		case 6 :
		printf("Hoy es Sábado:",dia);
		break;
		case 7 :
		printf("Hoy es Domingo:",dia);
		break;
	

	}
return 0;

	
}
