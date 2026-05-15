#include <iostream>

using namespace std;

void gotoxy(int x, int y) {
        cout << "\033[" << y << ";"<< x << "H";
        cout.flush();
    }

int main () {


    gotoxy(14,11);
    cout << char(43);
    cout.flush();
   


    gotoxy(17,9);
    cout << char(43);
    cout.flush();
    


    gotoxy(20,10);
    cout << char(43);
    cout.flush();
    


    gotoxy(15,7);
    cout << char(43);
    cout.flush();
   



    gotoxy(18,8);
    cout << char(43);
    cout.flush();
    



    gotoxy(21,6);
    cout << char(43);
    cout.flush();
    


    gotoxy(16,4);
    cout << char(43);
    cout.flush();
    



    gotoxy(19,3);
    cout << char(43);
    cout.flush();
    



    gotoxy(22,5);
    cout << char(43);
    cout.flush();

    gotoxy(13,2);
    cout << char(43);
    cout.flush();

    gotoxy(14,14);
    cout << "FIN";
    cout.flush();

    cout << endl;

}