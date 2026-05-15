#include <iostream>
using namespace std;

int main (){
    //semaforo
    char semaforo;
    char respuesta;

    cout<< "el semaforo esta funcionando? (s/n)" << endl;
    cin >> respuesta;

    if (respuesta=='s'){
        cout<< "ingrese el color del semaforo: " << endl;
        cout << "Verde, Amarillo, Rojo, Parpadeo (V/A/R/P)" << endl;
        cin >> semaforo;
        if (semaforo=='V'|| semaforo=='v'){
            cout<< "Puedes avanzar" << endl;
        }
        else if (semaforo=='A' || semaforo=='a'){
            cout<< "avanzar con precaucion o detenerse" << endl;
        }
        else if (semaforo=='R'  || semaforo=='r'){
            cout<< "detenerse" << endl;
        }
        else if (semaforo=='P'  || semaforo=='p'){
            cout<< "precaucion" << endl;
        }
    }
    else {
        cout<< "el semaforo esta apagado" << endl;
    }
}