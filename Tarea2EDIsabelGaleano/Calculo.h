#pragma once
#ifndef CALCULO_H
#define CALCULO_H
class Calculo
{
public:
	Calculo(int num[]);
	int calcularMayor();
	int calcularMenor();
	double calcularPromedio();
	int * getNumeros();
	void setNumeros(int num[]);
private:
	int *numeros;
};


#endif