#include<iostream> 
#include<string>
#include<windows.h>
#include<locale.h>
#include"persona.h" //para crear una librería (#ifndef --> #endif)

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	Cpersona Datos=Cpersona();
	Datos.leerdatos();
	Datos.determinaractividad();
	Datos.mostrardatos();
	
	return 0;
}
