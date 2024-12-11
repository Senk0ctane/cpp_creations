#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n,a=0,b=1,c;
	
	cout<<"Ingrese la cantidad de elementos a mostrar de la serie: "; cin>>n;
	cout<<endl;
	cout<<"1 ";
	for(int i=1; i<n; i++){
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	cout<<endl<<endl;;
	system("pause");
	
	return 0;
}
