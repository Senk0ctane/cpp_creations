#include <iostream>
#include <math.h>
#include <locale.h>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL,"");
	int n;
	char resp = 's';
	
	do{
	resp='d';
	cout<<"introduzca el número a comparar: "; cin>>n;
	
	if (n==0){
		cout<<"El número es 0";
	}
	else if (n>0){
		cout<<"El número es mayor a 0";
	}
	else{
		cout<<"El número es menor a 0";
	}
	cout<<"\n¿Desea continuar? (S/N)"; cin>>resp;
	
	while ((resp!='s') && (resp!='n')){
	cout<<"\nIntroduzca una expresión válida";
	cout<<"\n¿Desea continuar? (S/N)"; cin>>resp;
	}
	} while(resp!='n');
	
	return 0;
}





