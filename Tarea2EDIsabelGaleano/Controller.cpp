
#include <iostream>
#include "Calculo.h"
#include "Controller.h"
#include "Gestor.h"
using namespace std;

int *numeros;
const Gestor gestor;

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
    int cantidad;
    int num;
    cout << "\nInicializar programa\n";
    cout << "Digite la cantidad de numeros: "; cin >> cantidad;
    numeros = new int[cantidad];

    for (int i = 0; i < sizeof(numeros); i++)
    {
        cout << "\nIngrese el numero " << numeros[i] << ": \n"; cin >> num;
        numeros[i] = num;
    }
}


void Controller::calcularMayor() {

    int mayor;
    mayor = gestor.getMayor(numeros);
    cout << "El numero mayor es: " << mayor;

}

void Controller::calcularMenor() {
    int menor;
    menor = gestor.getMenor(numeros);
    cout << "El numero menor es: " << menor;
}

void Controller::calcularPromedio() {

    double promedio;
    promedio = gestor.getPromedio(numeros);
    cout << "El promedio es: " << menor;
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



void Controller::start()
{
    bool salir = false;
    do
    {
        imprimirMenu();
        int opcion = leerOpcion();
        salir = ejecutarOpcion(opcion);

    } while (!salir);

}


