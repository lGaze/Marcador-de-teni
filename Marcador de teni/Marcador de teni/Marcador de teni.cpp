// Marcador de teni.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "CMarcador.h"



int main()
{
	CMarcador a;
	char b;
	b = '1';

	while (a.punto(b))
	{
		a.imprimir();
		b=getchar();
		system("cls");
	}

	std::cout << "Saliste del juego" << std::endl;
	getchar();
}

