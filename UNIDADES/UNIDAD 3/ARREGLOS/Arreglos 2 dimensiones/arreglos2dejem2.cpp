#include <iostream>

using namespace std;

int main() {

    // Primer semestre: 5 cursos
    // Primer semestre: 7
    // Primer semestre: 7
    // Primer semestre: 7
    // Primer semestre: 9
    // Primer semestre: 8
    // Primer semestre: 9
    // Primer semestre: 8

    // 9 columnas (cursos por semestre)
    // 8 filas (8 semstres)

    float matrizNotas [9][8];
    
    //Ejercicio largo de promedio de graduacion (se gana con 70 de promedio)

    for (int columnas = 0; columnas < 9; columnas ++) {
        for (int filas = 0; filas < 8; filas ++) {
            cout << "Semestre " << (filas + 1) << " curso No. " << (columnas + 1) << ": ";
            cin >> matrizNotas[columnas][filas];
        }
    }

    float sumatoria = 0;

    for (int columnas = 0; columnas < 9; columnas ++) {
        for (int filas = 0; filas < 8; filas ++) {
            sumatoria += matrizNotas[columnas][filas];
        }
    }

    float promediofinal = sumatoria / 72;

    cout << "El promedio del alumno es: " << promediofinal << endl;;

    if (promediofinal >= 70) {
        cout << "Si se puede graduar" << endl;
    }
    else {
        cout << "Vuelva a subir promedio" << endl;
    }



}