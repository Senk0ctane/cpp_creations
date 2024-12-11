#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int opc,k;
	
	cout<<"Bienvenido\n Favor seleccione la opcion deseada:\n";
	cout<<"1. Encontrar el cubo de un numero\n";
	cout<<"2. Descubrir si el numero es par o impar\n";
	cout<<"3. Salir\n\n"; cin>>opc;
	
	switch(opc){
		case 1: cout<<"\nIngrese un numero "; cin>>k;
		k=pow(k,3);
		cout<<"\nEl cubo del numero es "<<k; break;
		
		case 2: cout<<"\nIngrese el numero "; cin>>k;
		if(k % 2==0){
			cout<<"el numero es par";
		} else {
			cout<<"El numero es impar";
		}
		
		case 3: cout<<"\nVuelva pronto!";
	}
	return 0;
}
