#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

class Operacion {
	private:
		float n1=0,n2=0;
		float suma=0,multiplicacion=0;
		float division=0,divisionInv=0;
	public:
		Operacion();
		void ingresar();
		void sumaN();
		void multiplicacionN();
		void divisionN();
		void mostrar();
		
};

Operacion::Operacion(){
	
}

void Operacion::ingresar(){
	cout<<"Ingrese dos números:\n"; cin>>n1>>n2;
	cout<<endl;
	
};

void Operacion::sumaN(){
	suma=n1+n2;
	
};

void Operacion::multiplicacionN(){
	multiplicacion=n1*n2;
	
};

void Operacion::divisionN(){
	if(n2!=0){
		division=n1/n2;
	} else{
		cout<<"Cada cabeza es un mundo, pero la tuya es un pueblo\nUno muy pequeño con pocas personas\nCada una tan pendeja como tú\n"<<endl;
	}
	
};

void Operacion::mostrar(){
	system("cls");
	cout<<"Los números son: "<<n1<<" y "<<n2<<"\nLa suma es: "<<suma<<"\nLa multiplicación es: "<<multiplicacion<<"\nLa división es: "<<division;
	cout<<"\n"<<endl;
};

int main(){
	setlocale(LC_ALL,"");
	Operacion op=Operacion();
	op.ingresar();
	op.sumaN();
	op.multiplicacionN();
	op.divisionN();
	op.mostrar();
	
	system("pause");
	
	return 0;
}
