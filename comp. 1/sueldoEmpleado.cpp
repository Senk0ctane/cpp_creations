//el SSO es 84 si sueldo >2400bs, sino es el 3.5% del sueldo del empleado
#include<iostream>
#include<string>

using namespace std;

class Trabajo{
	private:
		float horas, SSO, sueldo,total;
		string nombre;
	public:
		trabajo();
		void Ingresar();
		void Calcular();
		void Mostrar();
};

Trabajo::trabajo(){
};

void Trabajo::Ingresar(){
	cout<<"Ingrese nombre del empleado: "; cin>>nombre;
	cout<<"Ingrese el total de horas trabajadas: "; cin>>horas;
};

void Trabajo::Calcular(){
	
	sueldo=50*horas;		//el sueldo bruto (50 Bs) por la cantidad de horas
	
	if (sueldo<=2400){
		SSO=sueldo*0.035;
	} else{
		SSO=84;
	}
	
	total=sueldo+SSO;
};

void Trabajo::Mostrar(){
	
	system("cls");
	
	cout<<"Hola, "<<nombre<<"!";
	cout<<"\nTu sueldo bruto es de: "<<sueldo<<" Bs.";
	cout<<"\nTu seguro total obligatorio es de: "<<SSO<<" Bs.";
	cout<<"\nTu suelto total es de: "<<total<<" Bs.\n";
};

int main(){
	
	Trabajo empleado=Trabajo();
	
	empleado.Ingresar();
	empleado.Calcular();
	empleado.Mostrar();
	
	system("pause");
	
	return 0;
}
