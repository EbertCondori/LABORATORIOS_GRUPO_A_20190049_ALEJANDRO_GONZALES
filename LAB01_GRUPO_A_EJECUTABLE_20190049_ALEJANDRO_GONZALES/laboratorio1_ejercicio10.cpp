
//10. Escribir un programa que almacene la cadena de caracteres contrase�a en una variable, pregunte al usuario por la contrase�a hasta que introduzca la contrase�a correcta.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string pass,con;
		pass="contrase�a";
	    con="";
	while (con!= pass){
		cout<<"Ingrese la contrase�a: "; cin>>con;
		
	}
	cout<<"Contrase�a correcta";
	return 0;
}

