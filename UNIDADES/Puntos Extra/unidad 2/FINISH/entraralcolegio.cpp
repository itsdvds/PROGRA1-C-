#include <iostream>
using namespace std;

int main() {
    string uniforme, carnet;
    int hora;

    cout << "Trae uniforme?: ";
    cin >> uniforme;

    cout << "Trae carnet?: ";
    cin >> carnet;

    cout << "Hora de llegada: ";
    cin >> hora;

    if (uniforme == "si" || uniforme == "SI"  || uniforme == "Si") {
        if (carnet == "si" || carnet == "SI"  || carnet == "Si") {
            if (hora <= 7) {
                cout << "Entrada permitida" << endl;
            } 
            else if (hora > 7 && hora <= 8) {
                cout << "Entrada con retraso" << endl;
            } 
            else {
                cout << "No puede entrar por tardanza" << endl;
            }
        } 
        else {
            cout << "No puede entrar sin carnet" << endl;
        }
    } 
    else {
        cout << "No puede entrar sin uniforme" << endl;
    }
}