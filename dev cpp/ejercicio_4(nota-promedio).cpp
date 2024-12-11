#include <iostream>
#include <iomanip>
#include <locale.h>
#include <stdio.h>
using namespace std;

int main() {
	setlocale(LC_ALL,"");
	double a,b,c,TT=0;
	
	cout<<"ingrese la nota práctica: "; cin>>a;
	cout<<"Ingrese la nota teórica: "; cin>>b;
	cout<<"ingrese la nota de participacón: "; cin>>c;
	
	a*=0.3;
	b*=0.6;
	c*=0.1;
	TT=(a+b+c);
	
	cout<<setprecision(4)<<"\nEl promedio es: "<<TT<<"\n";
	return 0;
}
