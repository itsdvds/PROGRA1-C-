#include <iostream>

using namespace std;

void gotoxy(int x, int y) {
        cout << "\033[" << y << ";"<< x << "H";
        cout.flush();
    }

int main () {

    // NIVEL 1
    gotoxy(5, 5);
    cout << "---------------------";
    gotoxy(5, 6);
    cout << "|     [o]  [o]      |";
    gotoxy(5, 7);
    cout << "|                   |";
    gotoxy(5, 8);
    cout << "|     [o]  [o]      |";
    
    // NIVEL 2
    gotoxy(5, 9);
    cout << "---------------------";
    gotoxy(5, 10);
    cout << "|     [o]  [o]      |";
    gotoxy(5, 11);
    cout << "|                   |";
    gotoxy(5, 12);
    cout << "|     [o]  [o]      |";
    
    // NIVEL 3
    gotoxy(5, 13);
    cout << "---------------------";
    gotoxy(5, 14);
    cout << "|     [o]  [o]      |";
    gotoxy(5, 15);
    cout << "|                   |";
    gotoxy(5, 16);
    cout << "|     [o]  [o]      |";
    
    // NIVEL 4
    gotoxy(5, 17);
    cout << "---------------------";
    gotoxy(5, 18);
    cout << "|     [o]  [o]      |";
    gotoxy(5, 19);
    cout << "|                   |";
    gotoxy(5, 20);
    cout << "|     [o]  [o]      |";
    
    // NIVEL 5
    gotoxy(5, 21);
    cout << "---------------------";
    gotoxy(5, 22);
    cout << "|     [o]  [o]      |";
    gotoxy(5, 23);
    cout << "|                   |";
    gotoxy(5, 24);
    cout << "|     [o]  [o]      |";
    
    // PISO
    gotoxy(5, 25);
    cout << "=====================";

    cout << endl;

     // Figura
    
    gotoxy(37, 7);
    cout << "*";
    
    gotoxy(36, 8);
    cout << "***";
    
    gotoxy(35, 9);
    cout << "*****";
    
    gotoxy(34, 10);
    cout << "*******";
    
    gotoxy(33, 11);
    cout << "*********";
    
    gotoxy(32, 12);
    cout << "***********";
    
    gotoxy(31, 13);
    cout << "*************";
    
    gotoxy(30, 14);
    cout << "***************";

    // año de nacimiento

    // M1

    gotoxy(48, 11);
    cout << "*       *";
    gotoxy(48, 12);
    cout << "*       *";
    gotoxy(48, 13);
    cout << "*       *";
    gotoxy(48, 14);
    cout << "*       *";

    gotoxy(50, 11);
    cout << "*   *";
    gotoxy(51, 12);
    cout << "* *";

    //M2

    gotoxy(59, 11);
    cout << "*       *";
    gotoxy(59, 12);
    cout << "*       *";
    gotoxy(59, 13);
    cout << "*       *";
    gotoxy(59, 14);
    cout << "*       *";

    gotoxy(61, 11);
    cout << "*   *";
    gotoxy(62, 12);
    cout << "* *";

    //V 

    gotoxy(70, 11);
    cout << "*     *";
    gotoxy(71, 12);
    cout << "*   *";
    gotoxy(72, 13);
    cout << "* *";
    gotoxy(73, 14);
    cout << "*";

    // I1

    gotoxy(79, 11);
    cout << "*";
    gotoxy(79, 12);
    cout << "*";
    gotoxy(79, 13);
    cout << "*";
    gotoxy(79, 14);
    cout << "*";

    //I2

    gotoxy(82, 11);
    cout << "*";
    gotoxy(82, 12);
    cout << "*";
    gotoxy(82, 13);
    cout << "*";
    gotoxy(82, 14);
    cout << "*";

    // Calculadora

    gotoxy(88, 9);
    cout << "------------------------";
    gotoxy(88, 10);
    cout << "|    [    2+2     ]    |";
    gotoxy(88, 11);
    cout << "|    [            ]    |";
    gotoxy(88, 12);
    cout << "|    [           4]    |";
    

    gotoxy(88, 13);
    cout << "------------------------";
    gotoxy(88, 14);
    cout << "|    [7] [8] [9]  [X]  |";
    gotoxy(88, 15);
    cout << "|                      |";
    gotoxy(88, 16);
    cout << "|    [4] [5] [6]  [-]  |";
    gotoxy(88, 17);
    cout << "|                      |";
    
    gotoxy(88, 18);
    cout << "|    [1] [2] [3]  [+]  |";
    gotoxy(88, 19);
    cout << "|                      |";
    gotoxy(88, 20);
    cout << "|    [%] [0] [.]  [=]  |";
    

    gotoxy(88, 21);
    cout << "------------------------";



    gotoxy(33,50);
    cout << "FIN";

    cout << endl;
}