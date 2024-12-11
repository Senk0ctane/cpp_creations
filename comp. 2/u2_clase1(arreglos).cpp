#include<iostream>
#include<math.h>

using namespace std;

class Suma{
	private:
		int num[15], sumP=0,sumI=0;
	public:
		void Ingresar();
		void Calcular();
		void Mostrar();
};


void Suma::Ingresar(){
	for(int i=0;i<15;i++){
		cout<<"Favor ingrese el numero "<<i+1<<": "; cin>>num[i];
	}
};

void Suma::Calcular(){
	for(int i=0;i<14;i++){
		if(num[i]%2==0){
			sumP+=num[i];
		} else{
			sumI+=num[i];
		}
	}
};

void Suma::Mostrar(){
	cout<<"\nLa suma de los numeros pares es: "<<sumP;
	cout<<"\nLa suma de los numeros impares es: "<<sumI<<"\n\n";
	system("pause");
};

int main(){
	
	Suma parimp=Suma();
	
	parimp.Ingresar();
	parimp.Calcular();
	parimp.Mostrar();
	
	return 0;
}
