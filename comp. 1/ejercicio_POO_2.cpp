#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;
class Tiempo{
	private:
		int hora,minuto,segundo;
	public:
		Tiempo(int,int,int);
		Tiempo(float);
		void Mostrar();
	
};

Tiempo::Tiempo(int h, int m, int s){		//constructor 1
	hora=h;
	minuto=m;
	segundo=s;
	
};

Tiempo::Tiempo(float tiempo){				//constructor 2
	hora=int(tiempo/3600);
	minuto=int((tiempo-(hora*3600))/60);
	segundo=int(tiempo-(hora*3600)-(minuto*60));
	
};

void Tiempo::Mostrar(){
	cout<<"Son las "<<hora<<":"<<minuto<<"'"<<segundo<<endl;
		
};

int main(){
	float tiempo=0, aux=0;
	int hora,minuto,segundo;
	
	
	cout<<"introduzca una hora\n"; cin>>aux;
	hora=aux;
	
	if (aux<60){
		system("cls");
		cout<<"Introduzca hora, minutos y segundos:\n"; cin>>minuto>>segundo;
		Tiempo ahora(hora,minuto,segundo);
		ahora.Mostrar();
	}	else{
		tiempo=aux;
		Tiempo despues(tiempo);
		despues.Mostrar();
	}
	getch();
		
	return 0;
}
