#include <iostream>

using namespace std;

int main() {

    int i, numero, factorial = 1;

    cout << "Calcular el factorial de un numero" << endl;

    cout << "Ingresa un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
    }

    cout << factorial << endl;
}