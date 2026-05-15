#include <iostream>
using namespace std;

int main() {

    string cantante;
    string nombre;

    cout << "Dime tu nombre: ";
    cin >> nombre;

    // esto no lo hize yo

    cin.ignore();

    cout << "Cual de estos cantantes es tu favorito? NSQK, Álvaro Díaz, Trueno, Duki, Mené, ninguno o todos: ";
    getline(cin, cantante);

    // hasta aca

    if (cantante == "TRUENO" || cantante == "Trueno" || cantante == "trueno") {
        cout << nombre << " tu cantante favorito es TRUENO" << endl;
    }
    else if (cantante == "Duki" || cantante == "DUKI" || cantante == "duki") {
        cout << nombre << " tu cantante favorito es DUKI" << endl;
    }
    else if (cantante == "mene" || cantante == "MENE" || cantante == "Mene" || cantante == "MENÉ" || cantante == "Mené" || cantante == "mené") {
        cout << nombre << " tu cantante favorito es MENÉ" << endl;
    }
    else if (cantante == "Alvaro Diaz" || cantante == "ALVARO DIAZ" || cantante == "alvaro diaz" ||cantante == "Álvaro Díaz" || cantante == "ÁLVARO DÍAZ" || cantante == "Álvaro Díaz") {
        cout << nombre << " tu cantante favorito es ÁLVARO DÍAZ" << endl;
    }
    else if (cantante == "NSQK" || cantante == "nsqk" || cantante == "Nsqk") {
        cout << nombre << " tu cantante favorito es NSQK" << endl;
    }
     else if (cantante == "Todos" || cantante == "TODOS" || cantante == "todos") {
        cout << nombre << " todos ellos son tus cantantes favoritos" << endl;
    }
    else {
        cout << nombre << " no te gusta ninguno de estos cantantes" << endl;
    }

}