#include<iostream>
#include<windows.h>

using namespace std;

int main(){
	int largo;
	int n[100];
	
	cout<<"Ingrese la cantidad de elementos del arreglo: "; cin>>largo;
	
	for (int i=0;i<largo;i++){
		cout<<"\nIngrese un número: "; cin>>n[i];
	}
	
	system("cls");
	
	for (int i=(largo-1); i>=0; i--){
		cout<<i<<" corresponde a "<<n[i]<<endl;
	}
	
	system("pause");
	
	return 0;
}
