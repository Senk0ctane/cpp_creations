#include <iostream>
using namespace std;

int main() {
	int n1,n2,n3;
	
		cout<<"Digite 3 numeros: \n"; 
	cin>>n1>>n2>>n3;
	
	if((n1>n2)&&(n1>n3)){
		cout<<"El mayor es: "<<n1;
	}
	else if((n2>n1)&&(n2>n3)){
		cout<<"El mayor es: "<<n2;
	}
	else if((n3>n1)&&(n3>n2)){
		cout<<"El mayor es: "<<n3;
	}
	else{
		cout<<"Por lo menos dos son iguales";
	}
	
	return 0;
}
