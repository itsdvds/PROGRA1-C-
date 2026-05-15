#include <iostream>

using namespace std;

int main() {

 // Segundo ejercicio

    int nota, puntosextra;
    
    int notaminima = 61;
    int notaexcelente = 90;
    int notarecomendada = 70;

    cout << "Ver si aprobaste y que tan buena nota tienes" << endl;
    cout << "La nota minima es de 61 y aplicas a plan de mejoramiento " << endl;

    cout << "Ingresa tu nota: ";
    cin >> nota;

    cout << "Ingrese tus puntos extra extra: ";
    cin >> puntosextra;

    if (nota >= notarecomendada && nota + puntosextra < notaexcelente && nota < notaexcelente) {
        cout << "Pasaste el curso con la nota recomendada" << endl;
    }
    else if (nota >= notaexcelente || nota + puntosextra >= notaexcelente) {
        cout << "Pasaste el curso con una nota excelente" << endl;
    }
    else if (nota + puntosextra == notarecomendada) {
        cout << "Pasaste con la nota recomendada gracias a los puntos extra" << endl;
    }
    else if (nota >= 60 && nota < 70 ) {
        cout << "Aplicas a plan de mejoramiento" << endl;
    }
    else {
        cout << "Reprobaste el curso definitivamente" << endl;
    }
 }