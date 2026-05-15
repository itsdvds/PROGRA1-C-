#include <iostream>

using namespace std;

int main () {

    // Proyecto 2
    
    cout << "Ingreso de notas de un alumno de primer semestre: " << endl;

    float arrayNotas[5];

    int notas;

    for (int i = 0; i < 5; i ++) {

        cout << "Ingrese nota del curso " << i << ": ";
        cin >> arrayNotas[i];

         while (arrayNotas[i] < 0 || arrayNotas[i] > 100) {
            cout << "Tu nota no esta en el rango de 0 a 100. Intentalo de nuevo: ";
            cin >> arrayNotas[i];
        }
    }

    //Promedio

    float sumatoria = 0, promedio;

    for (int i = 0; i < 5; i ++) {
        sumatoria = sumatoria + arrayNotas[i];
    }

    promedio = sumatoria / 5;

    cout << "Tu promedio es de: " << promedio << endl;

    if (promedio > 70.0 && promedio < 85.1)  {

        cout << "Tu promedio es suficiente para pasar el semestre" << endl;

    }
    else if (promedio > 85.0 && promedio < 90.1) {

        cout << "Tu promedio es suficiente y pasas el semestre como Cum laude" << endl;

    }
    else if (promedio > 90.0 && promedio < 95.1) {

        cout << "Tu promedio es suficiente y pasas el semestre como Magna cum laude" << endl;

    }
    else if(promedio > 95.0 && promedio < 100.1) {

         cout << "Tu promedio es suficiente y pasas el semestre como Summa cum laude" << endl;

    }
    else {

        cout << "Tu promedio no es suficiente para pasar el semestre" << endl;

    }

}