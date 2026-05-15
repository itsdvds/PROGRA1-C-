#include <iostream>

using namespace std;

int main() {
    const int SIZE = 8;
    double tablero[SIZE][SIZE];
    double suma = 0.0;


    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            int n = i * SIZE + j; 
            double valor = 1.0;
            
            for (int k = 0; k < n; ++k) {
                valor *= 1.5;
            }
            
            tablero[i][j] = valor;
            suma += tablero[i][j];
        }
    }

   
    cout << "Tablero de ajedrez (8x8) con multiplicaciones por 1.5:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << tablero[i][j] << "\t";
        }
        cout << "\n";
    }

    
    cout << "\nSuma total de todas las casillas: " << suma << "\n";

}
