//5. Implemente un programa que gestione los datos de stock de una tienda de abarrotes,
	//la informaci�n a recoger ser�: nombre del producto, precio, cantidad en stock. La
	//tienda dispone de 10 productos distintos. El programa debe ser capaz de:
	//a. Dar de alta un producto nuevo.
	//b. Buscar un producto por su nombre.
	//c. Modificar el stock y precio de un producto dado.



#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;
struct producto {
	char nombre[50];
	float precio;
	int cantidad;
};

int main()
{
	struct producto prod,productos[10];
	
	int x,opcion=1;
	
	for (x=0;x<10;x++)
	{
		strcpy(productos[x].nombre,"X");
		productos[x].precio=0;
		productos[x].cantidad=0;
	}
	
	while ((opcion==1 || opcion==2 || opcion==3) && (opcion!=4))
	{
		
		printf("1- Alta de producto\n");
		printf("2- Buscar por nombre\n");
		printf("3- Modificar stock y precio\n");
		printf("4- Salir\n");
		printf("Introduzca una opci�n: ");
		scanf("%d",&opcion);
		
		if (opcion==1)
		{
			printf("Introduzca un nombre: ");
			gets(prod.nombre);
			printf("Introduzca un precio: ");
			scanf("%f",&prod.precio);
			printf("Introduzca un stock: ");
			scanf("%d",&prod.cantidad);
			
			for(x = 9; x >=0; x--)
			{
				if (x!=0)
				{
					strcpy(productos[x].nombre,productos[x-1].nombre);
					productos[x].precio=productos[x-1].precio;
					productos[x].cantidad=productos[x-1].cantidad;
				}
				else
				{
					strcpy(productos[x].nombre,prod.nombre);
					productos[x].precio=prod.precio;
					productos[x].cantidad=prod.cantidad;
				}
			} 
			printf("\nProducto creado. \n\n");
		}
		else if (opcion==2)
		{
			printf("Introduzca un nombre: ");
			gets(prod.nombre);
			
			for(x = 0; x < 10;x++)
			{
				
				if (strcmp(productos[x].nombre,prod.nombre)==0)
				{
					printf("\nNombre: %s\n",productos[x].nombre);
					printf("Precio: %f\n",productos[x].precio);
					printf("Cantidad en Stock: %d\n",productos[x].cantidad);
				}
			} 
			printf("\n\n");
		}
		else if (opcion==3)
		{
			printf("Introduzca un nombre: ");
			gets(prod.nombre);
			
			for(x = 0; x < 10;x++)
			{
				if (strcmp(productos[x].nombre,prod.nombre)==0)
				{
					printf("Introduzca un precio: ");
					scanf("%f",&productos[x].precio);
					printf("Introduzca un stock: ");
					scanf("%d",&productos[x].cantidad);
					printf("\nProducto modificado.");
				}
			} 
			printf("\n\n");
		}
	}
	
	
	system("PAUSE");      
	return 0;
}
