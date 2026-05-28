#include <iostream>

using namespace std;

int main() {
    
    int ingresado, ingresado2, multi;

    bool rango = false;
    
    do {
        
        cout << "Ingrese un numero: ";
        cin >> ingresado;

        cout << "Ingrese otro numero: ";
        cin >> ingresado2;

        if ((ingresado >= 1 && ingresado <= 50) && (ingresado2 >= 1 && ingresado2 <= 50)) {
            rango = true;
        }
        else {
            cout << "Uno de los números está fuera del rango permitido de 1-50 porfavor intente nuevamente" << endl;
        }
  
    } while (!rango);


    for(int i = 0; i < ingresado2; i++) {

        multi = ingresado * (i+1) ;

        cout << ingresado << " X " << (i+1) <<  " = " << multi << endl;

    }
     
    cout << "Gracias por usar" << endl;
}