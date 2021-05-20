
#include <iostream>
#include "Calculo.h"
#include "Gestor.h"
using namespace std;

int Gestor::getMayor(int numeros[]){
	double mayor;
	Calculo calculo = new Calculo(numeros);
	mayor = calculo.calcularMayor();
	return mayor;
}

int Gestor::getMenor(int numeros[]) {
	double menor;
	Calculo calculo = new Calculo(numeros);
	menor = calculo.calcularMenor();
	return menor;
}

double Gestor::getPromedio(int numeros[]) {
	double promedio;
	Calculo calculo = new Calculo(numeros);
	promedio = calculo.calcularPromedio();
	return promedio;
}

