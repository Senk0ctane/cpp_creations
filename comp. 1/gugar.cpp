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
	cout<<"introduzca el n�mero a comparar: "; cin>>n;
	
	if (n==0){
		cout<<"El n�mero es 0";
	}
	else if (n>0){
		cout<<"El n�mero es mayor a 0";
	}
	else{
		cout<<"El n�mero es menor a 0";
	}
	cout<<"\n�Desea continuar? (S/N)"; cin>>resp;
	
	while ((resp!='s') && (resp!='n')){
	cout<<"\nIntroduzca una expresi�n v�lida";
	cout<<"\n�Desea continuar? (S/N)"; cin>>resp;
	}
	} while(resp!='n');
	
	return 0;
}





