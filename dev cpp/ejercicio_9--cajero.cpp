#include <iostream>
#include <locale.h>
#include <sstream>
#include<conio.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int k;
	float saldo=1000,nuevo;
	string opc;
	int seguro;
	char confirmar;
	
	cout<<"\tBienvenido\n";
	system("pause");
	
	do{
	cout<<"\nFavor seleccione una opción\n";
	cout<<"1. Revisar fondos disponibles\n";
	cout<<"2. Ingresar fondos\n";
	cout<<"3. Retirar fondos\n";
	cout<<"4. Salir\n"<<endl;
	cin>>opc;
	
	system("cls");
	
	stringstream ss(opc);
	
	if(ss >> seguro){
		
		switch (seguro){
			case 1:
				cout<<"\nSu saldo actual es de "<<saldo<<endl; break;
		
			case 2:
				cout<<"\nFavor introduzca el monto a ingresar\n"; cin>>nuevo;
				while(nuevo<1){
					cout<<"\nFavor introduzca un monto válido "; cin>>nuevo;
			}
				saldo+=nuevo;
				cout<<"\nSu nuevo saldo es de "<<saldo<<endl;
			break;
		
			case 3:
				cout<<"\nFavor introduzca el monto a retirar\n"; cin>>nuevo;
				while(nuevo<1){
					cout<<"\nSu saldo actual es "<<saldo;
					cout<<"\nFavor introduzca un monto válido "; cin>>nuevo;
				}
				while (nuevo>saldo){
					system("cls");
					cout<<"\nNo dispone de saldo suficiente para realizar la operación\n";
					cout<<"Su saldo actual es "<<saldo;
					cout<<"\nFavor introduzca un monto válido "; cin>>nuevo;
				}
				if (nuevo>(saldo*0.7)){
					cout<<"No deberías para realizar la operación\n";
					cout<<"Su saldo actual es "<<saldo;
					cout<<"\nEstás seguro de realizar esta operación? (s/n) "; cin>>confirmar;

					confirmar = tolower(confirmar);

					if (confirmar == 'n'){
						break;
					}
				}
				saldo-=nuevo;
				cout<<"Su nuevo saldo es de "<<saldo<<endl;	break;
		
			case 4: cout<<"\n¡Gracias por preferirnos!\n"; 
				system("pause"); break;
			}
	}
	
	}while(opc!="4"); 
	
	return 0;
}
