//1. Escriba un c�digo que solicite al usuario ingresar dos n�meros enteros y que muestre el producto de ambos.


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,producto;
	cout<< "Ingrese el primer valor: ";
	cin>>a;
	cout<<"Ingrese el segundo valor: ";
	cin>>b;
	
	producto=a*b;
	
	cout<<"El producto de los dos valores es: "<<producto;
	return 0;
}

