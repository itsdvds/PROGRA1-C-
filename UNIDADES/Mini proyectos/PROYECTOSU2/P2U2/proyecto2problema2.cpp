#include <iostream>

using namespace std;

int main() {
    
    double ventas[7];
    string dias[7] = {"Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo"};
    
    
    for (int i = 0; i < 7; i++) {
        cout << "Ingrese las ventas del " << dias[i] << ": ";
        cin >> ventas[i];
    }
    
    double total = 0;
    for (int i = 0; i < 7; i++) {
        total += ventas[i];
    }
    
    double promedio = total / 7;
    
    cout << "Total de ventas por día: ";
    for (int i = 0; i < 7; i++) {
        cout << dias[i] << ": " << ventas[i] << endl;
    }
    
    cout << "Promedio semanal de ventas: " << promedio << endl;
    
    if (promedio >= 7000 && promedio <= 10000) {
        cout << "Semana normal" << endl;
    } else if (promedio >= 10001 && promedio <= 15000) {
        cout << "Buena semana" << endl;
    } else if (promedio > 15000) {
        cout << "Semana sobresaliente" << endl;
    } else {
        cout << "Semana por debajo del promedio" << endl; 
    }
    
}


