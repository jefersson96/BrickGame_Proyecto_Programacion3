#pragma once
class Carro {
public:
	Carro(int,int,int);
	void Dibuja_Carro();
	void Borrar_Carro();
	void Mover();
	void gotoxy(int, int);
	void OcultarCursor();
	void Limites();
	void Vidas();
	void Morir();
	int getX();
	int getY();
	void v();
	void PreChoque();
	void BorrarExplocion();
	int getVidas();
	void setPuntaje(int);
	int getPuntaje();

private:
	int vidas;
	int x;
	int y;
	int puntos;



};