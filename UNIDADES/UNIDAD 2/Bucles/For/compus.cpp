#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <thread>

using namespace std;

int main() {

    srand(static_cast<unsigned int>(time(0))); // estamos declarando que usaremos la funcion srand para crear un numero aleatorio

    for (int i = 0; i < 24; i++)
    {
        cout << "Computadora numero " << (i+1) << endl;
        // Traer numero aleatorio 
        int random_num = 1 + (rand() % 100); // Funcion que genera un num aleatorio
        //Condicion de numero par

        if (random_num % 2 == 0) {
            cout << "La computadora " << " si prende" << endl;
        }
        else {
            cout << "La computadora " << " no prende" << endl;
        }
        this_thread::sleep_for(::chrono::seconds(1));
    }

    cout << "Pedirle al laboratorista que revise las computadoras que no prenden" << endl;
}