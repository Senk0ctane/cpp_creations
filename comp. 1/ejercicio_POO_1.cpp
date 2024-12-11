#include<iostream>
#include<conio.h>

using namespace std;
class Rectangulo{
	private:
		float largo, ancho;
	
	public:
		Rectangulo(float,float);
		void perimetro();
		void area();	
	
};

Rectangulo::Rectangulo(float _largo, float _ancho){
	largo=_largo;
	ancho=_ancho;

};

void Rectangulo::perimetro(){
	float per;
	
	per=(2*largo)+(2*ancho);
	cout<<"El perimetro es: "<<per<<"\n";
	
};

void Rectangulo::area(){
	float u2;
	
	u2=largo*ancho;
	cout<<"El area es: "<<u2<<"\n";
	
};

int main(){
	float l,a;
	
	cout<<"Introduzca el largo y ancho respectivamente ";cin>>l>>a;
	Rectangulo cuadrado(l,a);
	
	cuadrado.perimetro();
	cuadrado.area();
	getch();
	
	return 0;
}
