#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int num;


	cout<<"hi, ingrese un numero\t";
	cin>>num;

	system("clear");

	cout<<"El numero que usted ingreso es: "<<num<<endl;
	cout<<"La raiz de ese numero es: "<<sqrt(num)<<endl;

	return 0;
}