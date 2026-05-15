#include <iostream>

using namespace std;

void gotoxy(int x, int y) {
        cout << "\033[" << y << ";"<< x << "H";
        cout.flush();
    }

int main () {


    gotoxy(10,15);
    cout << char(43);
    cout.flush();
    cout << endl;


    gotoxy(5,12);
    cout << char(43);
    cout.flush();
    cout << endl;


    gotoxy(15,12);
    cout << char(43);
    cout.flush();
    cout << endl;


    gotoxy(5,14);
    cout << char(43);
    cout.flush();
    cout << endl;



    gotoxy(15,14);
    cout << char(43);
    cout.flush();
    cout << endl;



    gotoxy(9,11);
    cout << char(43);
    cout.flush();
    cout << endl;


    gotoxy(11,9);
    cout << char(43);
    cout.flush();
    cout << endl;



    gotoxy(9,6);
    cout << char(43);
    cout.flush();
    cout << endl;



    gotoxy(11,14);
    cout << char(43);
    cout.flush();
    cout << endl;

    gotoxy(15,15);
    cout << "FIN";
    cout.flush();
    cout << endl;

    cout << endl;
}