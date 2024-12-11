#include <iostream>
using namespace std;

int main() {
	float precio = 0,IVA = 0,TT = 0;
	
	cout<<"Introduzca el precio del producto: "; cin>>precio;
	
	IVA=(16*precio)/100;
	
	TT=IVA+precio;
	
	cout<<"\nEl precio del producto es: "<<precio<<"\nEl IVA es: "<<IVA<<" (16%)\n";
	
	cout<<"El precio total es: "<<TT<<"\n";
	
	return 0;
}
