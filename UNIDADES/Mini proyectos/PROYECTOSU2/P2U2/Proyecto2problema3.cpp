#include <iostream>

using namespace std;

int main () {

    cout << "Problema 3" << endl;

    int arrayNalumnos[15];

    for (int i = 0; i < 15; i ++) {

        cout << "Ingrese la nota del alumno " << (i + 1) << ": ";
        cin >> arrayNalumnos[i];

    }

    float sumatoria = 0, promedio;

    for (int i = 0; i < 15; i ++) {
        sumatoria = sumatoria + arrayNalumnos[i];
    }

    promedio = sumatoria / 15;
 

    for (int i = 0; i < 15; i ++) {
        cout << "Alumno " << (i + 1) << ": nota " << arrayNalumnos[i] << " - ";
        if (arrayNalumnos[i] >= 61) {
            cout << "aprueba" << endl;
        } else {
            cout << "no aprueba" << endl;
        }
    }

    cout << "El promedio de la clase es de " << promedio << " puntos" << endl;
}
