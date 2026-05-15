#include <iostream>

using namespace std;

int main () {

    string objetivo, tareas, pendientes;
    float dinero;

    cout << "Coloca cual de estos es tu objetivo para semana santa?" << endl;
    cout << "Viajar, Dormir, Estudiar, Ninguna o No sabes?" << endl;
    cout << "Si vas a viajar la cantidad minima de dinero para suplir tus gastos en semana santa es de Q650" << endl;
    cout << "Y lo recomendable es Q750" << endl;
    cout << "Coloque su respuesta: ";
    cin >> objetivo;
    
    cout << "Tienes tareas pendientes?: ";
    cin >> tareas;
    cout << "Tienes pendientes como cuidar a un familiar o limpiar?: ";
    cin >> pendientes;
    cout << "Cuanto dinero tienes?: ";
    cin >> dinero;

    // Dormir

    if (objetivo == "Dormir" || objetivo == "DORMIR" || objetivo == "dormir") {
        if ((tareas == "No" || tareas == "NO" || tareas == "no") && (pendientes == "No" || pendientes == "NO" || pendientes == "no")) {
        cout << "Puedes dormir tranquilo" << endl;
        cout << "Felicidades compliste tu objetivo" << endl;
        }
        else if ((tareas == "Si" || tareas == "SI" || tareas == "si") && (pendientes == "Si" || pendientes == "SI" || pendientes == "si")) {
            cout << "No puedes dormir hasta terminar tus tareas y pendientes" << endl;
        }
        else if ((tareas == "No" || tareas == "NO" || tareas == "no") && (pendientes == "Si" || pendientes == "SI" || pendientes == "si")){
            cout << "No puedes dormir hasta que termines tus pendientes" << endl;
        }
        else if ((tareas == "Si" || tareas == "SI" || tareas == "si") && (pendientes == "No" || pendientes == "NO" || pendientes == "no")) {
            cout <<  "No puedes dormir hasta terminar tus tareas" << endl;
        }
        else {
            cout << "Opcion no valida" << endl;
        }
    }

    // Viajar

    if (objetivo == "Viajar" || objetivo == "VIAJAR" || objetivo == "viajar") {

        if ((tareas == "No" || tareas == "NO" || tareas == "no") && (pendientes == "No" || pendientes == "NO" || pendientes == "no") && (dinero >= 650 && dinero < 750)) {
        cout << "Puedes viajar con el presupuesto minimo" << endl;
        cout << "Felicidades compliste tu objetivo" << endl;
        }
        else if ((tareas == "No" || tareas == "NO" || tareas == "no") && (pendientes == "No" || pendientes == "NO" || pendientes == "no") && (dinero >= 750)) {
        cout << "Puedes viajar tranquilo" << endl;
        cout << "Felicidades compliste tu objetivo" << endl;
        }
        else if ((tareas == "No" || tareas == "NO" || tareas == "no") && (pendientes == "No" || pendientes == "NO" || pendientes == "no" && dinero < 650)) {
            cout << "No puedes viajar no tienes el dinero suficiente" << endl;
        }
        else if ((tareas == "Si" || tareas == "SI" || tareas == "si") && (pendientes == "Si" || pendientes == "SI" || pendientes == "si")) {
            cout << "No puedes Viajar hasta terminar tus tareas y pendientes" << endl;
        }
        else if ((tareas == "No" || tareas == "NO" || tareas == "no") && (pendientes == "Si" || pendientes == "SI" || pendientes == "si")){
            cout << "No puedes viajar hasta que termines tus pendientes" << endl;
        }
        else if ((tareas == "Si" || tareas == "SI" || tareas == "si") && (pendientes == "No" || pendientes == "NO" || pendientes == "no")) {
            cout <<  "No puedes viajar hasta terminar tus tareas" << endl;
        }
        else {
            cout << "Opcion no valida" << endl;
        }
    }

    // Estudiar 

    if (objetivo == "Estudiar" || objetivo == "ESTUDIAR" || objetivo == "estudiar") {
        if ((tareas == "No" || tareas == "NO" || tareas == "no") && (pendientes == "No" || pendientes == "NO" || pendientes == "no")) {
        cout << "Puedes buscar ejercicios para estudiar" << endl;
        cout << "Felicidades compliste tu objetivo" << endl;
        }
        else if ((tareas == "Si" || tareas == "SI" || tareas == "si") && (pendientes == "Si" || pendientes == "SI" || pendientes == "si")) {
            cout << "Puedes estudiar haciendo tus tareas despues de hacer tus pendientes" << endl;
        }
        else if ((tareas == "No" || tareas == "NO" || tareas == "no") && (pendientes == "Si" || pendientes == "SI" || pendientes == "si")){
            cout << "Puedes buscar ejercicios para estudiar despues de hacer tus pendientes" << endl;
        }
        else if ((tareas == "Si" || tareas == "SI" || tareas == "si") && (pendientes == "No" || pendientes == "NO" || pendientes == "no")) {
            cout <<  "Puedes estudiar con tus tareas" << endl;
            cout << "Felicidades compliste tu objetivo" << endl;
        }
        else {
            cout << "Opcion no valida" << endl;
        }
    }

    //  Ninguna

    if (objetivo == "Ninguna" || objetivo == "NINGUNA" || objetivo == "ninguna") {
        cout << "No quieres hacer ninguna de estas cosas para vacaciones asi que no afectan tus tareas, pendientes y dinero" << endl;
    } 

    // No lo sabe
    if (objetivo == "Nose" || objetivo == "NOSE" || objetivo == "nose") {
        cout << "No sabes que hacer para semana santa" << endl;
    }
}