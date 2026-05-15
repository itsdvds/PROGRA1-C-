#include <iostream>

using namespace std;

int main() {

    // arreglos

    string arrayMarcas[25];
    string diasSemana[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    
   for (int i = 1; i < 8; i ++) {

    cout << "Ingrese la letra de el amor de su vida: ";
    cin >> arrayMarcas[i];

   }

   for (int j = 1; j < 8; j ++) {

    cout << endl << "La letra  " << j << " del amor de tu vida es " << arrayMarcas[j];
    cout << endl;
   }
}