#include <iostream>
using namespace std;

int main() {
    string pasaporte, boleto;
    float equipaje;

    cout << "Tiene pasaporte?: ";
    cin >> pasaporte;

    cout << "Tiene boleto?: ";
    cin >> boleto;

    cout << "Peso del equipaje en kg: ";
    cin >> equipaje;

    if (pasaporte == "si" || pasaporte == "SI"  || pasaporte == "Si") {
        if (boleto == "si" || boleto == "SI"  || boleto == "Si") {
            if (equipaje <= 25) {
                cout << "Puede abordar el avion" << endl;
            } 
            else if (equipaje <= 32) {
                cout << "Puede abordar con recargo" << endl;
            } 
            else {
                cout << "Equipaje demasiado pesado" << endl;
            }
        } 
        else {
            cout << "No puede viajar sin boleto" << endl;
        }
    } 
    else {
        cout << "No puede viajar sin pasaporte" << endl;
    }
}