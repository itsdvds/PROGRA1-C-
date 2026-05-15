#include <iostream>

using namespace std;

int main() {

    int semana;

    cout << "Elige el dia que quieres recordar sobre lo que hiciste en semana santa: " << endl;

    cout << "Para lunes ingresa 1" << endl;

    cout << "Para martes ingresa 2" << endl ;

    cout << "Para miercoles ingresa 3" << endl ;

    cout << "Para jueves ingresa 4" << endl ;

    cout << "Para viernes ingresa 5" << endl ;

    cout << "Ingresa tu eleccion: ";
    cin >> semana;

    switch (semana)
    {
    case 1: {
        cout << " " << endl;
        cout << "El lunes me quede durmiendo hasta la 1 de la tarde y me desperte a limpiar la casa" << endl;
        break;
    }
    case 2: {
        cout << " " << endl;
        cout << "El martes sali a comer con mi familia y fui al gym, me toco espalda" << endl;
        break;
    }
    case 3: {
        cout << " " << endl;
        cout << "El miercoles me quede jugando todo el dia, jugue con mi mejor amigo fornite y me desvele hasta las 4AM" << endl;
        break;
    }
    case 4: {
        cout << " " << endl;
        cout << "El jueves me levante temprano a hacer limpieza, luego me puse a jugar con mis amigos hasta las 3AM" << endl;
        break;
    }
    case 5: {
        cout << " " << endl;
        cout << "El viernes fui temprano a la iglesia, fui al cine a ver una pelicula con una chica y fui a comprar mi nuevo iPhone 16" << endl;
        break;
    }
    
    
    default: {
        cout << "No sabemos que dia quieres recordar" << endl;
        break;
    }
    
    }
    
    cout << " " << endl;
    cout << "Ya recordaste lo que hiciste en el dia que elegiste" << endl;
    cout << "Gracias por usar" << endl;
}