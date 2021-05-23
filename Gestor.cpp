#include <iostream>
#include "Calculo.h"
#include "Gestor.h"
using namespace std;

int Gestor::getMayor(int numeros[], int cantidadNumeros) {
	double mayor;
	Calculo calculo;
	calculo.setCantidadNumeros(cantidadNumeros);
	calculo.setNumeros(numeros);
	mayor = calculo.calcularMayor();
	return mayor;
}

int Gestor::getMenor(int numeros[], int cantidadNumeros) {
	double menor;
	Calculo calculo;
	calculo.setCantidadNumeros(cantidadNumeros);
	calculo.setNumeros(numeros);
	menor = calculo.calcularMenor();
	return menor;
}

double Gestor::getPromedio(int numeros[], int cantidadNumeros) {
	double promedio;
	Calculo calculo;
	calculo.setCantidadNumeros(cantidadNumeros);
	calculo.setNumeros(numeros);
	promedio = calculo.calcularPromedio();
	return promedio;
}
