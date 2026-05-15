#include <iostream>

using namespace std;

int main() {

    // arreglos

    string arrayMarcas[25];
    string diasSemana[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

    cout << "Ingresa marca: ";
    
   for (int i = 0; i < 25; i ++) {

    cout << "Ingrese Marcas: ";
    cin >> arrayMarcas[i];

   }

   for (int j = 0; j < 25; j ++) {

    cout << endl << "La marca en la posicion " << j << " es " << arrayMarcas[j];
    cout << endl;
   }
}