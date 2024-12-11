#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int signo, suma=0, lim;
	
	cout<<"Ingrese hasta donde realizar la serie: ";
	cin>>lim;
	
	for(int n=1;n<=lim;n++){
		signo=pow(-1,n);
		suma+=n*(signo*-1);
	}
	cout<<"\nEl resultado de la serie es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
