#include <iostream>
using namespace std;

int main() {
    int edad;
    float dinero;
    string juego;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su dinero: ";
    cin >> dinero;

    cout << "Juego normal o violento: ";
    cin >> juego;

    if (dinero >= 60) {
        if (juego == "violento" || juego == "VIOLENTO" || juego == "Violento" ) {
            if (edad >= 18) {
                cout << "Compra permitida" << endl;
            } 
            else {
                cout << "No puede comprar juegos violentos" << endl;
            }
        } 
        else {
            if (edad < 15) {
                cout << "Compra permitida solo con supervision" << endl;
            } 
            else {
                cout << "Compra realizada" << endl;
            }
        }
    } 
    else {
        cout << "No tiene suficiente dinero" << endl;
    }
}