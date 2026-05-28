#include <iostream>
#include <random> 

using namespace std;

int main() {
     
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 20);

    int numero_aleatorio = dist(gen);
    cout << "El numero generado es: " << numero_aleatorio;
}