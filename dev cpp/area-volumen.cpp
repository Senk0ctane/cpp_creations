#include <iostream>
#include <math.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int opc, princ;
	float z,r,d,h,a,resultado;
	
	cout<<"Seleccione una opción\n"; 
	cout<<"1. Calcular área\n";
	cout<<"2. Calcular volúmen\n";
	cin>>princ;
	system("cls");
	
	if (princ==1){
	cout<<"Seleccione el tipo de área a calcular\n";
	cout<<"1. Círculo\n";
	cout<<"2. Cuadrado\n";
	cout<<"3. Rectángulo\n";
	cin>>opc;
	
	switch(opc){
		case 1: cout<<"Ingrese el radio del círculo: "; cin>>r;
		resultado=M_PI*pow(r,2);
		cout<<"\nEl área es de "<<resultado<<"cm^2"; break;
		
		case 2: cout<<"Ingrese la longitud del lado: "; cin>>h;
		resultado=h*h;
		cout<<"\nEl área es de "<<resultado<<"cm^2"; break;
		
		case 3: cout<<"Ingrese la longitud de un lado: "; cin>>h;
		cout<<"\nIngrese la longitud del otro lado: "; cin>>z;
		resultado=z*h;
		cout<<"\nEl área es de "<<resultado<<"cm^2"; break;
	}
	} else if (princ==2){
	cout<<"Selecione el tipo de volumen a calcular\n";
	cout<<"1. Esfera\n";
	cout<<"2. Cubo\n";
	cout<<"3. Rectángulo\n";
	cout<<"4. Cilindro\n";
	cin>>opc;
	system("cls");
	
	switch(opc){
		case 1: cout<<"Ingrese el radio de la esfera"; cin>>r;
		resultado= 4*M_PI*r;
		cout<<"\nEl volúmen es de "<<resultado<<"cm^3"; break;
		
		case 2: cout<<"ingrese la longitud de su lado"; cin>>h;
		resultado=pow(h,3);
		cout<<"\nEl volúmen es de "<<resultado<<"cm^3"; break;
		
		case 3: cout<<"Ingrese la primera longitud"; cin>>a;
		cout<<"\nIngrese la segunda longitud"; cin>>d;
		cout<<"\nIngrese la tercera longitud"; cin>>h;
		resultado=a*d*h;
		cout<<"\nEl volúmen es de "<<resultado<<"cm^3"; break;
		case 4: cout<<"Ingrese la altura del cilindro: "; cin>>a;
		cout<<"\nIngrese la longitud de la circunferencia del cilindro: "; cin>>z;
		
		z/=2;
		resultado=M_PI*z*z*a;
		cout<<"\nEl volúmen es de "<<resultado<<"cm^3"; break;
	//d/c=pi entonces c=d/pi
	}
	}
	getch();
	return 0;
}
