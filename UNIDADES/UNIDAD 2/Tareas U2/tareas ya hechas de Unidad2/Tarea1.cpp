#include <iostream>

using namespace std;

int main() {
    
    // Ver si el salario de una persona es mayor, menor o igual al minimo

    int salario;

    cout << "Calcular si recibe el salario minimo o si recibe mas o menos" << endl;

    cout << "Ingresa tu salario mensual: ";
    cin >> salario;

    // comparar si es igual o mayor a 18 la edad

    if (salario == 3600) {
        cout << "Usted recibe el salario minimo" << endl;
    }
    else if (salario < 3600){
        cout << "Usted recibe menos del salario minimo" << endl;
    }
    else {
       cout << "Usted recibe mas del salario minimo" << endl; 
    }

    // Ver si un estudiante es de primer semestre dependiendo de la cantidad de cursos que lleva

    int cursos;

    cout << "Verificar si eres de primer semestre" << endl;

    cout << "Ingresa cuantos cursos lleva: ";
    cin >> cursos;

    if (cursos == 5) {
        cout << "Usted es de primer semestre" << endl;
    }
    else {
        cout << "No sabemos su semestre" << endl;
    } 

    cout << "Gracias por usar :)" << endl;

}