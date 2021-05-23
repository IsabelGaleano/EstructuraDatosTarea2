#include "Controller.h"
#include <iostream>
#include "Calculo.h"
#include "Controller.h"
#include "Gestor.h"
using namespace std;

int* numeros;
int cantidadNumeros;
Gestor gestor;
Controller::Controller() {

}

void Controller::imprimirMenu() {
    cout << "\n----Menu del programa----\n";
    cout << "\n 1: Inicializar programa \n";
    cout << "\n 2: Obtener el numero mayor \n";
    cout << "\n 3: Obtener el numero menor \n";
    cout << "\n 4: Obtener el promedio \n";
    cout << "\n 5: Salir del programa \n";
}


int Controller::leerOpcion() {
    int opcion;
    cout << "Selecciona una opcion: "; cin >> opcion;
    return opcion;

}

void Controller::inicializar() {
    int num;
    cout << "\nInicializar programa\n";
    cout << "Digite la cantidad de numeros: "; cin >> cantidadNumeros;
    numeros = new int[cantidadNumeros];
    //int size = sizeof(numeros) /sizeof(*numeros);
    //int size = *(&numeros + 1) - numeros;
    for (int i = 0; i < cantidadNumeros; i++)
    {
        cout << "\nIngrese el numero: \n"; cin >> num;
        numeros[i] = num;
     
    }

    //cout << size;
}


void Controller::calcularMayor() {
    int mayor;
    mayor = gestor.getMayor(numeros, cantidadNumeros);
    cout << "El numero mayor es: " << mayor;

}

void Controller::calcularMenor() {
    int menor;
    menor = gestor.getMenor(numeros, cantidadNumeros);
    cout << "El numero menor es: " << menor;
}

void Controller::calcularPromedio() {

    double promedio;
    promedio = gestor.getPromedio(numeros, cantidadNumeros);
    cout << "El promedio es: " << promedio;
}

bool Controller::ejecutarOpcion(int opcion) {
    bool salir = false;

    switch (opcion) {
    case 1:
        inicializar();
        break;
    case 2:
        calcularMayor();
        break;
    case 3:
        calcularMenor();
        break;
    case 4:
        calcularPromedio();
        break;
    case 5:
        salir = true;

    default:
        cout << "Fin del programa";
        break;
    }

    return salir;
}