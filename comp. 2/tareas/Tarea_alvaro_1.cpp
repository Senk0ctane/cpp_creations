/*
puntajes empleados 0.0 , 0.4, 0.6 o más (excluyendo valores entre los antes mencionados) 
Dinero por nivel 2400$ multiplicado por la puntuación del nivel
Leer puntuación del usuario indicando su nivel de rendimiento y la cantidad de dinero que recibirá el usuario
*/
#include<iostream>

using namespace std;

class Salario{
private:
	int const dinero=2400;
	float nivelEmpleado=0;
	float pago=0;
	float aceptable[3]={0, 0.2, 0.4};
	bool pasar=false;
public:
	salario();
	void Ingresar();
	void Calcular();
	void Mostrar();
};

Salario::salario(){
};

void Salario::Ingresar(){
	int n=0;

	do{
		cout<<"Por favor ingrese el nivel de rendimiento del usuario:\n"; 
		cin>>nivelEmpleado;

		for(int n=0;n<3;n++){
			if (nivelEmpleado==aceptable[n]){
				pasar=true;
			}
		}

		if (nivelEmpleado>=0.6){
				pasar=true;
		}

		if (n>0){
			cout<<"Ingrese un nivel de remdimiento valido (0, 0.2, 0.4, 0.6 o superior):\n";
		}

		n++;
	} while (!pasar);
};

void Salario::Calcular(){
	pago=dinero*nivelEmpleado;
};

void Salario::Mostrar(){
	cout<<"El rendimiento del empleado es: ";

	if (nivelEmpleado<0.4){
		cout<<"Inaceptable\n";

	}

	else if(nivelEmpleado<0.6){
		cout<<"Aceptable\n";
	}

	else {
		cout<<"Meritorio\n";
	}

	cout<<"El salario del empleado es: "<<pago<<endl;
};

int  main(){
	Salario empleado = Salario();
	
	cout<<"Bienvenido. ";
	empleado.Ingresar();
	empleado.Calcular();
	system("cls");
	empleado.Mostrar();
	system("pause");

	return 0;
}
