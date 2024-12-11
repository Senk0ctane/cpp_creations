#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

class Factorial{
	private:
		int k,n=1,i;
	public:
		Factorial();
		void Calculo();
		void Ingresar();
		void Mostrar();
	
};

Factorial::Factorial(){
	
}

void Factorial::Ingresar(){
	
	cout<<"Ingrese el numero al cuál desee obtener su factorial\n"; cin>>k;
	
	while (k<0){
		cout<<"No existen factoriales negativos, por favor ingrese un numero válido\n"; cin>>k;
	}
};

void Factorial::Calculo(){
	
	
	for (i=1;i<=k;i++){
		n*=i;
	}
	
};

void Factorial::Mostrar(){
	
	cout<<"\nEl factorial de "<<k<<" es: "<<n;
	cout<<"\n"<<endl;
};

int main(){
	setlocale(LC_ALL,"");
	
	Factorial f=Factorial();
	
	f.Ingresar();
	f.Calculo();
	f.Mostrar();
	
	system("pause");
	
	return 0;
}
