#include <iostream>

using namespace std;

int main() {

    // Primer ejercicio

    int entrada, dinero, edad;
    int boleto = 30;
    int edadminima = 18;
    int edaddescuento = 35;

    cout << "Verificar si puedes entrar al cine" << endl;
    cout << "El precio del boleto es de Q30" << endl;
    cout << "La edad minima para entrar es de 18 años" << endl;
    cout << "Personas mayores a 34 años pagan Q15" << endl;

    cout << "Ingrese cantidad de boletos: ";
    cin >> entrada;

    cout << "Ingrese cantidad de dinero: ";
    cin >> dinero;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < edadminima) {
        cout << "No puedes entrar al cine, eres menor de edad" << endl;
    }
    else if (entrada >= 1) {
        cout << "Puede entrar al cine porque ya tiene boleto" << endl;
    }
    else if (edad >= edaddescuento && dinero >= 15) {
        cout << "Puede entrar con descuento, paga Q15" << endl;
    }
    else if (dinero >= boleto) {
        cout << "Puede comprar un boleto y entrar al cine" << endl;
    }
    else {
        cout << "No puede entrar al cine porque no tiene boleto ni dinero suficiente" << endl;
    }
    
}