#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL,"");
	int num1, num2;
	float ops = 0;
	
	cout<<"Introduzca un primer número "; cin>>num1;
	cout<<"\nIntroduzca un segundo número "; cin>>num2;
	
	ops = num1 + num2;
	cout<<"\nLa suma de los números es: "<<ops<<"\n";
	
	ops = num1 - num2;
	cout<<"La resta de los números es: "<<ops<<"\n";
	
	ops = num1 * num2;
	cout<<"La multipicación de los números es: "<<ops<<"\n";
	
	ops = num1 / num2;
	cout<<"La división de los números es: "<<ops<<"\n";
	
	return 0;
}
