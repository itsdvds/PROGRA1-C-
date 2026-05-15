#include <iostream>

using namespace std;

int main() {

    // Verificar en que siglo naci dependiendo mi fecha de nacimiento

    // Si debo usar mas de 1 operacion de + - % / * entonces debo ordenar en parentesis

    int fecha;

    cout << "Ingrese su año de nacimiento: ";
    cin >> fecha;

    if (((fecha - 1) / 100) + 1 == 21) {

        cout << "Eres del siglo 21" << endl;
    }
    else if (((fecha - 1) / 100) + 1 == 20 ) {

        cout << "Eres del siglo 20" << endl;
    }
    else {
        cout << "Fecha fuera del rango" << endl;
    }
}