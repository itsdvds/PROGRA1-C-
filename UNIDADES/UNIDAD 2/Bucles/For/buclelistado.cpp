#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    int estudiantes = 21;

    while (estudiantes > 0) {
        cout << "Anotar nombre del estudiante numero  " << estudiantes << endl;
        cout << "Anotar carneé del estudiante numero  " << estudiantes << endl;
        cout << endl;

        estudiantes--;

        if (estudiantes > 0) {
            cout << "Aun faltan por anotarse" << endl;
        }
        else {
            cout << "Se terminaron de anotar todos" << endl;
        }
        this_thread::sleep_for(::chrono::seconds(3));
    }
}