#include <iostream>
using namespace std;

int main() {
    string comida, bebida;
    float dinero;

    cout << "El precio de la hamburguesa o de la pizza es de Q50 ";

    cout << "Que desea comer: hamburguesa o pizza?: ";
    cin >> comida;

    cout << "Desea bebida?: ";
    cin >> bebida;

    cout << "Cuanto dinero tiene: ";
    cin >> dinero;

    if (dinero >= 50) {
        if (comida == "hamburguesa") {
            if (bebida == "si" || bebida == "SI"  || bebida == "Si") {
                cout << "Pedido completo: hamburguesa + bebida" << endl;
            } 
            else {
                cout << "Pedido: hamburguesa" << endl;
            }
        } 
        else {
            if (bebida == "si") {
                cout << "Pedido: pizza + bebida" << endl;
            } 
            else {
                cout << "Pedido: pizza" << endl;
            }
        }
    } 
    else {
        cout << "Dinero insuficiente" << endl;
    }
}