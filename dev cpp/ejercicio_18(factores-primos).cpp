#include<iostream>
#include<math.h>
#include<windows.h>

using namespace std;

int main(){
	int n;
	
	cout<<"Ingrese el numero a descomponer: "; cin>>n;
	
	cout<<"\nLos factores primos del numero son: ";
	for(int i=2;n>1;i++){
		while(n%i==0){
			cout<<i<<" ";
			n/=i;
		}
	}
	cout<<endl;
	
	system("pause");
	
	return 0;
}
