#include <iostream>
using namespace std;

int main() {

    float saldo, retiro;

    cout << "Ingrese su saldo: ";
    cin >> saldo;

    cout << "Ingrese cantidad a retirar: ";
    cin >> retiro;

    if (retiro <= saldo) {
        if (retiro <= 100) {
            cout << "Retiro exitoso - monto pequeño" << endl;
        } else if (retiro <= 300) {
            cout << "Retiro exitoso - monto medio" << endl;
        } else if (retiro <= 500) {
            cout << "Retiro exitoso - monto alto" << endl;
        } else {
            cout << "Limite de retiro excedido" << endl;
        }
    } else {
        if (saldo == 0) {
            cout << "Cuenta sin fondos" << endl;
        } else {
            cout << "Fondos insuficientes" << endl;
        }
    }
}