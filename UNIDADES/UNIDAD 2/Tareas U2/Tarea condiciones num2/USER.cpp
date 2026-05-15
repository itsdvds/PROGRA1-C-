#include <iostream>
using namespace std;

int main() {
    string usuario, password;
    string cuentaBloqueada;

    cout << "Ingrese usuario: ";
    cin >> usuario;

    cout << "Ingrese password: ";
    cin >> password;

    cout << "Cuenta bloqueada?: ";
    cin >> cuentaBloqueada;

    if (cuentaBloqueada == "si"|| cuentaBloqueada == "Si" || cuentaBloqueada == "SI" ) {
        cout << "Cuenta bloqueada" << endl;
    }
    else if (usuario == "admin" && password == "1234") {
        cout << "Acceso completo" << endl;
    }
    else if (usuario == "admin" && password != "1234") {
        cout << "Contraseña incorrecta" << endl;
    }
    else if (usuario == "invitado") {
        cout << "Acceso como invitado" << endl;
    }
    else {
        cout << "Usuario no existe" << endl;
    }
}