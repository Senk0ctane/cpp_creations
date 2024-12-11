#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	double a,b,c,x1=0,x2=0,raiz=0;
	
	cout<<"Ingrese el valor de a (x^2): "; cin>>a;
	cout<<"Ingrese el valor de b (x): "; cin>>b;
	cout<<"Ingrese el valor de c (termino independiente): "; cin>>c;
	
	raiz=pow(b,2)-(4*a*c);
	if (raiz<0){
	 cout<<"El polinomio tiene raices imaginarias";
	}
	else{
	 x1=(b+static_cast<double>(sqrt(raiz)))/(2*a);
	 x2=(b-static_cast<double>(sqrt(raiz)))/(2*a);
	 cout<<"las raices son: \nX1= "<<x1<<", X2= "<<x2;
	}
	return 0;
}
