#include <iostream>

using namespace std;

int main() {

    // Variable entera 
    int numeromayora10 = 20;
    
    cout << "El numero mayor a 10 es: " << numeromayora10 << endl;

    // Variable flotante
    float tortrixchicharron = 1.50;

    cout << "El tortrix de chicharron cuesta: " << "Q" << tortrixchicharron << endl;

    // Variable boolanea 
     bool megustanlosjuegos = true;  



    cout << "Soy bueno en los videojuegos?: " << megustanlosjuegos << endl;

    // Variable cadena
    string word1 = "Buenos";

    string word2 = "días";

    string word3 = "amiguitos,";

    string word4 = "la";

    string word5 = "tierra";

    string word6 = "les";

    string word7 = "dice";

    string word8 = "hola";

    cout << word1 << " " << word2 << " " << word3 << " " << word4 << " " << word5 << " " << word6 << " " << word7 << " " << word8 << endl; 

    // Calculadora de restas ya que mi carnee es impar

    bool numero1, numero2;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    bool resultado = numero1 - numero2;

    cout << "El resultado de la resta es: " << resultado << endl;

    cout << "Gracias por utilizar" << endl;

    int reps;
    cout << "Ingresar numero: " << endl;
    cin >> reps;

    for(int i=1;i<=10;i++){
        std::cout<<i<<std::endl;
    }
}