#include "Calculo.h"

Calculo::Calculo() {

}

Calculo::Calculo(int num[]) {
	numeros = num;
}

int* Calculo::getNumeros() {
	return numeros;
}

void Calculo::setNumeros(int num[]) {
	numeros = num;
}

int Calculo::calcularMayor() {
	int mayor = numeros[0];
	for (int i = 0; i < (sizeof(numeros) / sizeof(*numeros)); i++)
	{
		if (numeros[i] > mayor) {
			mayor = numeros[i];
		}
	}

	return mayor;
}



int Calculo::calcularMenor() {
	int menor = numeros[0];
	for (int i = 0; i < (sizeof(numeros) / sizeof(*numeros)); i++)
	{
		if (numeros[i] < menor) {
			menor = numeros[i];
		}
	}

	return menor;
}

double Calculo::calcularPromedio() {
	double suma = 0.0;

	for (int i = 0; i < (sizeof(numeros) / sizeof(*numeros)); i++)
	{
		suma += numeros[i];
	}

	return suma / sizeof(numeros);
}
