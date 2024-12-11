#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int lim, aux, result=0;
	
	cout<<"Ingrese el limite de potencias de 2: ";
	cin>>lim;
	for (int n=0; n<=lim;n++){
		
		std::cout<<"2^"<<n<<" + ";
		
		aux=pow(2,n);
		result+=aux;
	}
	
	cout<<"\nEl resultado es "<<result<<endl;
	system("pause");
	
	return 0;
}
