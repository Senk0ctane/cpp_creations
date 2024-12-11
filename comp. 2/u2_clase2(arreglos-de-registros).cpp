/*los arreglos de registros son una estructura de datos en el que cada estructura es un registro. Ej.:
Elabore un programa que lleve el control de 40 estudiantes de computación, teniendo en cuenta lso siguientes datos:
nombre, apellido, edad y promedio de su nota
*/
#include <iostream>
#include <iomanip>
#include <locale.h>
using namespace std;

struct persona{
    char nombre[15], apellido [15], ci[8];
	int edad;
	float nota;
};

int main(){
	setlocale(LC_ALL,"");
	float promNotas=0, suma;
	int opcion;
	
	persona*estudiante=new persona[4];
	
	for(int n=0;n<4;n++){
		cout<<"Ingrese el nombre"<<endl;
		cin>>estudiante[n].nombre;
		
		cout<<"Ingrese el apellido"<<endl;
		cin>>estudiante[n].apellido;
		
		if (estudiante[n].nombre=="W"){
		cout<<"Ingrese la edad"<<endl;
		cin>>estudiante[n].edad;
		
		cout<<"Ingrese la cédula"<<endl;
		cin>>estudiante[n].ci;
		
		cout<<"Ingrese el promedio de nota"<<endl;
		cin>>estudiante[n].nota;
		}
		
		system("cls");
		
		suma+=estudiante[n].nota;
	};
	promNotas=suma/4;
	
	system("cls");
	
	cout<<"Apellido"<<setw(15)<<"Nombre"<<setw(10)<<"Cédula"<<setw(10)<<"Edad"<<setw(10)<<"Nota\n";
	
	for(int k=0;k<4;k++){
		cout<<estudiante[k].apellido<<setw(15)<<estudiante[k].nombre<<endl;
		if(k>10){
		cout<<"\t"<<estudiante[k].ci<<"\t"<<estudiante[k].edad<<"\t"<<estudiante[k].nota<<"\n";
		}
	}
	
	system("pause");
	
	return 0;
}
