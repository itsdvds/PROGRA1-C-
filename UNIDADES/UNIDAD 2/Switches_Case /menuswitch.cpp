#include <iostream>

using namespace std;

int main() {

    // Switches

    double num1, num2, resultado;
    char operador;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "Ingresa la opcion que quieras realizar: " << endl;

    cout << "Para suma ingresa +" << endl;

    cout << "Para resta ingresa -" << endl;

    cout << "Para multiplicacion ingresa *" << endl;

    cout << "Para division ingresa /" << endl;
    cin >> operador;

    // Una condicionante sobre el operador

    switch (operador) {
    
    case '+': {

        resultado = num1 + num2;
        break;

    }

    case '-': {

         resultado = num1 - num2;
         break;
    }

    case '*': {

         resultado = num1 * num2;
         break;

    }

    case '/': {
        if (num2 != 0) {
            resultado = num1 / num2;
        }
        else {
            cout << "Hay division entre 0" << endl;
            resultado = 0;
        }
        break;
    }
    
    default: {

        cout << "No ingreso ninguno de los operadores validos" << endl;
        break;
    }
    }

   cout << "El resultado de la operacion seleccionada es  " << resultado << endl;
}