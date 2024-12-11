#include<iostream>
#include<iomanip>
#include<locale.h>

using namespace std;

struct persona{
	char nombre[15],apellido[15];
	float nota;
	
};

int main(){
	float prom=0;
	const int w=40;
	
	setlocale(LC_ALL,"");
	
	persona*estudiante=new persona[w];
	
	for(int n=0;n<w;n++){
		cout<<"\t"<<n+1<<"° ESTUDIANTE:\n";
		cout<<"Ingrese nombre y apellido estudiante:\n";
		cin>>estudiante[n].nombre>>estudiante[n].apellido;
		
		cout<<"Ingrese la nota: ";
		cin>>estudiante[n].nota;
		prom+=estudiante[n].nota;
		
		system("cls");
	}
	
	prom/=w;
	
	cout<<"Nombre\tApellido\tNota\tClasificación\n";
	
	for(int a=0;a<w;a++){
		cout<<estudiante[a].nombre<<"\t"<<estudiante[a].apellido<<"\t"<<estudiante[a].nota<<"\t";
		
		if(estudiante[a].nota>prom){
			cout<<"A"<<endl;
		
		} else if(estudiante[a].nota<prom){
			cout<<"F"<<endl;
		} else{
			cout<<"C"<<endl;
		}
	}
	
	cout<<"\nA: La nota del estudiante está sobre el promedio.\nC: La nota está en el promedio.\nF: La nota está por debajo del promedio.\n\n";
	
	system("pause");
	
	return 0;
}
