#include<stdio.h>
#include<stdlib.h>

int main (){

int num = 0;

if(num < 0){
	printf("El número %d es negativo");
	scanf("%d",&num);
}else if(num == 0){
	printf("El número %d es cero");
	scanf("%d",&num);
}else if(num > 0){
	printf("El número %d es positivo");
	scanf("%d",&num);
}
return 0;
}

