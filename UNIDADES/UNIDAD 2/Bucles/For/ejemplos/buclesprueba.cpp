#include <iostream>

using namespace std;

int main() {

    int numero;

    cout << "Calcular los multiplos de un numero" << endl;

    cout << "Ingresa un numero: ";
    cin >> numero;

    for (int i = 1; i <= 10; i++)
    {
        cout << numero * i << endl;
    }
}