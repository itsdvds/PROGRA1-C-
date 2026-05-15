#include <iostream>

using namespace std;

int main () {

    // Proyecto 2

    string nombre, apellido;
    float clases, asistidas;
    float porcentajeasistencia;
    
    cout << "Ingreso su nombre: ";
    cin >> nombre;
    cout << "Ingreso su apellido: ";
    cin >> apellido;

    cout << "Cuantas clases hubieron durante el semestre?: ";
    cin >> clases;

    cout << "A cuantas clases asistio?: ";
    cin >> asistidas;

    porcentajeasistencia = (asistidas / clases) * 100;

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

    cout << "Alumno: " << nombre << " " << apellido << " Su promedio es: " << promedio << " Asistencia : " << porcentajeasistencia << "%" << endl;

    if (promedio >= 70.0 && porcentajeasistencia > 79.9)  {

        cout << "Tiene derecho a examen final" << endl;

    }
    else if (promedio < 70.0 && porcentajeasistencia < 80.0) {

        cout << "No tiene derecho a examen final ya que su promedio es menor a 70 y su porcentaje de asitencia es menor al 80%" << endl;

    }
    else if (promedio < 70.0 && porcentajeasistencia > 79.9) {

        cout << "No tiene derecho a examen final ya que su promedio es menor a 70" << endl;

    }
    else if(promedio >= 70.0 && porcentajeasistencia < 80.0) {

         cout << "No tiene derecho a examen porque su asitencia es menor al 80%" << endl;

    }
    else {

        cout << "ERROR, ALGUN CARACTER INVALIDO" << endl;

    }



}