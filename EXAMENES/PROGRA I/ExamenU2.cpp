#include <iostream>

using namespace std;

int main () {

    // Mostrar tabla de multiplicar de un numero

    int numero, multiplicar;


    cout << "Bienvenido" << endl;

    cout << "Tabla de multiplicar de un numero" << endl;

    cout << "Ingresa un numero del 50 al 100: ";
    cin >> numero;

    if (numero >= 50 && numero <= 100) { 


        for (int i = 1; i <= 10; i++)
        {
            multiplicar = numero * i;
            cout << numero << " x " << i << " = " << multiplicar << endl;
        }
        
    }
    else {

        cout << "Tu numero no se encuentra dentro del rango especificado" << endl;
    }

    // repetir una frase por la cantidad de letras que tiene pero no cuenta espacios
    string frase;
    int largo;

    cout << "Ingrese su frase sin espacios: ";
    cin >> frase;

    largo = frase.length();

    for (int i = 1; i <= largo ; i++)
    {
        cout << frase << endl;
    }

    // Juego vocales o consonantes 
    bool respuesta = false;
    string decision, eleccion, vocal, consonante;

    cout << "Quieres jugar un juego?: ";
    cin >> decision;

    if (decision == "Si" || decision == "si" || decision == "SI") {
        respuesta = true;
    }

    while (respuesta == true)
    {
        cout << "Vocal o consonante?: " << endl;
        cin >> eleccion;

        if (eleccion == "vocal" || eleccion == "VOCAL" || eleccion == "Vocal") {

        cout << " A " << " E " << " I " << " O " << " U " << endl;

        cout << "Ingrese una vocal: ";
        cin >> vocal;

        if ((vocal == "A" || vocal == "a") || (vocal == "E" || vocal == "e") || (vocal == "I" || vocal == "i") || (vocal == "O" || vocal == "o") || (vocal == "U" || vocal == "u") ){
        
            respuesta = true; 

        }
        else if ((vocal != "A" || vocal != "a") || (vocal != "E" || vocal != "e") || (vocal != "I" || vocal != "i") || (vocal != "O" || vocal != "o") || (vocal != "U" || vocal != "u") ){
        
            respuesta = false; 

        }
        
        }
        if (eleccion == "consonante" || eleccion == "CONSONANTE" || eleccion == "Consonante"){

            cout << "B,C,D,F,G,H,J,K,L,M,N,P,Q,R,S,T,U,V,W,X,Y,Z" << endl;

            cout << "Ingrese una consonante: ";
            cin >> consonante;
            
            if ((consonante == "B" || consonante == "b") || (consonante == "C" || consonante == "c") || (consonante == "D" || consonante == "d") || (consonante == "F" || consonante == "f") || (consonante == "G" || consonante == "g") || (consonante == "H" || consonante == "h") || (consonante == "J" || consonante == "j") || (consonante == "K" || consonante == "k") || (consonante == "L" || consonante == "l") || (consonante == "M" || consonante == "m") || (consonante == "N" || consonante == "n") || (consonante == "P" || consonante == "p") || (consonante == "Q" || consonante == "q") || (consonante == "R" || consonante == "r") || (consonante == "S" || consonante == "s") || (consonante == "T" || consonante == "t") || (consonante == "V" || consonante == "v") || (consonante == "W" || consonante == "w") || (consonante == "X" || consonante == "x") || (consonante == "Y" || consonante == "y") || (consonante == "Z" || consonante == "z")) {

            respuesta = true;

        }
        else if ((consonante != "B" || consonante != "b") || (consonante != "C" || consonante != "c") || (consonante != "D" || consonante != "d") || (consonante != "F" || consonante != "f") || (consonante != "G" || consonante != "g") || (consonante != "H" || consonante != "h") || (consonante != "J" || consonante != "j") || (consonante != "K" || consonante != "k") || (consonante != "L" || consonante != "l") || (consonante != "M" || consonante != "m") || (consonante != "N" || consonante != "n") || (consonante != "P" || consonante != "p") || (consonante != "Q" || consonante != "q") || (consonante != "R" || consonante != "r") || (consonante != "S" || consonante != "s") || (consonante != "T" || consonante != "t") || (consonante != "V" || consonante != "v") || (consonante != "W" || consonante != "w") || (consonante != "X" || consonante != "x") || (consonante != "Y" || consonante != "y") || (consonante != "Z" || consonante != "z")) {

            respuesta = false;

        }
        }
    }

         cout << "fin del juego" << endl;

         cout << "Gracias por utilizar y calificar ingeniero :)" << endl;

}