#include <iostream>
#include <string>

using namespace std;

// Estructura para agrupar los datos de cada equipo
struct Equipo {
    string nombre;
    int puntos = 0;
    int golesFavor = 0;
    int golesContra = 0;
};

// Prototipos de funciones
void registrarEquipos(Equipo equipos[], int cant);
void jugarTorneo(Equipo equipos[], int cant);
void ordenarTabla(Equipo equipos[], int cant);
void mostrarTabla(Equipo equipos[], int cant);

int main() {
    int cant = 0;
    
    cout << "SISTEMA DE GESTION DE TORNEOS UMES" << endl;
    
    // Validacion de cantidad de equipos [cite: 12]
    do {
        cout << "Ingrese cantidad de equipos (4, 8 o 16): ";
        cin >> cant;
    } while (cant != 4 && cant != 8 && cant != 16);

    Equipo lista[16]; // Arreglo de estructuras 

    registrarEquipos(lista, cant);
    jugarTorneo(lista, cant);
    ordenarTabla(lista, cant);
    mostrarTabla(lista, cant);

    return 0;
}

void registrarEquipos(Equipo equipos[], int cant) {
    for (int i = 0; i < cant; i++) {
        bool repetido;
        do {
            repetido = false;
            cout << "Ingrese nombre del equipo " << i + 1 << ": ";
            cin >> equipos[i].nombre;

            // Validar duplicados [cite: 13]
            for (int j = 0; j < i; j++) {
                if (equipos[i].nombre == equipos[j].nombre) {
                    cout << "Error: El nombre ya existe." << endl;
                    repetido = true;
                }
            }
        } while (repetido);
    }
}

void jugarTorneo(Equipo equipos[], int cant) {
    cout << "\n INICIO DEL TORNEO (FORMATO SUIZO) " << endl;
    for (int i = 0; i < cant; i++) {
        for (int j = i + 1; j < cant; j++) {
            int g1, g2;
            cout << "\nPartido: " << equipos[i].nombre << " vs " << equipos[j].nombre << endl;
            cout << "Goles de " << equipos[i].nombre << ": "; cin >> g1;
            cout << "Goles de " << equipos[j].nombre << ": "; cin >> g2;

            // Actualizar goles 
            equipos[i].golesFavor += g1;
            equipos[i].golesContra += g2;
            equipos[j].golesFavor += g2;
            equipos[j].golesContra += g1;

            // Asignar puntos por resultado [cite: 18, 19]
            if (g1 > g2) {
                equipos[i].puntos += 3;
            } else if (g2 > g1) {
                equipos[j].puntos += 3;
            } else {
                equipos[i].puntos += 1;
                equipos[j].puntos += 1;
            }
        }
    }
}

void ordenarTabla(Equipo equipos[], int cant) {
    // Bubble Sort con triple criterio de desempate 
    for (int i = 0; i < cant - 1; i++) {
        for (int j = 0; j < cant - i - 1; j++) {
            bool intercambiar = false;

            // 1. Criterio: Puntos
            if (equipos[j].puntos < equipos[j + 1].puntos) {
                intercambiar = true;
            } 
            // 2. Criterio: Goles a Favor
            else if (equipos[j].puntos == equipos[j + 1].puntos) {
                if (equipos[j].golesFavor < equipos[j + 1].golesFavor) {
                    intercambiar = true;
                } 
                // 3. Criterio: Goles en Contra
                else if (equipos[j].golesFavor == equipos[j + 1].golesFavor) {
                    if (equipos[j].golesContra > equipos[j + 1].golesContra) {
                        intercambiar = true;
                    }
                }
            }

            if (intercambiar) {
                Equipo temp = equipos[j];
                equipos[j] = equipos[j + 1];
                equipos[j + 1] = temp;
            }
        }
    }
}

void mostrarTabla(Equipo equipos[], int cant) {
    cout << "\n TABLA FINAL DE POSICIONES " << endl;
    cout << "Pos\tEquipo\tPTS\tGF\tGC" << endl;
    for (int i = 0; i < cant; i++) {
        cout << i + 1 << "\t" << equipos[i].nombre << "\t" 
             << equipos[i].puntos << "\t" << equipos[i].golesFavor 
             << "\t" << equipos[i].golesContra << endl;
    }

    // Sugerencia de desempate para 1ero y 2do lugar 
    if (equipos[0].puntos == equipos[1].puntos && 
        equipos[0].golesFavor == equipos[1].golesFavor && 
        equipos[0].golesContra == equipos[1].golesContra) {
        cout << "\n*** EMPATE ABSOLUTO DETECTADO ***" << endl;
        cout << "Se sugiere un partido de desempate entre " 
             << equipos[0].nombre << " y " << equipos[1].nombre << " para definir al campeon." << endl;
    }
}