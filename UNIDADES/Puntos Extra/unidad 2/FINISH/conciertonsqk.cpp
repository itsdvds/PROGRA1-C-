#include <iostream>
using namespace std;

int main() {
    int edad;
    string boleto, vip;

    cout << "Ir a un concierto de nsqk " << endl;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Tiene boleto?: ";
    cin >> boleto;

    cout << "Es VIP?: ";
    cin >> vip;

    if (edad >= 16) {
        if (boleto == "si" || boleto == "SI" || boleto == "Si") {
            if (vip == "si") {
                cout << "Acceso VIP al concierto" << endl;
            } 
            else {
                cout << "Acceso general al concierto" << endl;
            }
        } 
        else if (boleto == "no" || boleto == "NO" || boleto == "No") {
            cout << "No puede entrar sin boleto" << endl;
        }
    } 
    else {
        if (edad >= 13) {
            cout << "Puede entrar solo con adulto" << endl;
        } else {
            cout << "No cumple con la edad minima" << endl;
        }
    }
}