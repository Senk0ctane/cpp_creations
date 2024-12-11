#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n[]={1,3,5,7,11};
	int suma=0;
	
	for(int i=0;i<5;i++){
		
		suma+=n[i];
	}
	
	cout<<"La suma de los elementos es: "<<suma;
	
	getch();
	return 0;
}
