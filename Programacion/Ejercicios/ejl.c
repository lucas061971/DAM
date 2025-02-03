#include<stdio.h>
#include<stdlib.h> 
#include<string.h>

int main(){

        int array[10] = {-5,1,9,10,11,12,17,120,150,1500};
        int a_buscar=120;
        int encontrado=busqueda_binaria(array,a_buscar,0,9);

        return 0;
}

        int busqueda_binaria(int*array,int a_buscar,int ini, int fin){

        int mitad =(ini + fin)/2;
        if (array [mitad]== a_buscar){

        return 1;

        }else if(array < a_buscar){
        ini = mitad + 1;
        }else{
        ini = mitad - 1;
        }
}