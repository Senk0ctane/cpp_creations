#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std;

class Triangulo{
	private:
		float base, alto, resp;
	public:
		Triangulo();
		void ingresar();
		void calcular();
		void mostrar();
};

Triangulo::Triangulo(){
	
}

void Triangulo::ingresar(){
	cout<<"Ingrese la base: "; cin>>base;
	cout<<"Ingrese la altura: "; cin>>alto;
	
};

void Triangulo::calcular(){
	resp=(base*alto)/2;
	
};

void Triangulo::mostrar(){
	system("cls");
	cout<<"El área del triangulo es de "<<resp<<" unidades^2\n"<<endl;
};

int main(){
	setlocale(LC_ALL,"");
	Triangulo equilatero=Triangulo();
	equilatero.ingresar();
	equilatero.calcular();
	equilatero.mostrar();
	
	system("pause");
	
	return 0;
}
