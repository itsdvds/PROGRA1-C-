#include <iostream>
using namespace std;

int main() {
    string clima;
    float temperatura;

    cout << "como esta el clima? soleado,lluvia,nublado,tormenta: ";
    cin >> clima;

    cout << "Ingresa la temperatura: ";
    cin >> temperatura;

    if ((clima == "soleado") && temperatura < 35) {
        cout << "Salir al parque" << endl;
    }
    else if ((clima == "soleado") && temperatura >= 35) {
        cout << "Hace mucho calor, no salir y hidratarse" << endl;
    }
    else if (clima == "lluvia") {
        cout << "Quedarse en casa" << endl;
    }
    else if (clima == "nublado") {
        cout << "Actividades ligeras" << endl;
    }
    else if (clima == "tormenta") {
        cout << "Alerta de tormenta, no salir" << endl;
    }
    else {
        cout << "Opcion no valida" << endl;
    }
}