//variable = limite inferior + rand() % (limite superior + 1 - limite inferior)
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int num, rndm, intento=1;
	
	srand(time(NULL)); //generador de numeros aleatorios
	rndm= 1+rand()%(100);
	
		cout<<"Ingrese un numero: "; cin>>num;
	
	do{
		
		if (num>rndm){
			cout<<"\nIngrese un numero menor: ";
		}
		if (num<rndm){
			cout<<"\nIngrese un numero mayor: ";
		}
		cin>>num;
		intento++;
		
	} while (num!=rndm);
	
	cout<<"\nFELICIDADES! Lograste adivinar el numero en "<<intento<<" intentos"<<endl;
	
	system("pause");
	return 0;
}
