#include <iostream>
using namespace std;

int main() {

    string postre;
    string nombre;

    cout << "Dime tu nombre: ";
    cin >> nombre;

    cout << "Cual de estos pie's es tu favorito? LIMON, QUESO, CHOCOLATE, NINGUNO O TODOS: ";
    cin >> postre;

    // hasta aca

    if (postre == "LIMON" || postre == "limon" || postre == "Limon") {
        cout << nombre << " tu pie favorito es el de limon " << endl;
    }
    else if (postre == "Queso" || postre == "QUESO" || postre == "queso") {
        cout << nombre << " tu pie favorito es el de queso " << endl;
    }
    else if (postre == "Chocolate" || postre == "CHOCOLATE" || postre == "chocolate") {
        cout << nombre << " tu pie favorito es el de chocolate " << endl;
    }
    else if (postre == "Todos" || postre == "TODOS" || postre == "todos") {
        cout << nombre << " todos son tus postres favoritos " << endl;
    }
    else {
        cout << nombre << " no te gusta ninguno de estos postres" << endl;
    }

}