#include <iostream>
#include <iomanip>
#include <locale.h>
#include <stdio.h>
using namespace std;

int main() {
	setlocale(LC_ALL,"");
	double a,b,c,TT=0;
	
	cout<<"ingrese la nota pr�ctica: "; cin>>a;
	cout<<"Ingrese la nota te�rica: "; cin>>b;
	cout<<"ingrese la nota de participac�n: "; cin>>c;
	
	a*=0.3;
	b*=0.6;
	c*=0.1;
	TT=(a+b+c);
	
	cout<<setprecision(4)<<"\nEl promedio es: "<<TT<<"\n";
	return 0;
}
