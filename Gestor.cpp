#include <iostream>
#include "Calculo.h"
#include "Gestor.h"
using namespace std;

int Gestor::getMayor(int numeros[]) {
	double mayor;
	Calculo calculo;
	calculo.setNumeros(numeros);
	mayor = calculo.calcularMayor();
	return mayor;
}

int Gestor::getMenor(int numeros[]) {
	double menor;
	Calculo calculo;
	calculo.setNumeros(numeros);
	menor = calculo.calcularMenor();
	return menor;
}

double Gestor::getPromedio(int numeros[]) {
	double promedio;
	Calculo calculo;
	calculo.setNumeros(numeros);
	promedio = calculo.calcularPromedio();
	return promedio;
}
