#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL,"");
	int num1, num2;
	float ops = 0;
	
	cout<<"Introduzca un primer n�mero "; cin>>num1;
	cout<<"\nIntroduzca un segundo n�mero "; cin>>num2;
	
	ops = num1 + num2;
	cout<<"\nLa suma de los n�meros es: "<<ops<<"\n";
	
	ops = num1 - num2;
	cout<<"La resta de los n�meros es: "<<ops<<"\n";
	
	ops = num1 * num2;
	cout<<"La multipicaci�n de los n�meros es: "<<ops<<"\n";
	
	ops = num1 / num2;
	cout<<"La divisi�n de los n�meros es: "<<ops<<"\n";
	
	return 0;
}
