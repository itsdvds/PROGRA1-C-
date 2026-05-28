#include <iostream>
#include <random> //Libreria para utilizar randomizer

using namespace std;

int main() {
    //Generar número aleatorio entre 1 y 20
    //Solo guardarlo en variable
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 20);

    int numero_aleatorio = dist(gen);
    bool encontrado = false;
    do {
        int ingresado;
        cout << "Ingrese un numero: ";
        cin >> ingresado;

        if (ingresado > numero_aleatorio) {
            cout << "El numero es menor que " << ingresado;
        } 
        else if (ingresado < numero_aleatorio) {
            cout << "El numero es mayor que " << ingresado;
        }
        else {
            cout << "Felicidades! Encontró el número";
            encontrado = true;
        }
    } while (encontrado == true);
    cout << "Gracias por ayudarme a revisar :)";

    // Saco 17/25

    // 5/5 
    // 7/4
    // 8/7
    // 5/3
}