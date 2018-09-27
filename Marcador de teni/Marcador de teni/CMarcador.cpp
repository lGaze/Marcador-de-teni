#include "pch.h"
#include "CMarcador.h"
#include <iostream>

using namespace std;

CMarcador::CMarcador()
{}


CMarcador::~CMarcador()
{}

bool CMarcador::punto(char Team)
{
	int puntaje_juego = 1;
	int puntaje_normal = 15;
	int puntaje_avanzado = 10;

	if (Team == 'A' || Team == 'a')
	{
		if (Equipo_A[2] < 30)
		{
			Equipo_A[2] += puntaje_normal;
		}
		else if (Equipo_A[2] == 30)
		{
			Equipo_A[2] += puntaje_avanzado;
		}
		else if (Equipo_A[2] == 40 && !ventaja_A)
		{
			ventaja_A = true;
			cout << "El equipo A tiene la venaja" << endl;
			system("pause");
		}
		else if (ventaja_A)
		{
			if (ventaja_A && ventaja_B)
			{
				ventaja_A = false;
				ventaja_B = false;
				cout << "Se iguala el marcador" << endl;
				system("pause");
			}
			else
			{
				Equipo_A[1] += puntaje_juego;
				Equipo_A[2] = 0;
				Equipo_B[2] = 0;
				ventaja_A = false;
			}

			if (Equipo_A[1] == 6)
			{
				Equipo_A[0] += puntaje_juego;
				Equipo_A[1] = 0;
			}
		}
	}
	else if (Team == 'B' || Team == 'b')
	{
		if (Equipo_B[2] < 30)
		{
			Equipo_B[2] += puntaje_normal;
		}
		else if (Equipo_B[2] == 30)
		{
			Equipo_B[2] += puntaje_avanzado;
		}
		else if (Equipo_B[2] == 40 && !ventaja_B)
		{
			ventaja_B = true;
			cout << "El equipo B tiene la venaja" << endl;
			system("pause");
		}
		else if (ventaja_B)
		{

			if (ventaja_B && ventaja_A)
			{
				ventaja_A = false;
				ventaja_B = false;
				cout << "Se iguala el marcador" << endl;
				system("pause");
			}
			else
			{
				Equipo_B[1] += puntaje_juego;
				Equipo_B[2] = 0;
				Equipo_A[2] = 0;
				ventaja_B = false;
			}

			if (Equipo_B[1] == 6)
			{
				Equipo_B[0] += puntaje_juego;
				Equipo_B[1] = 0;
			}
		}
	}
	else if (Team == 'E' || Team == 'e')
	{
		return false;
	}
	return true;
}


void CMarcador::imprimir()
{
	cout << " Equipos " << " SET " << " JUEGO " << " SCORE " << endl;
	cout << "Equipo A " << " " << " " << Equipo_A[0] << " " << " " << " " << " " << " " << Equipo_A[1] << " " << " " << " " << " " << " " << " " << " " << Equipo_A[2] << endl;
	cout << "Equipo B " << " " << " " << Equipo_B[0] << " " << " " << " " << " " << " " << Equipo_B[1] << " " << " " << " " << " " << " " << " " << " " << Equipo_B[2] << endl;
}
