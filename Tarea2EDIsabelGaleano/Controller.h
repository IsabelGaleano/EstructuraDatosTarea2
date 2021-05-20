#pragma once
#ifndef CONTROLLER_H
#define CONTROLLER_H

class Controller
{

public:
	void start();
	void imprimirMenu();
	int leerOpcion();
	bool ejecutarOpcion(int opcion);
	void calcularMayor();
	void calcularMenor();
	void calcularPromedio();
	void inicializar();


};

#endif


