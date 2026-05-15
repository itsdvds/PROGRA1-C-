#include <iostream>

using namespace std;

int main() {

    // Verificar si un numero es par o impar

    // para saber si un numero es par hay que dividirlo en 2 y si el residuo % (se utiliza %) es 0 es par y si no es 0

    // hay que usar el residuo para cualquier cosa ya que si el residuo es 0 si se puede la condicion pero si es diferente a 0 no se puede

    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero % 2 != 0) {
        cout << "El numero es impar" << endl;
    }
    if (numero % 2 == 0) { 
        cout << "El numero es par" << endl;
    }

    // Averiguar si un numero es divisible entre 3

    int numero2;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero % 3 != 0) {
        cout << "El numero no puede dividirse dentro de 3" << endl;
    }
    if (numero % 3 == 0) { 
        cout << "El numero se puede dividir dentro de 3" << endl;
    }
}