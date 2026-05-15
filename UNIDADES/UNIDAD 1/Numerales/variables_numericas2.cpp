#include <iostream>

using namespace std;

int main() {

    //entradas y salidas
    //Nuestra primera salida18
    cout << "Buenos dias a todos los que vinieron temprano" << endl;

    int numero;
    cout << "Ingresa tu edad en numero: ";
    //Nuestra primera entrada de datos
    cin >> numero;

    cout << "Tu edad es: " << numero << endl;

    int suma1, suma2;
    cout << "Ingresar dos numeros para sumar" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> suma1;

    cout << "Ingrese el segundo numero: ";
    cin >> suma2;

    int resultado = suma1 + suma2;

    cout << "La suma de ambos numeros es: " << resultado << endl;

    cout << "Duplicar la edad" << endl;

    int edad = numero * 2;

    cout << "Tu edad multiplicada por dos: " << edad << endl;


    // Ingresar 2 numeros y mostrar su resultado de resta multiplicacion y division
    // No ingresar el numero 0

    double num1, num2;

    cout << "Division, Multi y resta de 2 numeros" << endl;
    cout << "No ingresar el numero 0" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    double division = num1 / num2; 
    double resta = num1 - num2;
    double multiplicador = num1 * num2;

    cout << "El resultado de la division es: " << division << endl;
    cout << "El resultado de la Multiplicacion es: " << multiplicador << endl;
    cout << "El resultado de la resta es: " << resta << endl;
  
}