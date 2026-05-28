#include <iostream>

using namespace std;

int main() {

    int numero_aleatorio = 5;
    bool encontrado = false;
    int ingresado;
    cout << "Ingrese un numero: ";
    cin >> ingresado;

    if (ingresado > numero_aleatorio) {
        cout << "El numero es menor que " << ingresado;
    }
    else {
        cout << "Felicidades! Encontró el número";
        encontrado = true;
    }
    cout << "Gracias por ayudarme a revisar :)";


    // Saco 2/25
}