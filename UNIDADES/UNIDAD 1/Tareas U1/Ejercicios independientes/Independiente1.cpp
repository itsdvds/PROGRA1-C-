#include <iostream>

using namespace std;

int main() {

    // Multiplicar 2 numeros y mostrarlos en pantalla

    float num1, num2;

    cout << "Multiplicacion de 2 numeros" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    float resultadomultiplicacion = num1 * num2;

    cout << "El resultado de la multiplicacion es de: " << resultadomultiplicacion << endl;


    // Restar 2 numeros

    float num3, num4;

    cout << "Resta de 2 numeros" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> num3;

    cout << "Ingrese el segundo numero: ";
    cin >> num4;

    float resultadoresta = num3 - num4;

    cout << "El resultado de la resta es de: " << resultadoresta << endl;

    // Dividir 2 numeros y mostrar resultado y residuo

    cout << "Division de 2 numeros y su residuo" << endl;

    int num5, num6;

    cout << "Ingrese el primer numero: ";
    cin >> num5;

    cout << "Ingrese el segundo numero: ";
    cin >> num6;

    float resultadodivision = num5 - num6;

    cout << "El resultado de la division es de: " << resultadodivision << endl;

    int residuodivision = num5 % num6;

    cout << "El residuo es de: " << residuodivision << endl;

    cout << "Gracias por utilizar" << endl;
}
