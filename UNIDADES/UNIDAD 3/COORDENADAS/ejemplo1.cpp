#include <iostream>

using namespace std;

void gotoxy(int x, int y) {
        cout << "\033[" << y << ";"<< x << "H";
        cout.flush();
    }

int main () {

    // tablero de totito

    // vertical 124
    //horizontal 45
    // cruz 43

    // horizontales

    gotoxy(3,7);
    cout << char(45);
    cout.flush();
    cout << endl;

    gotoxy(9,7);
    cout << char(45);
    cout.flush();
    cout << endl;

    gotoxy(2,7);
    cout << char(45);
    cout.flush();
    cout << endl;

    gotoxy(8,7);
    cout << char(45);
    cout.flush();
    cout << endl;

    gotoxy(7,7);
    cout << char(45);
    cout.flush();
    cout << endl;

    // segunda parte horizonte

    gotoxy(13,7);
    cout << char(45);
    cout.flush();
    cout << endl;

    gotoxy(14,7);
    cout << char(45);
    cout.flush();
    cout << endl;

    gotoxy(13,7);
    cout << char(45);
    cout.flush();
    cout << endl;

    gotoxy(14,7);
    cout << char(45);
    cout.flush();
    cout << endl;

    //repetimos

    gotoxy(3,10);
    cout << char(45);
    cout.flush();
    cout << endl;

    gotoxy(9,10);
    cout << char(45);
    cout.flush();
    cout << endl;

    gotoxy(2,10);
    cout << char(45);
    cout.flush();
    cout << endl;

    gotoxy(8,10);
    cout << char(45);
    cout.flush();
    cout << endl;


    gotoxy(7,10);
    cout << char(45);
    cout.flush();
    cout << endl;

    // xd

    gotoxy(13,10);
    cout << char(45);
    cout.flush();
    cout << endl;

    gotoxy(14,10);
    cout << char(45);
    cout.flush();
    cout << endl;

    gotoxy(13,10);
    cout << char(45);
    cout.flush();
    cout << endl;

    gotoxy(14,10);
    cout << char(45);
    cout.flush();
    cout << endl;

    

    //end. horiz

    gotoxy(5,5);
    cout << char(124); 
    cout.flush();

    gotoxy(11,5);
    cout << char(124);
    cout.flush();
    cout << endl;

    gotoxy(5,6);
    cout << char(124);
    cout.flush();
    cout << endl;

    gotoxy(11,6);
    cout << char(124);
    cout.flush();
    cout << endl;

    // cruz
    gotoxy(5,7);
    cout << char(43);
    cout.flush();
    cout << endl;

    gotoxy(11,7);
    cout << char(43);
    cout.flush();
    cout << endl;

    // acaba cruz

    gotoxy(5,8);
    cout << char(124);
    cout.flush();
    cout << endl;

    gotoxy(11,8);
    cout << char(124);
    cout.flush();
    cout << endl;

    gotoxy(5,9);
    cout << char(124);
    cout.flush();
    cout << endl;

    gotoxy(11,9);
    cout << char(124);
    cout.flush();
    cout << endl;

    // cruz
    gotoxy(5,10);
    cout << char(43);
    cout.flush();
    cout << endl;

    gotoxy(11,10);
    cout << char(43);
    cout.flush();
    cout << endl;

    //acaba cruz

    gotoxy(5,11);
    cout << char(124);
    cout.flush();
    cout << endl;

    gotoxy(11,11);
    cout << char(124);
    cout.flush();
    cout << endl;

    gotoxy(5,12);
    cout << char(124);
    cout.flush();
    cout << endl;

    gotoxy(11,12);
    cout << char(124);
    cout.flush();
    cout << endl;

    cout << endl;


}

    
