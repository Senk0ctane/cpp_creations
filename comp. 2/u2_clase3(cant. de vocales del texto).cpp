#include<iostream>
#include<string>
#include<locale.h>

using namespace std;

class Alfabeto{
	private:
		string texto={"000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"};
	public:
		alfabeto();
		void Ingresar();
		void ContMostrar();
};

Alfabeto::alfabeto(){
	
}

void Alfabeto::Ingresar(){
	cout<<"Ingrese una oración:\n";
	getline(cin,texto);
}

void Alfabeto::ContMostrar(){
	int A=0,E=0,I=0,O=0,U=0;
	
	for(int ka=0;ka<255;ka++){
		switch(texto[ka]){
			case 'a': A++; break;
			case 'e': E++; break;
			case 'i': I++; break;
			case 'o': O++; break;
			case 'u': U++; break;
			default: break;
		}
	}

	cout<<"\nLa cantidad de letras es:\n";
	cout<<"\nA="<<A;
	cout<<"\nE="<<E;
	cout<<"\nI="<<I;
	cout<<"\nO="<<O<<endl;
	cout<<"\nU="<<U<<endl<<endl;
}

int main(){
	setlocale(LC_ALL,"");
	Alfabeto Abecedario=Alfabeto();
	
	Abecedario.Ingresar();
	Abecedario.ContMostrar();
	
	system("pause");
	
	return 0;
}
