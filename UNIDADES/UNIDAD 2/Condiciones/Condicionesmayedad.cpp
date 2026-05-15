#include <iostream>

using namespace std;

int main() {

    //CONDICIONES IF

    // Funciona con comparadores <, >, == (Igual se usa 2 veces = y sirve para comparar), <=, >=, != (No es igual)

    // Recuerda usar {} y dentro pon lo que quierese que se haga si es if y usar else para otras opciones

    // Programa que te indique si eres mayor de edad

    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    // comparar si es igual o mayor a 18 la edad

    if (edad >= 18) {
        cout << "Usted es mayor de edad" << endl;
    }
    else {
        cout << "Usted es menor de edad" << endl;
    }

    // Ver si tu edad califica para ser presidente


    if (edad >= 30) {
        cout << "Usted puede postularse para ser presidente" << endl;
    }
    else {
        cout << "Usted no puede postularse para ser presidente" << endl;
    }

    // Verificar si te puedes jubilar segun tu edad

    if (edad >= 60) {
        cout << "Usted puede jubilarse" << endl;
    }
    else {
        cout << "Usted no puede jubilarse" << endl;
    }

    // Puedes pasar a la primaria?

    int edad2;

    cout << "Ingresa tu edad: ";
    cin >> edad2;

    // comparar si es igual o mayor a 18 la edad

    if (edad2 >= 7) {
        cout << "Puedes pasar a primaria" << endl;
    }
    else {
        cout << "No puedes pasar a primaria" << endl;
    }
}