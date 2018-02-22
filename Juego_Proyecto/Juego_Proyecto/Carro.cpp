#include "Carro.h"
#include<iostream>
#include<stdio.h>
#include<windows.h>
#include <conio.h>
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

void Carro::Limites() {
	for (int i = 2; i < 78;i++) {
		gotoxy(i, 3); printf("%c", 205);
		gotoxy(i, 33); printf("%c", 205);
	
	
	}
	for (int x = 4; x < 33; x++) {
		gotoxy(2, x); printf("%c", 186);
		gotoxy(77, x); printf("%c", 186);
	}

	gotoxy(2, 3); printf("%c", 201);
	gotoxy(2, 33); printf("%c", 200);
	gotoxy(77, 3); printf("%c", 187);
	gotoxy(77, 33); printf("%c", 188);

}


Carro::Carro(int x,int y,int vidas) {
	this->x = x;
	this->y = y;
	this->vidas = vidas;
}
void Carro::Vidas() {
	if (vidas >=0) {
		gotoxy(64, 2); printf("VIDAS %d", vidas);
		gotoxy(68, 2); printf("");


	}
	else {
	
		this->vidas=4;
	}
}
int Carro::getPuntaje() {
	return this->puntos;

}
void Carro::setPuntaje(int p) {
	this->puntos = p;

}
int Carro::getVidas() {
	return this->vidas;

}
void Carro::Morir() {
	if (vidas == 0) {
	
		Borrar_Carro();
		gotoxy(x, y);   printf("    **    ");
		gotoxy(x, y+1); printf("  ******  ");
		gotoxy(x, y + 2); printf("  **  ");
		Sleep(600);
		Borrar_Carro();
		gotoxy(x, y);  printf(" * ** *");
		gotoxy(x, y+1);printf("   **  ");
		gotoxy(x, y+2);printf(" * **  *  ");
		Sleep(600);
		Borrar_Carro();
		gotoxy(x, y);printf(" * *       * *  ");
		gotoxy(x,y+1);printf("  * *   * *    ");
		gotoxy(x,y+2);printf("    * * *   ");
		gotoxy(x,y+3);printf("    * * *   ");
		gotoxy(x,y+4);printf("  * *   * *   ");
		gotoxy(x,y+5);printf(" * *      * *  ");
		Sleep(600);
		BorrarExplocion();
		Limites();
		Borrar_Carro();
		vidas--;
		Dibuja_Carro();
		
	}


Vidas();
}
void Carro::Borrar_Carro() { 
	gotoxy(x, y);   printf("        ");
	gotoxy(x, y+1); printf("        ");
	gotoxy(x, y+2); printf("        ");
	gotoxy(x, y+3);   printf("        ");
	gotoxy(x, y + 4); printf("        ");
	gotoxy(x, y + 5); printf("        ");
	Limites();

}

void Carro::Mover() {

	if (_kbhit()) {
		char tecla = _getch();
		Borrar_Carro();
		if (tecla == IZQUIERDA && x > 7) {
			x = x - 8;
		
		}
		if (tecla == DERECHA && x + 7 < 77) {
		
			x = x + 8;
		}
		//if (tecla == ARRIBA&&y>4)y--;
		//if (tecla == ABAJO&& y+3<30)y++;
		if (tecla == 'j')this->vidas--;
		Dibuja_Carro();
		
	}


}


void Carro::Dibuja_Carro() {

/*gotoxy(x, y); printf(" %c", 30);
	gotoxy(x, y + 1); printf(" %c%c%c", 40, 207, 41);
	gotoxy(x, y + 2); printf("%c%c %c%c", 30, 190, 190, 30);
	gotoxy(x, y+3); printf(" %c", 30);
	gotoxy(x, y + 4); printf(" %c%c%c", 40, 207, 41);
	gotoxy(x, y + 5); printf("%c%c %c%c", 30, 190, 190, 30);
	*/
	gotoxy(x, y + 1); printf("  %c  ", 220);
	gotoxy(x, y + 2); printf("%c%c%c%c%c ", 79, 205, 205, 205, 79);
	gotoxy(x, y + 3); printf(" %c%c%c ", 186, 220, 186);
	gotoxy(x, y + 4); printf(" %c%c%c ", 186, 220, 186);
	gotoxy(x, y + 5); printf("%c%c%c%c%c ", 79, 205, 205, 205, 79);

	}

void Carro::PreChoque() {
	Borrar_Carro();
	gotoxy(x, y); printf(" %c", 30);
	gotoxy(x, y + 1); printf(" %c%c%c", 40, 207, 41);
	gotoxy(x, y + 2); printf("%c%c %c%c", 30, 190, 190, 30);
	gotoxy(x, y + 3); printf(" %c", 30);
	gotoxy(x, y + 4); printf(" %c%c%c", 40, 207, 41);
	gotoxy(x, y + 5); printf("%c%c %c%c", 30, 190, 190, 30);
	Sleep(200);
	Borrar_Carro();
	gotoxy(x, y);   printf("        ");
	gotoxy(x, y + 1); printf("        ");
	gotoxy(x, y + 2); printf("        ");
	gotoxy(x, y + 3);   printf("        ");
	gotoxy(x, y + 4); printf("        ");
	gotoxy(x, y + 5); printf("        ");
	Sleep(200);
	Borrar_Carro();
	gotoxy(x, y); printf(" %c", 30);
	gotoxy(x, y + 1); printf(" %c%c%c", 40, 207, 41);
	gotoxy(x, y + 2); printf("%c%c %c%c", 30, 190, 190, 30);
	gotoxy(x, y + 3); printf(" %c", 30);
	gotoxy(x, y + 4); printf(" %c%c%c", 40, 207, 41);
	gotoxy(x, y + 5); printf("%c%c %c%c", 30, 190, 190, 30);
	Sleep(200);
	Borrar_Carro();
	Limites();
}

void Carro::BorrarExplocion() {

	gotoxy(x, y);   printf("                ");
	gotoxy(x, y + 1); printf("                ");
	gotoxy(x, y + 2); printf("                ");
	gotoxy(x, y + 3);   printf("                ");
	gotoxy(x, y + 4); printf("                ");
	gotoxy(x, y + 5); printf("                ");

	Limites();
}
void Carro::OcultarCursor() {
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 100;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hCon, &cci);

}
void Carro::v() {
	vidas--;

}
int Carro::getX() {
	return this->x;

}

int Carro::getY() {

	return this->y;
}
void Carro::gotoxy(int x, int y) {


	HANDLE hCon;
	COORD dwPos;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos);


}