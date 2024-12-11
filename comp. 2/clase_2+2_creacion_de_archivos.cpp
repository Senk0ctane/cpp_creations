//crear un programa que lea el contenido de un archivo de texto
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	string nombre, linea;
	
	cout<<"Ingrese el nombre del archivo"<<endl;
	getline(cin,nombre);
	ifstream archivo(nombre, c_str ());
	if (archivo.fail()){
		cout<<"Error en archivo"<<endl;
		exit(1);
	}
	
	while(!archivo.eof()){ //eof= End Of File, trad. mientras no sea el fin del archivo haz...
		getline(archivo,linea);
		if(!archivo.eof()){
			archivo<<linea<<endl;
			cout<<"El archivo fue creado con exito";
		}
	}
	archivo.close();
	system("pause");
	
	return 0;
}
