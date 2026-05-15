#include <iostream>

using namespace std;

int main() {

    // Ver si un numero es negativo

    double num;

    cout << "Ingresa un numero entero: ";
    cin >> num;

    // comparar si es igual o mayor a 18 la edad

    if (num < 0) {
        cout << "El numero es negativo" << endl;
    }
    else if (num == 0) {
        cout << "El numero es 0" << endl;
    }
    else {
        cout << "El numero es positivo" << endl;
    }
}