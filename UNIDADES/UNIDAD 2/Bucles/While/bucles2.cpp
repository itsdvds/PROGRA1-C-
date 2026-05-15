#include <iostream>

using namespace std;

int main () {

    int numero;
    int suma = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while ( numero > 0)
    {
        suma += numero;
        cout << "Ingrese otro numero: ";
        cin >> numero;
    }

    cout << "La suma de los numeros es: " << suma << endl;
    
}