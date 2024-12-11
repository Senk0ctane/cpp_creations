#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int base,exp,r=1;
	
	cout<<"ingrese la base deseada "; cin>>base;
	cout<<"ingrese el exponente deseado "; cin>>exp;
	
	for (int i=1;i<=exp;i++){
	r*=base;
	}
	
	cout<<"el resultado es "<<r<<endl;
	getch();
	
	return 0;
}
