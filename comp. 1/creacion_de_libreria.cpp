#ifndef PERSONA.H //para crear una librer�a (#ifndef --> #endif)
#elefine PERSONA.H

#include<iostream>
#include<string>
#include<locale.h>
#include<windows.h>

using namespace std;

class Cpersona{
	public:
		string nombre, CI, EdoCivil;
		int edad, dia, mes ano;
		float peso, estatura;
		string profesion;
		void LeerDatos();
		void DetAct();
		void MostrarInfo();
};

void Cpersona::LeerDatos(){
	cout<<"Ingrese nombre:\n"; cin>>nombre;
	cout<<"\nIngrese edad:\n"; cin>>edad;
	cout<<"\nIngrese c�dula:\n"; cin>>CI;
	cout<<"\nIngrese estado civil:\n"; cin>>EdoCivil
	cout<<"\nIngrese fecha de nacimiento (DD/MM/YY):\n"; cin>>dia>>mes>>ano;
	cout<<"\nIngrese peso\n"; cin>>peso;
	cout<<"\nIngrese estatura\n"; cin>>estatura;
	cout<<"\nIngrese profesi�n\n"; cin>>profesion;
	system("pause")
	system("cls");
	cout<<endl;
};

void Cpersona::DetAct(){
	if (profesion=="estudiante"){
		cout<<nombre<<" est� estudiando\n";
	} else if(profesion=="jubilado"){
		cout<<nombre<<" est� jubilado\n";
	} else{
		cout<<nombre<<"est� trabajando\n";
	}
};

void Cpersona::MostrarInfo(){
	cout<<"\t------------------\n";
	cout<<"Nombre: "<<nombre;
	cout<<"C�dula: "<<CI;
	cout<<"Fecha de nacimiento: "<<dia<<"/"<<mes<<"/"<<ano;
	cout<<"Edad: "<<edad;
	cout<<"Estado civil: "<<EdoCivil;
	cout<<"Peso: "<<peso<<" Kg";
	cout<<"Estatura: "<<estatura;
};
#endif
