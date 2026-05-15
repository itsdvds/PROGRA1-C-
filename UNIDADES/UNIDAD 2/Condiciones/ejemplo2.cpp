#include <iostream>

using namespace std;

int main() {
    
    // Ingresar una letra y ver si es vocal o consonante

    char letra;

    cout << "Comprobar si una letra es vocal o consonante" << endl;

    cout << "Ingresa una letra: ";
    cin >> letra;

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {

        cout << "Tu letra es una vocal" << endl;
    }
    else {

        cout << "Tu letra es una consonante" << endl;
    }



}