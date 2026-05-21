#include <iostream>

using namespace std;

void gotoxy(int x, int y) {
    cout << "\033[" << y << ";" << x << "H";
}

void color(int c) {
    cout << "\033[" << c << "m";
}

int main() {
    cout << "\033[2J";

    //  FILA 1 
    color(31); 
    gotoxy(9, 1); cout << "████"; gotoxy(11, 1); cout << "████"; gotoxy(13, 1); cout << "████"; 
    gotoxy(15, 1); cout << "████"; gotoxy(17, 1); cout << "████"; gotoxy(19, 1); cout << "████";

    //  FILA 2 
    color(31); 
    gotoxy(7, 2); cout << "████"; gotoxy(9, 2); cout << "████"; gotoxy(11, 2); cout << "████"; 
    gotoxy(13, 2); cout << "████"; gotoxy(15, 2); cout << "████"; gotoxy(17, 2); cout << "████"; 
    gotoxy(19, 2); cout << "████"; gotoxy(21, 2); cout << "████"; gotoxy(23, 2); cout << "████";

    //  FILA 3 
    color(31); gotoxy(7, 3); cout << "████"; gotoxy(9, 3); cout << "████"; gotoxy(11, 3); cout << "████"; 
    color(33); gotoxy(13, 3); cout << "████"; gotoxy(15, 3); cout << "████"; 
    color(40); gotoxy(17, 3); cout << "    "; 
    color(33); gotoxy(19, 3); cout << "████";

    //  FILA 4 
    color(31); gotoxy(5, 4); cout << "████"; 
    color(33); gotoxy(7, 4); cout << "████"; 
    color(31); gotoxy(9, 4); cout << "████"; 
    color(33); gotoxy(11, 4); cout << "████"; gotoxy(13, 4); cout << "████"; gotoxy(15, 4); cout << "████"; 
    color(40); gotoxy(17, 4); cout << "    "; 
    color(33); gotoxy(19, 4); cout << "████"; gotoxy(21, 4); cout << "████"; gotoxy(23, 4); cout << "████";

    //  FILA 5 
    color(31); gotoxy(5, 5); cout << "████"; 
    color(33); gotoxy(7, 5); cout << "████"; 
    color(31); gotoxy(9, 5); cout << "████"; gotoxy(11, 5); cout << "████"; 
    color(33); gotoxy(13, 5); cout << "████"; gotoxy(15, 5); cout << "████"; gotoxy(17, 5); cout << "████"; 
    color(31); gotoxy(19, 5); cout << "████"; 
    color(33); gotoxy(21, 5); cout << "████"; gotoxy(23, 5); cout << "████"; gotoxy(25, 5); cout << "████";

    // FILA 6 
    color(31); gotoxy(5, 6); cout << "████"; gotoxy(7, 6); cout << "████"; 
    color(33); gotoxy(9, 6); cout << "████"; gotoxy(11, 6); cout << "████"; gotoxy(13, 6); cout << "████"; gotoxy(15, 6); cout << "████"; 
    color(31); gotoxy(17, 6); cout << "████"; gotoxy(19, 6); cout << "████"; gotoxy(21, 6); cout << "████"; gotoxy(23, 6); cout << "████";

    //  FILA 7 
    color(33); 
    gotoxy(9, 7); cout << "████"; gotoxy(11, 7); cout << "████"; gotoxy(13, 7); cout << "████"; 
    gotoxy(15, 7); cout << "████"; gotoxy(17, 7); cout << "████"; gotoxy(19, 7); cout << "████"; gotoxy(21, 7); cout << "████";

    // FILA 8 
    color(31); gotoxy(7, 8); cout << "████"; gotoxy(9, 8); cout << "████"; 
    color(34); gotoxy(11, 8); cout << "████"; 
    color(31); gotoxy(13, 8); cout << "████"; gotoxy(15, 8); cout << "████"; gotoxy(17, 8); cout << "████"; gotoxy(19, 8); cout << "████";

    //  FILA 9 
    color(31); gotoxy(5, 9); cout << "████"; gotoxy(7, 9); cout << "████"; gotoxy(9, 9); cout << "████"; 
    color(34); gotoxy(11, 9); cout << "████"; 
    color(31); gotoxy(13, 9); cout << "████"; gotoxy(15, 9); cout << "████"; 
    color(34); gotoxy(17, 9); cout << "████"; 
    color(31); gotoxy(19, 9); cout << "████"; gotoxy(21, 9); cout << "████"; gotoxy(23, 9); cout << "████";

    // FILA 10 
    color(31); gotoxy(3, 10); cout << "████"; gotoxy(5, 10); cout << "████"; gotoxy(7, 10); cout << "████"; gotoxy(9, 10); cout << "████"; 
    color(34); gotoxy(11, 10); cout << "████"; gotoxy(13, 10); cout << "████"; gotoxy(15, 10); cout << "████"; gotoxy(17, 10); cout << "████"; 
    color(31); gotoxy(19, 10); cout << "████"; gotoxy(21, 10); cout << "████"; gotoxy(23, 10); cout << "████"; gotoxy(25, 10); cout << "████";

    // --- FILA 11 ---
    color(33); gotoxy(3, 11); cout << "████"; gotoxy(5, 11); cout << "████"; 
    color(31); gotoxy(7, 11); cout << "████"; 
    color(34); gotoxy(9, 11); cout << "████"; 
    color(93); gotoxy(11, 11); cout << "████"; 
    color(34); gotoxy(13, 11); cout << "████"; gotoxy(15, 11); cout << "████"; 
    color(93); gotoxy(17, 11); cout << "████"; 
    color(34); gotoxy(19, 11); cout << "████"; 
    color(31); gotoxy(21, 11); cout << "████"; 
    color(33); gotoxy(23, 11); cout << "████"; gotoxy(25, 11); cout << "████";

    //  FILA 12 
    color(33); gotoxy(3, 12); cout << "████"; gotoxy(5, 12); cout << "████"; gotoxy(7, 12); cout << "████"; 
    color(34); 
    gotoxy(9, 12); cout << "████"; gotoxy(11, 12); cout << "████"; gotoxy(13, 12); cout << "████"; 
    gotoxy(15, 12); cout << "████"; gotoxy(17, 12); cout << "████"; gotoxy(19, 12); cout << "████"; 
    color(33); gotoxy(21, 12); cout << "████"; gotoxy(23, 12); cout << "████"; gotoxy(25, 12); cout << "████";

    // FILA 13
    color(33); gotoxy(3, 13); cout << "████"; gotoxy(5, 13); cout << "████"; 
    color(34); 
    gotoxy(7, 13); cout << "████"; gotoxy(9, 13); cout << "████"; gotoxy(11, 13); cout << "████"; gotoxy(13, 13); cout << "████"; 
    gotoxy(15, 13); cout << "████"; gotoxy(17, 13); cout << "████"; gotoxy(19, 13); cout << "████"; gotoxy(21, 13); cout << "████"; 
    color(33); gotoxy(23, 13); cout << "████"; gotoxy(25, 13); cout << "████";

    // FILA 14
    color(34); 
    gotoxy(7, 14); cout << "████"; gotoxy(9, 14); cout << "████"; gotoxy(11, 14); cout << "████"; 
    gotoxy(17, 14); cout << "████"; gotoxy(19, 14); cout << "████"; gotoxy(21, 14); cout << "████";

    // FILA 15
    color(31); 
    gotoxy(5, 15); cout << "████"; gotoxy(7, 15); cout << "████"; gotoxy(9, 15); cout << "████"; 
    gotoxy(19, 15); cout << "████"; gotoxy(21, 15); cout << "████"; gotoxy(23, 15); cout << "████";

    // FILA 16
    color(31); 
    gotoxy(3, 16); cout << "████"; gotoxy(5, 16); cout << "████"; gotoxy(7, 16); cout << "████"; gotoxy(9, 16); cout << "████"; 
    gotoxy(19, 16); cout << "████"; gotoxy(21, 16); cout << "████"; gotoxy(23, 16); cout << "████"; gotoxy(25, 16); cout << "████";

    color(0); 
    gotoxy(1, 18); 
    cout << endl;

    return 0;
}