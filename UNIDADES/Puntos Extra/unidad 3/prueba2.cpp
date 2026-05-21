#include <iostream>

using namespace std;

void gotoxy(int x, int y) {
    cout << "\033[" << y << ";" << x << "H";
}


void color(int c) {

    // 32 = Verde Oscuro, 92 = Verde Claro, 31 = Marrón/Rojo, 33 = Piel/Amarillo, 37 = Blanco

    cout << "\033[" << c << "m";
}

int main(){

color(31); gotoxy(18, 5); cout << "██"; gotoxy(20, 5); cout << "██"; gotoxy(22, 5); cout << "██"; gotoxy(24, 5); cout << "██"; gotoxy(26, 5); cout << "██";

color(31); gotoxy(16, 6); cout << "██"; gotoxy(17, 6); cout << "██"; gotoxy(18, 6); cout << "██"; gotoxy(20, 6); cout << "██"; gotoxy(22, 6); cout << "██"; gotoxy(24, 6); cout << "██"; gotoxy(26, 6); cout << "██"; gotoxy(28, 6); cout << "██"; gotoxy(29, 6); cout << "██"; gotoxy(30, 6); cout << "██"; gotoxy(31, 6); cout << "██"; gotoxy(32, 6); cout << "██";

color(31); gotoxy(16,7); cout << "██"; gotoxy(17,7); cout << "██"; gotoxy(18,7); cout << "██"; gotoxy(19,7); cout << "██"; gotoxy(20,7); cout << "██"; gotoxy(21,7); cout << "██";

color(33); gotoxy (22,7); cout << "██"; gotoxy (23,7); cout << "██"; gotoxy (24,7); cout << "██"; gotoxy (25,7); cout << "██"; gotoxy (28,7); cout << "██"; color(37); gotoxy (26,7); cout << "██";

color(31); gotoxy(14, 8); cout << "██"; gotoxy(15, 8); cout << "██"; color(33); gotoxy(16, 8); cout << "██"; gotoxy(17, 8); cout << "██"; color(31); gotoxy(18, 8); cout << "██"; gotoxy(19, 8); cout << "██"; color(33); gotoxy(20, 8); cout << "██"; gotoxy(21, 8); cout << "██"; gotoxy(22, 8); cout << "██"; gotoxy(24, 8); cout << "██"; color(37); gotoxy(26, 8); cout << "██"; color(33); gotoxy(28, 8); cout << "██"; gotoxy(29, 8); cout << "██"; gotoxy(30, 8); cout << "██"; gotoxy(31, 8); cout << "██"; gotoxy(32, 8); cout << "██";

color(31); gotoxy(14, 9); cout << "██"; gotoxy(15, 9); cout << "██"; color(33); gotoxy(16, 9); cout << "██"; gotoxy(17, 9); cout << "██"; color(31); gotoxy(18, 9); cout << "██"; gotoxy(19, 9); cout << "██"; gotoxy(20, 9); cout << "██"; gotoxy(21, 9); cout << "██";color(33); gotoxy(22, 9); cout << "██"; gotoxy(23, 9); cout << "██"; gotoxy(24, 9); cout << "██"; gotoxy(25, 9); cout << "██";   gotoxy(26, 9); cout << "██"; color(31); gotoxy(28, 9); cout << "██"; gotoxy(29, 9); cout << "██"; color(33);  gotoxy(30, 9); cout << "██"; gotoxy(31, 9); cout << "██"; gotoxy(32, 9); cout << "██"; gotoxy(33, 9); cout << "██"; gotoxy(34, 9); cout << "██";

color(31); gotoxy(14, 10); cout << "██"; gotoxy(15, 10); cout << "██"; color(31); gotoxy(16, 10); cout << "██"; color(33); gotoxy(18, 10); cout << "██"; gotoxy(19, 10); cout << "██"; gotoxy(20, 10); cout << "██"; gotoxy(21, 10); cout << "██"; gotoxy(22, 10); cout << "██"; gotoxy(23, 10); cout << "██"; gotoxy(24, 10); cout << "██"; color(31); gotoxy(25, 10); cout << "██";   gotoxy(26, 10); cout << "██"; color(31); gotoxy(28, 10); cout << "██"; gotoxy(29, 10); cout << "██"; color(31);  gotoxy(30, 10); cout << "██"; gotoxy(31, 10); cout << "██"; gotoxy(32, 10); cout << "██";

color(33); gotoxy(18, 11); cout << "██"; gotoxy(19, 11); cout << "██"; gotoxy(20, 11); cout << "██"; gotoxy(21, 11); cout << "██"; gotoxy(22, 11); cout << "██"; gotoxy(23, 11); cout << "██"; gotoxy(24, 11); cout << "██"; gotoxy(25, 11); cout << "██"; gotoxy(26, 11); cout << "██"; gotoxy(27, 11); cout << "██"; gotoxy(28, 11); cout << "██"; gotoxy(29, 11); cout << "██"; gotoxy(30, 11); cout << "██";

color(34); gotoxy(18, 12); cout << "██"; gotoxy(19, 12); cout << "██"; gotoxy(20, 12); cout << "██"; gotoxy(21, 12); cout << "██"; gotoxy(22, 12); cout << "██"; gotoxy(23, 12); cout << "██"; gotoxy(24, 12); cout << "██"; gotoxy(25, 12); cout << "██"; gotoxy(26, 12); cout << "██"; gotoxy(27, 12); cout << "██"; gotoxy(28, 12); cout << "██"; gotoxy(29, 12); cout << "██";
color(31); gotoxy(16, 12); cout << "██"; gotoxy(17, 12); cout << "██"; gotoxy(30, 12); cout << "██"; gotoxy(31, 12); cout << "██";

color(34); gotoxy(18, 13); cout << "██"; gotoxy(19, 13); cout << "██"; gotoxy(20, 13); cout << "██"; gotoxy(21, 13); cout << "██"; gotoxy(22, 13); cout << "██"; gotoxy(23, 13); cout << "██"; gotoxy(24, 13); cout << "██"; gotoxy(25, 13); cout << "██"; gotoxy(26, 13); cout << "██"; gotoxy(27, 13); cout << "██"; gotoxy(28, 13); cout << "██"; gotoxy(29, 13); cout << "██";
color(31); gotoxy(16, 13); cout << "██"; gotoxy(17, 13); cout << "██"; gotoxy(30, 13); cout << "██"; gotoxy(31, 13); cout << "██";

color(31); gotoxy(16, 14); cout << "██"; gotoxy(17, 14); cout << "██"; gotoxy(24, 14); cout << "██"; gotoxy(25, 14); cout << "██"; gotoxy(30, 14); cout << "██"; gotoxy(31, 14); cout << "██";
color(34); gotoxy(18, 14); cout << "██"; gotoxy(19, 14); cout << "██"; gotoxy(20, 14); cout << "██"; gotoxy(21, 14); cout << "██"; gotoxy(22, 14); cout << "██"; gotoxy(23, 14); cout << "██"; gotoxy(26, 14); cout << "██"; gotoxy(27, 14); cout << "██"; gotoxy(28, 14); cout << "██"; gotoxy(29, 14); cout << "██";

color(31); gotoxy(18, 15); cout << "██"; gotoxy(19, 15); cout << "██"; gotoxy(24, 15); cout << "██"; gotoxy(25, 15); cout << "██"; gotoxy(28, 15); cout << "██"; gotoxy(29, 15); cout << "██";
color(34); gotoxy(20, 15); cout << "██"; gotoxy(21, 15); cout << "██"; gotoxy(22, 15); cout << "██"; gotoxy(23, 15); cout << "██"; gotoxy(26, 15); cout << "██"; gotoxy(27, 15); cout << "██";

color(31); gotoxy(20, 16); cout << "██"; gotoxy(21, 16); cout << "██"; gotoxy(28, 16); cout << "██"; gotoxy(29, 16); cout << "██";
color(33); gotoxy(22, 16); cout << "██"; gotoxy(23, 16); cout << "██"; gotoxy(24, 16); cout << "██"; gotoxy(25, 16); cout << "██";
color (94); 
cout << endl;

}

