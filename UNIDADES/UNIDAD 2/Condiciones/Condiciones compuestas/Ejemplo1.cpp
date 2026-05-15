#include <iostream>

using namespace std;

int main() {

     // Condiciones or y and && ||
     // Condicional or ||

    float a;

    cout << "Condicional or" << endl;

    cout << "Ingresa un numero: ";
    cin >> a;

    if (a == 10 || a < 25) {

        cout << "Tu numero es igual a 10 o menor a 25" << endl;
    }
    else {

        cout << "Tu numero no es igual a 10 ni menor a 25" << endl;

    }  


    // Condicional and &&

    int numero;

    cout << "Condicional and" << endl;

    cout << "Ingresa un numero: ";
    cin >> numero;

    if (numero >= 1 && numero <= 100) {
        cout << "Tu numero esta entre el 1 y el 100" << endl;
        if (numero >= 61) {
            cout << "Aprobaste el curso";
        }
        else {
            cout << "Perdiste el curso y tambien a ella";
        }
    }
    else {
        cout << "Tu numero no esta entre el 1 y el 100" << endl;
    }

    // Nuevo ejemplo
    // Ingresar un numero del 1 al 100 y ver si aprobo el curso

    int numero2;

    cout << "Comprobar si aprobaste el curso" << endl;

    cout << "Ingresa un numero: ";
    cin >> numero2;

    if (numero2 >= 1 && numero2 <= 100) {
        cout << "Tu nota si es real y " << endl;
        if (numero2 >= 61) {
            cout << "Aprobaste el curso";
        }
        else {
            cout << "Perdiste el curso y tambien a ella";
        }
    }
    else {
        cout << "Tu nota no es real" << endl;
    }

}