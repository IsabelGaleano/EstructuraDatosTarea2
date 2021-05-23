#pragma once
#ifndef CALCULO_H
#define CALCULO_H
class Calculo
{
public:
	Calculo();
	Calculo(int num[]);
	int calcularMayor();
	int calcularMenor();
	double calcularPromedio();
	int* getNumeros();
	void setNumeros(int num[]);
	void setCantidadNumeros(int cantidadNumeros);
private:
	int* numeros;
	int cantidadNumeros;
};


#endif




