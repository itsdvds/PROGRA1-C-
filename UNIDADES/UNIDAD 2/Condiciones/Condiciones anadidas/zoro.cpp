#include <iostream>

using namespace std;

int main() {

    string respuesta;

    cout << "El ingeniero es el mejor dando clases?" << endl;

    cout << "Ingresa tu opinion: ";
    cin >> respuesta;

    bool sk;
    if (respuesta == "si" || respuesta == "SI" || respuesta == "Si") {
        sk = true;
    }
    else if (respuesta == "no" || respuesta == "NO" || respuesta == "No") {
        sk = false;
    }
    else {
        cout << "Respuesta invalida" << endl;
        return 1;
    }

    if (sk) {
        cout << "El ingeniero es el mejor dando clases" << endl;
    }
    else {
        cout << "El ingeniero no es el mejor dando clases" << endl;
    }

    string respuesta2;

    cout << "Lo mismo" << endl;

    cout << "Tu respuesta: ";
    cin >> respuesta2;

    if (respuesta2 == "si" || respuesta == "SI" || respuesta == "Si") {

        cout << "el ingeniero es el mero tat de los tats" << endl;
    }
    if (respuesta2 == "no" || respuesta == "NO" || respuesta == "No") {
        cout << "el ingeniero no es el mero tat de los tats" << endl;
    }
}