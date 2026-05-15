#include <iostream>

using namespace std;

int main() {

    int num;

    int clave = 309;

    cout << "Introduce la clave: ";
    cin >> num;

    while (num != clave) {

        cout << "La clave es incorrecta";
    }
}