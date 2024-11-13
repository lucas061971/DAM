#include<stdio.h>
#include<stdlib.h>

struct Proovedor{

	char nombre[100];
	char direccion[100];
	char telefono[13];

}
struct articulo{
	char nombre[100];
	float precio;
	proveedor prooveedor;

	}
struct inventario{
	Articulo articulos[MAX_ITEMS];
	int cantidades[MAX_ITEMS];
	int totalArticulos;

	}
	int main (){
	Inventario miInventario;
	Articulo articulo = {"Nombre",10{"NomPro","DirPro","telPro"}};

		

}
return 0;
}



