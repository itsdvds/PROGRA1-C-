#include <iostream>

using namespace std;

int main() {
    
    string arrayMedicamentos[10];
    
    for (int i = 9; i >= 0; i --) {

    cout << "Ingrese el nombre del medicamento " << i << ": ";
    cin >> arrayMedicamentos[i];

   }

   for (int j = 0; j < 9; j ++) {

    cout << endl << "El medicamento " << j << " se llama:  " << arrayMedicamentos[j];
    cout << endl;
   }

   string arrayApartamentos[10];
    
   for (int l = 9; l >= 0; l --) {

    cout << "Ingrese el numero de apartamento " << l << ": ";
    cin >> arrayApartamentos[l];

   }

   for (int k = 0; k < 9; k ++) {

    cout << endl << "El apartamento " << k << " es el numero:  " << arrayApartamentos[k];
    cout << endl;
   }
}