#include <iostream>
using namespace std;

int main() {
    string clima;
    float temperatura;

    cout << "como esta el clima? soleado,lluvia,nevado,tormenta: ";
    cin >> clima;

    cout << "Ingresa la temperatura: ";
    cin >> temperatura;

    if ((clima == "soleado") && temperatura < 15) {
        cout << "Salir al parque" << endl;
    }
    else if ((clima == "soleado") && temperatura >= 30) {
        cout << "Hace mucho calor, no salir" << endl;
    }
    else if (clima == "lluvia") {
        cout << "Salir con paraguas" << endl;
    }
    else if (clima == "nevado" && temperatura < 5) {
        cout << "No salir hace mucho frio" << endl;
    }
    else if (clima == "nevado" && temperatura >= 10) {
        cout << "Salir a jugar en la nieve bien abrigado" << endl;
    }
    else if (clima == "tormenta") {
        cout << "Alerta de tormenta, no salir" << endl;
    }
    else {
        cout << "Opcion no valida" << endl;
    }
}