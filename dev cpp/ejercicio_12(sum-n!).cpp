#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int i,numfact=1,fact=1,suma=0,lim;
	cout<<"ingrese la cantidad de factoriales a calcular "; cin>>lim;
	
	do{
	
	for (i=1;i<=numfact;i++){	
	fact*=i;
 }
	cout<<"\nel factorial es "<<fact;
	numfact++;
	suma+=fact;
	i=1;
	fact=1;
	
	} while(numfact<=lim);
	cout<<"\nla suma es "<<suma;
	return 0;
}
