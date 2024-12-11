#include<iostream>
#include<locale.h>

using namespace std;

class Calc{
	private:
		float n1=0,n2=0;
	
	public:
		void LeerN();
		float DetM();
		void MostrarResultado(float );
		
};

void Calc::LeerN() {
	cout<<"Número 1= "; cin>>n1;	
	cout<<"\nNúmero 2= "; cin>>n2;
		
};

void Calc::MostrarResultado(float NMayor){
	cout<<"\nEl mayor entre "<<n1<<" y "<<n2<<" es: "<<NMayor;

};

float Calc::DetM() {
	float mayor;
	
	if(n1>n2){
		mayor=n1;
	}	else {
		mayor=n2;
	}
	
	return mayor;
}

int main(){
	setlocale(LC_ALL,"");
	float NMayor;
	Calc Casio=Calc();
	Casio.LeerN();
	NMayor=	Casio.DetM();
	Casio.MostrarResultado(NMayor);
	
	system("pause");
	
	return 0;
}
