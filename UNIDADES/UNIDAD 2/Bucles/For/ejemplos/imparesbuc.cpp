#include <iostream>

using namespace std;

int main() {


    int i, numero;

    cout << "Calcular numeros impares" << endl;

    cout << "Ingresa hasta que numero impar hay que llegar: ";
    cin >> numero;

    cout << "Los numeros impares son: " << endl;

    for (int i = 1; i <= numero; i = i + 2)
    {
        cout << "numero: "  << i << endl;
    }

    int numero2;

    cout << "Calcular numeros pares" << endl;

    cout << "Ingresa hasta que numero par hay que llegar: ";
    cin >> numero2;

    cout << "Los numeros pares son: " << endl;

    for (int i = 0; i <= numero2; i += 2)
    {
        cout << "numero: "  << i << endl;
    }
}