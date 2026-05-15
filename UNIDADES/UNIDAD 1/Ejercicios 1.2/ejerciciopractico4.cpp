#include <iostream>

using namespace std;

int main() {
    
     // Mostrar residuo de una division

     // Suma, Resta, Multi, Divi

    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Cuando queremos ayar un residuo usamos % y solo acepta numeros enteros

    int resultado;

    resultado = num1 % num2;

    cout << "Tu residuo es de: " << resultado << endl;
}