#include <iostream>

using namespace std;

void gotoxy(int x, int y) {
        cout << "\033[" << y << ";"<< x << "H";
        cout.flush();
    }

int main () {


    gotoxy(15,11);
    cout << char(43);
    cout.flush();
   


    gotoxy(13,12);
    cout << char(43);
    cout.flush();
    


    gotoxy(13,13);
    cout << char(43);
    cout.flush();
    


    gotoxy(13,14);
    cout << char(43);
    cout.flush();
   



    gotoxy(13,15);
    cout << char(43);
    cout.flush();
    



    gotoxy(17,15);
    cout << char(43);
    cout.flush();
    


    gotoxy(17,14);
    cout << char(43);
    cout.flush();
    



    gotoxy(17,13);
    cout << char(43);
    cout.flush();
    



    gotoxy(17,12);
    cout << char(43);
    cout.flush();

    gotoxy(18,18);
    cout << "FIN";
    cout.flush();



    cout << endl;
}