#include <iostream>

using namespace std;

int main() {

    int entrada, dinero, edad;
    int boleto = 30;
    int edadminima = 18;
    int edaddescuento = 55;

    cout << "Verificar si puedes entrar al teatro" << endl;
    cout << "El precio del boleto es de Q40" << endl;
    cout << "La edad minima para entrar es de 12 años" << endl;
    cout << "Personas mayores a 55 años pagan Q20" << endl;

    cout << "Ingrese cantidad de boletos: ";
    cin >> entrada;

    cout << "Ingrese cantidad de dinero: ";
    cin >> dinero;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < edadminima) {
        cout << "No puedes entrar al teatro, eres menor de 12 años" << endl;
    }
    else if (entrada >= 1) {
        cout << "Puede entrar al cine porque ya tiene boleto" << endl;
    }
    else if (edad >= edaddescuento && dinero >= 20) {
        cout << "Puede entrar con descuento, paga Q20" << endl;
    }
    else if (dinero >= boleto) {
        cout << "Puede comprar un boleto y entrar al teatro" << endl;
    }
    else {
        cout << "No puede entrar al teatro porque no tiene boleto ni dinero suficiente" << endl;
    }
    
}