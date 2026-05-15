#include <iostream>

using namespace std;

int main() {

    int arrayNotas[5];


    for (int i = 4; i >= 0; i --) {

        cout << "Ingrese nota del curso: " << i << ": ";
        cin >> arrayNotas[i];
    }

    for (int j = 0; j < 4; j++) {

        cout << endl << "Nota en la posicion " << j << ": " << arrayNotas[j];
        cout << endl;
    }
}