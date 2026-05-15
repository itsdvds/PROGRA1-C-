#include <iostream>

using namespace std;

int main() {
    // Declaración e inicialización de un arreglo 2D (matriz) de 3 filas y 4 columnas
    int matriz[3][4];

    for (int columnas = 0; columnas < 3; columnas++) {
        for (int filas = 0; filas < 3; filas++) {

            cout << "Ingrese el numero de la columna " << columnas << " Y de la fila " << filas << ": ";
            cin >> matriz[columnas][filas];

        }
     }

     for (int columnas = 0; columnas < 3; columnas++) {
        for (int filas = 0; filas < 3; filas++) {

            cout << matriz[columnas][filas] << " ";

        }
        cout << endl;
    }
}