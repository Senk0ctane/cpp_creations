#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int edad;
		
	cout<<"Favor introduzca su edad: "; cin>>edad;
	
	if ((edad>=18)&&(edad<=25)){
		cout<<"Tienes entre 18 y 25 años";
	}
	else{
		cout<<"Tu edad no está en el rango de 18 a 25";
	}
	
	return 0;
}
