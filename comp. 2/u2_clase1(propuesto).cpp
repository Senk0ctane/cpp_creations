//escriba un programa que lea 10 numeros y los ordene de forma ascendente
#include<iostream>
#include<locale.h>

using namespace std;

class Orden{
	private:
		int num[10];
	public:
		void Ingresar();
		void Ordenar();
		void Mostrar();
};

void Orden::Ingresar(){
	for(int i=0;i<10;i++){
		cout<<"Ingrese el "<<i+1<<"° numero entero: "; cin>>num[i];
	}
}

void Orden::Ordenar(){
	int max=10,aux=0;
	
	for(int i=1;i<max;i++){
		for(int n=0;n<max-1;n++){
			if(num[n]>num[n+1]){
			aux=num[n];
			num[n]=num[n+1];
			num[n+1]=aux;
			}
		}
	}
}

void Orden::Mostrar(){
	system("cls");
	
	cout<<"El arreglo de numeros en orden es:"<<endl;
	
	for(int k=0;k<10;k++){
		cout<<num[k]<<endl;
	}
	
	system("pause");
}

int main(){
	setlocale(LC_ALL,"");
	
	Orden ascend=Orden();
	
	ascend.Ingresar();
	ascend.Ordenar();
	ascend.Mostrar();
	
	return 0;
}
