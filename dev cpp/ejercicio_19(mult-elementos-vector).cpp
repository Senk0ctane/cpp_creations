#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n[]={1,2,3,4,5};
	int mult=1;
	
	for(int i=0;i<5;i++){
		
		mult*=n[i];
	}
	
	cout<<"La multiplicacion de los elementos es: "<<mult;
	
	getch();
	return 0;
}
