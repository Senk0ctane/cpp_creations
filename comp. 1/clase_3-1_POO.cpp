#include<iostream>
#include<iostream>
#include<math.h>
using namespace std;

class Raiz{
	private:
		int n,aux,auxp,auxi;
		float raiz;
	public:
		Raiz();
		void Calcular();
};

Raiz::Raiz(){	
}

void Raiz::Calcular(){
	
	for (int k=0;k<=50;k++){
		aux=k*2;
		auxp=aux;
		raiz=sqrt(auxp);
		cout<<"La raiz cuadrada de "<<auxp<<" es: "<<raiz<<endl;
		
		auxi=aux+1;
		if (auxi<100){
			cout<<auxi<<" Es impar\n";
		}
	}
};

int main(){
	Raiz r=Raiz();
	r.Calcular();
	cout<<endl;
	system("pause");
	
	return 0;
}
