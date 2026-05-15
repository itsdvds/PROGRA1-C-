#include <iostream>
using namespace std;

int main() {

    float precio, dinero;
    string vip, cupon, disponible;

    cout << "Precio del producto: ";
    cin >> precio;

    cout << "Dinero del cliente: ";
    cin >> dinero;

    cout << "Cliente VIP?: ";
    cin >> vip;

    cout << "Tiene cupon?: ";
    cin >> cupon;

    cout << "Producto disponible?: ";
    cin >> disponible;

    if (disponible == "No" || disponible == "NO" || disponible == "no") {
        cout << "Producto agotado" << endl;
    }
    else if (vip == "Si" || vip == "SI" || vip == "si" && dinero >= precio * 0.8) {
        cout << "Compra con descuento VIP" << endl;
    }
    else if ((cupon == "Si" || cupon == "SI" || cupon == "si") && dinero >= precio * 0.09) {
        cout << "Compra con cupon" << endl;
    }
    else if (dinero >= precio) {
        cout << "Compra normal" << endl;
    }
    else {
        cout << "No tiene dinero suficiente" << endl;
    }
}