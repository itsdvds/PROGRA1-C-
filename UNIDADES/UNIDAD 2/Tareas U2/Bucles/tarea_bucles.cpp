#include <iostream>

using namespace std;

int main() {

    bool futbol = false;
    string jugar;

    cout << "Quieres jugar futbol? ";
    cin >> jugar;

    if (jugar == "Si"  || jugar == "si" || jugar == "SI") {
        futbol = true;
    }
    while (futbol == true )
    {
        cout << "Jugando futbol " << endl;
        cout << "Quieres seguir jugando futbol?: ";
        cin >> jugar; 

        if (jugar == "no"  || jugar == "No" || jugar == "NO") {
            futbol = false;
        }
    }
    cout << "Dejaste de jugar fut" << endl;
}