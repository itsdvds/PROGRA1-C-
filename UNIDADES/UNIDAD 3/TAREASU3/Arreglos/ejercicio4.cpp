#include <iostream>

using namespace std;

int main() {
    const int SIZE = 8;
    double tablero[SIZE][SIZE];
    double suma = 0.0;
    double valor = 1.0;  

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            tablero[i][j] = valor;
            suma += tablero[i][j];
            valor *= 1.5;  
        }
    }
 
    cout << "Tablero de ajedrez (8x8) con multiplicaciones por 1.5:";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << tablero[i][j] << "\t";
        }
        cout << endl;
    }
 
    cout << "Suma total de todas las casillas: " << suma << endl;
}