#pragma once
class CMarcador
{

public:

	CMarcador();
	~CMarcador();

	bool punto(char Team);
	void imprimir();
	bool ventaja_A = false;
	bool ventaja_B = false;
	int Equipo_A[3] = { 0,0,0 };
	int Equipo_B[3] = { 0,0,0 };


};

