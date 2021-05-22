#pragma once
#ifndef CONTROLLER_H
#define CONTROLLER_H

class Controller
{

public:
	Controller();
	void imprimirMenu();
	int leerOpcion();
	bool ejecutarOpcion(int opcion);
	void calcularMayor();
	void calcularMenor();
	void calcularPromedio();
	void inicializar();


};

#endif

