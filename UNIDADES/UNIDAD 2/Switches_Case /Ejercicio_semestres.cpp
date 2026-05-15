#include <iostream>

using namespace std;

int main() {

    bool decision = true;

    int semestre;
    string respuesta;

    cout << "Ingrese su semestre: ";
    cin >> semestre;

    switch (semestre)
    {
    case 1:
    case 2:
    case 3:
    case 4: {
        cout << " " << endl;
        cout << "Estas en el " << semestre << " semestre y " << "usted esta en área común" << endl;
        break;
    }
    case 5:
    case 6:
    case 7:
    case 8: {
        cout << " " << endl;
        cout << "Estas en el " << semestre << "semestre y " << "usted esta en área especifíca" << endl;
        break;
    }
    
    default: {
        cout << "No se encontro el semestre o el semestre no existe" << endl;
        break;
    }
    
    }
}