#include<iostream>
#include<locale.h>
using namespace std;

class Promedio{
	private:
		float promedio,nota,totalN=0;
		int Nestudiantes;
	public:
		Promedio();
		void Estudiantes();
		void Calcular();
		void Mostrar();
};

Promedio::Promedio(){
}

void Promedio::Estudiantes(){
	cout<<"Ingrese la cantidad de estudiantes de la sección: ";
	cin>>Nestudiantes;
	system("cls");
};

void Promedio::Calcular(){
	
	for (int i=1;i<=Nestudiantes;i++){
		cout<<"Ingrese la nota del alumno "<<i<<": ";
		cin>>nota;
		totalN+=nota;
	}
	promedio=totalN/Nestudiantes;
};

void Promedio::Mostrar(){
	cout<<"\nEl promedio de notas de la sección es de: "<<promedio;
	cout<<"\n"<<endl;
};

int main(){
	setlocale(LC_ALL,"");
	Promedio seccionA=Promedio();
	seccionA.Estudiantes();
	seccionA.Calcular();
	seccionA.Mostrar();
	system("pause");
	
	return 0;
}
