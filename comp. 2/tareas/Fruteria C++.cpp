#include<iostream>
#include<string.h>
#include<locale.h>

using namespace std;

class Mermelada{
	private:
		float costo=0,monto=0,descuento=0,recargo=0,total=0;
		char lugar[];
		int cantidad=0,tipo=0;
	public:
		mermelada();
		void IngresarDatos();
		void CalcularDescuento();
		void MostrarTotal();
};

Mermelada::mermelada(){
};

void Mermelada::IngresarDatos(){
	
	cout<<"Ingrese el tipo de mermelada \n1. Fresa\n2. Melocoton\n3.Guayaba\n4.Piña): ";
	cin>>tipo;
	
	cout<<"Ingrese la cantidad de articulos comprados: ";
	cin>>cantidad;
	
	cout<<"Ingrese el costo de la mermelada: ";
	cin>>costo;
	
	cout<<"Ingrese el lugar de procedencia: ";
	cin>>lugar;
	
	strupr(lugar);
};

void Mermelada::CalcularDescuento(){
	
	if ((tipo==1) || (tipo==2)) {
		recargo=0.4*costo;
	} else if ((tipo==3) || (tipo==4)) {
		recargo=0.25*costo;
	}
	
	if (cantidad>5) {
		descuento=0.10*costo;
	}
	
	if (lugar=="LARA") {
		descuento+=0.05*costo;
	}
	
	monto=costo*cantidad;
	total=monto+descuento-recargo;
};

void Mermelada::MostrarTotal(){
	
	cout<<"Monto a pagar sin descuento: "<<monto<<endl;
	cout<<"Monto de los descuentos: "<<descuento<<endl;
	cout<<"Total a Pagar: "<<total<<endl;
	
};

int main() {
	setlocale(LC_ALL,"");
	
	Mermelada creacion=Mermelada();
	creacion.IngresarDatos();
	creacion.CalcularDescuento();
	creacion.MostrarTotal();
	
	return 0;
}

