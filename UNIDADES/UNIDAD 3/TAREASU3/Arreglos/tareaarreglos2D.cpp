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
    // 8 filas (8 semestres)

    float matrizNotas[7][2];
    float promediofinal;

    do {
        float sumatoria = 0;

        for (int columnas = 0; columnas < 7; columnas++) {
            for (int filas = 0; filas < 2; filas++) {
                cout << "Semestre " << (filas + 1) << " curso No. " << (columnas + 1) << ": ";
                cin >> matrizNotas[columnas][filas];

                while (matrizNotas[columnas][filas] < 61) {
                    cout << "Tu nota  es menor a 61, tienes que subir promedio: ";
                    cin >> matrizNotas[columnas][filas];
                }

                sumatoria += matrizNotas[columnas][filas];
            }
        }

        promediofinal = sumatoria / 14;
        cout << "El promedio del alumno es: " << promediofinal << endl;

        if (promediofinal >= 70) {
            cout << "Si se puede graduar" << endl;
        } else {
            cout << "Vuelva a subir promedio" << endl;
        }

    } while (promediofinal < 70);

}