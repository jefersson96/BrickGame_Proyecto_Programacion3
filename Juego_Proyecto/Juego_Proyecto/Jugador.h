#pragma once

#include<iostream>
#include <string>
using namespace std;
class Jugador {
public:
	Jugador();
	Jugador(string,int,int,int);

	void Imprimir();
	string getNombre();
	int getPuntos();
	int getVelocidad();
	int getNivel();

	void setNombre(string);
	void setPuntos(int);
	void setVelocidad(int);
	void setNivel(int);


private:
	int Puntos;
	string nombre;
	int velocidad;
	int Nivel;









};
