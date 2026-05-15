#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main () {
    //ciclo do-while

    while (1 == 1) {
        int rojo = 10;
        int verde = 5;
        do {
            cout << "No puede pasar aun restante: " << rojo << endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            rojo--;
        } while (rojo != 0);

        do {
            cout << "Ya puedes pasar restante: " << verde << endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
            verde--;
        } while (verde != 0);
    }
}