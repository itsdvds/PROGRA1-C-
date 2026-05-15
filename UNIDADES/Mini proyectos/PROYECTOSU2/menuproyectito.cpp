#include <iostream>

using namespace std;

int main () {

    bool decision = true;
    string eleccion;

    cout << "Bienvenido" << endl;

    while (decision == true) {

    char opcion;

    cout << "Que quieres calcular?" << endl;

    cout << "Factorial coloque F " << endl;

    cout << "Calculadora de temperaturas coloque G" << endl;

    cout << "Kilometros a Millas coloque D" << endl;

    cout << "Identificador de caracteres coloque C" << endl;

    cout << "Calculadora del total de compra de boletos coloque B" << endl;

    cout << "Ingrese su opcion: ";
    cin >> opcion;

    switch (opcion) {
        
        case 'F':
        case 'f': {

            int i, numero, factorial = 1;

            cout << "Calcular el factorial de un numero" << endl;

            cout << "Coloque el numero del cual quiere calcular el factorial: ";
            cin >> numero;

            for (int i = 1; i <= numero; i++)
            {
                 factorial = factorial * i;
            }

            cout << factorial << endl;
            break;
        }

        case 'G':
        case 'g': {

            char elecciongrados;

            cout << "Quieres convertir de F a C o de C a F? " << endl;
            cout << "Para calcular Celsius ingrese C" << endl;
            cout << "Para calcular Farenheit ingrese F" << endl;

            cout << "Ingrese su respuesta: ";
            cin >> elecciongrados;

            switch (elecciongrados) {

            case 'F':
            case 'f': {

            double grados, resultadogrados;

            cout << "Convertir grados Celsius a Farenheit" << endl;
            cout << "Ingrese sus grados Celsius: ";
            cin >> grados;

            resultadogrados = ((grados * 9/5) + 32);

            cout << "El resultado de la conversion es " << resultadogrados << " grados Farenheit" << endl;
            break;
        
            }

            case 'C':
            case 'c': {

            double grados, resultadogrados;

            cout << "Convertir grados Farenheit a Celsius" << endl;
            cout << "Ingrese sus grados Farenheit: ";
            cin >> grados;

            resultadogrados = ((grados - 32) * 5/9);

            cout << "El resultado de la conversion es " << resultadogrados << " grados Celsius " << endl;
            break;

            }
        }

        break;
    }

        case 'D':
        case 'd': {

            char elecciondistacia;

            cout << "Quieres convertir de K a M o de M a K? " << endl;
            cout << "Para calcular Millas ingrese M" << endl;
            cout << "Para calcular Kilometros ingrese K" << endl;

            cout << "Ingrese su respuesta: ";
            cin >> elecciondistacia;

            switch (elecciondistacia) {

            case 'K':
            case 'k': {

            double kilometros, millas;

            cout << "Convertir Millas a Kilometros" << endl;

            cout << "Ingrese sus Millas: ";
            cin >> millas;

            kilometros = millas * 1.60934;

            cout << "El resultado de la conversion es " << kilometros << " Kilometros" << endl;
            break;

                }

            case 'M':
            case 'm': {

            double kilometros, millas;

            cout << "Convertir Kilometros a Millas" << endl;

            cout << "Ingrese sus Kilometros: ";
            cin >> kilometros;

            millas = kilometros * 0.621371;

            cout << "El resultado de la conversion es " << millas << " Millas" << endl;
            break;

                }
            }

            break;
        }

        case 'C':
        case 'c': {

            char caracter;

            cout << "Identificador de caracteres" << endl;

            cout << "Ingrese su caractér: ";
            cin >> caracter;

            if ((caracter == 'a' || caracter == 'A') || (caracter == 'e' || caracter == 'E') || (caracter == 'i' || caracter == 'I') || (caracter == 'o' || caracter == 'O') || (caracter == 'u' || caracter == 'U')) {

                cout << "Su caractér es una vocal" << endl;

            }
            else if ((caracter == 'b' || caracter == 'B' ) || (caracter == 'c' || caracter == 'C' ) || (caracter == 'd' || caracter == 'D' ) || (caracter == 'f' || caracter == 'F' ) || (caracter == 'g' || caracter == 'G' ) || (caracter == 'h' || caracter == 'H' ) || (caracter == 'i' || caracter == 'I' ) || (caracter == 'j' || caracter == 'J' ) || (caracter == 'k' || caracter == 'K' ) || (caracter == 'l' || caracter == 'L' ) || (caracter == 'm' || caracter == 'M' ) || (caracter == 'n' || caracter == 'N' ) || (caracter == 'p' || caracter == 'P' ) || (caracter == 'q' || caracter == 'Q' ) || (caracter == 'r' || caracter == 'R' ) || (caracter == 's' || caracter == 'S' ) || (caracter == 't' || caracter == 'T' ) || (caracter == 'v' || caracter == 'V' ) || (caracter == 'w' || caracter == 'W' ) || (caracter == 'x' || caracter == 'X' ) || (caracter == 'y' || caracter == 'Y' ) || (caracter == 'z' || caracter == 'Z' )) {

                cout << "Su caractér es una consonante" << endl;
            }
            else if (isdigit(caracter)) {

                cout << "Su caractér es un dígito" << endl;

            }
            else {

                cout << "Su caractér es un símbolo especial" << endl;
            }
            break;
        }

        case 'B':
        case 'b': {

            int total, cantidadgeneral, cantidadvip, cantidadtribuna, cantidadbutaca;

            cout << "Calcular el total a pagar para ir al estadio Mario Camposeco" << endl;

            cout << "Precio de la entrada general: Q50" << endl;
            cout << "Precio de la entrada VIP: Q150" << endl;
            cout << "Precio de la entrada tribuna: Q75" << endl;
            cout << "Precio de la butaca general: Q100" << endl;

            cout << "Cuantas entradas generales quieres?: ";
            cin >> cantidadgeneral;

            cout << "Cuantas entradas VIP quieres?: ";
            cin >> cantidadvip;

            cout << "Cuantas entradas de tribuna quieres?: ";
            cin >> cantidadtribuna;

            cout << "Cuantas entradas de butaca general quieres?: ";
            cin >> cantidadbutaca;

            total = ((cantidadgeneral * 50) + (cantidadvip * 150) + (cantidadtribuna * 75) + (cantidadbutaca * 100));

            cout << "Tu total a pagar por tu/s entrada/s son Q" << total << endl;
            break;
        }

        default: {

        cout << "Opcion invalida" << endl;
        break;
        }
      }

    cout << "Quieres elegir otra opcion?" << endl;
    cout << "Ingrese su respuesta: ";
    cin >> eleccion; 

    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << " " << endl;

    if (eleccion == "No" || eleccion == "NO" || eleccion == "no") {
        
        decision = false;
    
    }
  }

    cout << "Gracias por utilizar" << endl;

}