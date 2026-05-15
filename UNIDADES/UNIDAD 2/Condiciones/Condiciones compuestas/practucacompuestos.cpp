#include <iostream>

using namespace std;

int main() {

    // Comparar 2 numeros y ver cual es mayor para este ejercicio no usamos ni and ni or
    
    float num, num2;

    cout << "Comparar 2 numeros y ver cual es mayor" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> num;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num > num2) {

        cout << num << " es mayor que " << num2 << endl;
    }
    if (num2 > num) {
        cout << num2 << " es mayor que " << num << endl;
    }
    if  (num == num2 ) {

        cout << "Los 2 numeros son iguales" << endl;
    }

    // Comparar si 2 cadenas de texto son iguales 

    string a,b;

    cout << "Comparar 2 cadenas de texto" << endl;

    cout << "Ingrese el primer texto: ";
    cin >> a;

    cout << "Ingrese el segundo texto: ";
    cin >> b;

    if (a == b) {

        cout << "Las cadenas son iguales" << endl;

    }
    else {

        cout << "Las cadenas no son iguales" << endl;

    }

    // Comparar si 2 numeros son diferente

    float num3, num4;

    cout << "Comparar 2 numeros y ver si son diferentes" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> num3;

    cout << "Ingrese el segundo numero: ";
    cin >> num4;

    if (num3 != num4) {

        cout << "Los numeros son diferentes " << endl;

    }
    else {
        
        cout << "Los numeros son iguales" << endl;

    }

    // Comparar edades y indicar si tienen la misma edad o no

    int edad, edad2;

     cout << "Comparar edades" << endl;

    cout << "Ingrese la primera edad: ";
    cin >> edad;

    cout << "Ingrese la segunda edad: ";
    cin >> edad2;

    if (edad == edad2) {

        cout << "Tienen la misma edad" << endl;

    }
    else {

        cout << "Las edades son diferentes" << endl;

    }

    cout << "Gracias por usar :)" << endl;

}