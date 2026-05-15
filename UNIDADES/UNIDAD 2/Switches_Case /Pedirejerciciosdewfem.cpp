#include <iostream>

using namespace std;

int main() {

    int opcion, respuesta;

    cout << "Ingrese la opcion que desea: " << endl;
    cout << "1. Ciclo while" << endl;
    cout << "2. Ciclo di-while" << endl;
    cout << "3. ciclo for" << endl;
    cout << "4. Condicion if-else" << endl;
    cout << "5. Condicion if-else-if-else" << endl;
    cout << "6. Solo imprimir un mensaje" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1: {

        int repeticiones;

        cout << "Cuantas repeticiones quieres?: ";
        cin >> repeticiones;

        while (repeticiones > 0)
        cout << "Esta es la repeticion" << repeticiones << endl;
        repeticiones = repeticiones - 1;
        break;
    }

    case 2: {

        bool repetir = true;

        do {
            string respuesta;
            cout << "Quieres seguir repitiendo? ";
            cin >> respuesta;
            
            if (respuesta == "si" || respuesta == "Si" || respuesta == "SI") 
            {
                repetir = false;
            }
        } while (repetir == true);
        break;
    }

    case 3: {

        int repeticiones;

        cout << "Cuantas repeticiones quieres?: ";
        cin >> repeticiones;
        
        for (int i = 0; i < repeticiones; i++)
        {
            cout << "Esta es la repeticion " << i + 1 << endl;
        }
        break;
    }

    case 4: {

        string palabra;

        cout << "Ingrese la palabra: ";
        cin >> palabra;
        int largo = palabra.length();

        if (largo > 5 ) {
            cout << "La palabra es muy larga" << endl;
        }
        else {
            cout << "La palabra no es larga" << endl;
        }
        break;
    }

    case 5: {

        string palabra;

        cout << "Ingrese la palabra: ";
        cin >> palabra;
        int largo = palabra.length();

        if (largo > 10 ) {
            cout << "La palabra es muy larga" << endl;
        }
        else if (largo < 5) {
            cout << "La palabra es muy corta" << endl;
        }
        else {
            cout << "La palabra es ideal" << endl;
        }
        break;
    }

    case 6: {

        cout << "Este es tu mensaje" << endl;
        break;
    }

    default: {

        cout << "Opcion invalida" << endl;
        break;
    }
        
    }
}