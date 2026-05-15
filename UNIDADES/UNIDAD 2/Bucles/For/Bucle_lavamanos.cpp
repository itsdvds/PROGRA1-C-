#include <iostream>

using namespace std;

int main() {

    bool lavarse = false;
    string decision;

    cout << "Quieres lavarte las manos: ";
    cin >> decision;

    if (decision == "Si" || decision == "SI" || decision == "si") {
        lavarse = true;
    }

    while (lavarse == true)
    {
        cout << "Lavandonos las manos" << endl;
        cout << "Sigues lavandote?: ";
        cin >> decision; 

        if (decision == "No" || decision == "NO" || decision == "no") {
            lavarse = false;
        }
    }
    
    cout << "Dejaste de lavarte las manos" << endl;
}