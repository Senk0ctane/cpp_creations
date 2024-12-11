#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	fstream archivo("hola.txt", ios::out);
	if (!archivo){
		cout<<"No se pudo crear el archivo"<<endl;
	} else{
		archivo<<"Este es un archivo de prueba";
		archivo.close();
	}
	
	return 0;
}
