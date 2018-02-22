#pragma once
class Enemigo {

	int x, y;
public:
	Enemigo(int _x, int _y) :x(_x), y(_y) {}
	void pintar();
	void mover();
	void gotoxy(int, int);
	void borrarEn();
	void choque(class Carro &n);
	void borrarEn2();

};

