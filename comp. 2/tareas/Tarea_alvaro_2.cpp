#include<iostream>
#include<string>
#include<iomanip>
#include<locale.h>

using namespace std;

class Cliente {
private:
    string nombre;
    int impulsosConsumidos;

public:
    Cliente(string nombre, int impulsos) : nombre(nombre), impulsosConsumidos(impulsos) {}

    string getNombre() const {
        return nombre;
    }

    int getImpulsosConsumidos() const {
        return impulsosConsumidos;
    }
};

class Factura {
private:
    static const float RENTA_BASICA;
    static const float PRECIO_IMPULSO;
    static const float RECARGO_IMPUESTO_LUJO;

    Cliente cliente;

public:
    Factura(Cliente cliente) : cliente(cliente) {}

    double calcularMontoPorImpulsos() const {
        int impulsos = cliente.getImpulsosConsumidos();
        if (impulsos <= 500) {
            return impulsos * PRECIO_IMPULSO;
        } else {
            double montoBase = 500 * PRECIO_IMPULSO;
            double impulsosExtras = impulsos - 500;
            double montoExtras = impulsosExtras * PRECIO_IMPULSO * (1 + RECARGO_IMPUESTO_LUJO);
            return montoBase + montoExtras;
        }
    }

    double calcularTotal() const {
        return RENTA_BASICA + calcularMontoPorImpulsos();
    }

    void mostrarRecibo() const {
        cout << fixed << setprecision(2);
        system("cls");
        cout << "Recibo de Pago\n";
        cout << "Cliente: " << cliente.getNombre() << endl;
        cout << "Renta Basica: " << RENTA_BASICA << " BsF\n";
        cout << "Monto por Impulsos: " << calcularMontoPorImpulsos() << " BsF" << endl;
        if (cliente.getImpulsosConsumidos() > 500) {
            double montoImpuestoLujo = (cliente.getImpulsosConsumidos() - 500) * PRECIO_IMPULSO * RECARGO_IMPUESTO_LUJO;
            cout << "Monto por concepto de Impuesto al Lujo: " << montoImpuestoLujo << " BsF" << endl;
        } else {
            cout << "Monto por concepto de Impuesto al Lujo: 0.00 BsF" << endl;
        }
        cout << "Total a Cancelar: " << calcularTotal() << " BsF" << endl;
    }
};

const float Factura::RENTA_BASICA = 50.00; // Renta básica en BsF
const float Factura::PRECIO_IMPULSO = 0.20; // Precio por impulso en BsF
const float Factura::RECARGO_IMPUESTO_LUJO = 0.30; // Recargo del 30%

int main() {
    setlocale(LC_ALL,"es_ES.UTF-8");
    
    string nombre;
    int impulsos;

    cout << "Ingrese el nombre del cliente: ";
    getline(cin, nombre);
    cout << "Ingrese la cantidad de impulsos consumidos: ";
    cin >> impulsos;

    Cliente cliente(nombre, impulsos);
    Factura factura(cliente);
    factura.mostrarRecibo();

    return 0;
}