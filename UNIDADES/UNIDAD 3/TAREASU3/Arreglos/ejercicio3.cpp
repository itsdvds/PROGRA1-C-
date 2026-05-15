#include <iostream>

using namespace std;

int main () {
    // Que pasa si nosotros no definimos el limite?

    int matrizMesesSueldo[800][800];

    int filas = 0;
    int columnas =0;
    float sueldo;

    cout << "Cuantos meses quiere calcular?: ";
    cin >> columnas;

    cout << "Cuantos registros por mes quiere calcular?: ";
    cin >> filas;

    int total = columnas * filas;

    for(int i = 0; i < columnas; i ++) {
        for(int j = 0; j < filas; j ++){
            cout << "Ingrese el sueldo No. " << (j +1) << " del mes " << (i + 1) << ": ";
            cin >> matrizMesesSueldo[i][j];
        }
    }

    int sumatoria = 0;

    for(int i = 0; i < columnas; i ++) {
        for(int j = 0; j < filas; j ++){

            sumatoria += matrizMesesSueldo[i][j];
        }
    }

    int promedio = sumatoria / total;
    cout << "El promedio int de sueldo es: " << promedio << endl;
}