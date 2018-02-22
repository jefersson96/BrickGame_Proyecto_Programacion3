#include"Enemigo.h"
#include "Carro.h"
#include<iostream>
#include<stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <conio.h>
void Enemigo::gotoxy(int x, int y) {


	HANDLE hCon;
	COORD dwPos;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);


}

void Enemigo::pintar() {
	//gotoxy(x, y); printf("%c", 184);
	
	if (y < 28) {
		gotoxy(x, y+1); printf("  %c  ", 79);
		gotoxy(x, y + 2); printf("%c%c%c%c%c ",79, 79, 79,79,79);
		gotoxy(x, y + 3); printf( " %c%c%c ",79,79, 79);
		gotoxy(x, y + 4); printf(" %c%c%c ", 79,79, 79);
		gotoxy(x, y + 5); printf("%c%c%c%c%c ", 79, 79, 79, 79, 79);
		
		//gotoxy(x, y + 5); printf("%c%c %c%c", 30, 190, 190, 30);
	}
}
void Enemigo::borrarEn2() {


	gotoxy(x, y+1); printf("     ");
	gotoxy(x, y+2); printf("     ");
	gotoxy(x, y+3); printf("     ");
	gotoxy(x, y+4); printf("     ");
	gotoxy(x, y+5); printf("     ");
	gotoxy(x, y+6); printf("     ");

}
void Enemigo::borrarEn() {
	gotoxy(x, y); printf("    ");
	gotoxy(x, y); printf("    ");
	gotoxy(x, y); printf("    ");
	gotoxy(x, y); printf("     ");
	gotoxy(x, y); printf("     ");
	gotoxy(x, y); printf("     ");

}

void Enemigo::choque(class Carro &n) {
	if (x >= n.getX()-2 &&  x < n.getX() + 7 &&  y>=n.getY()-2 && y<=n.getY()+7) 
	{
		
		n.v();
n.Dibuja_Carro();
n.Borrar_Carro();
		n.PreChoque();
		borrarEn2();
		n.Vidas();

		x = rand() % 71 + 4;
		y = 4;
		
	}

}
void Enemigo::mover() {
	gotoxy(x, y++); printf(" ");
	

	if (y > 32) {
	
		this->x = rand() % 68+4;
		this->y = 4;


	
	}

	pintar();


}