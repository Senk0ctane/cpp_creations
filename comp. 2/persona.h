#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
using namespace std;

class Cpersona
{
	public:
		string nombre;
		string profesion;
		void leerdatos();
		void determinaractividad();
		void mostrardatos();
};

void Cpersona::leerdatos()
{
	cout<<"Nombre = "<<endl;
	cin>>nombre;
	cout<<"Profesion = "<<endl;
	cin>>profesion;
};

void Cpersona::determinaractividad()
{
	if (profesion == "estudiante")
	{
		cout<<nombre<<" esta estudiando"<<endl;
	}
	else if (profesion == "jubilado")
			{
				cout<<nombre<<" esta jubilado"<<endl;
			}
			else {
					cout<<nombre<<" esta trabajando"<<endl;
			};
};

void Cpersona::mostrardatos()
{
	cout<<"*******************************"<<endl;
	cout<<"Nombre = "<<nombre<<endl;
};

#endif //PERSONA_H
