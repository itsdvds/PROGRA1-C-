#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main () {
    //ciclo do while

    while (1 == 1) {  
        int rojo = 60;
        int verde = 60;
        do {
            cout << "No puedes pasar aun faltan: " << rojo << " segundos" << endl;
            this_thread::sleep_for(chrono::seconds(1));
            rojo--;
        } while (rojo != 0);

        do { 
            cout << "Ya puedes pasar en estos: " << verde << " segundos" << endl;
            this_thread::sleep_for(::chrono::seconds(1));
            verde--;
        } while (verde != 0);
    }
}
