#include<iostream>
#include<stdio.h>
#include<windows.h>
#include <conio.h>
#include "Carro.h"
#include"Enemigo.h"
#include <time.h>
#include "Jugador.h"
#define ARRIBA 72

using namespace std;


void Acelerar(int velocidad) {
	if (_kbhit()) {
		char tecla = _getch();

		if (tecla == ARRIBA) {
			Sleep(velocidad - 1);

		}
		else {
		
			Sleep(velocidad);
		}

	}
}

void Marcos(){
	Carro y(0, 0, 0);
	//Vertical Izquierda
	y.gotoxy(29, 13); printf("%c", 201);
	y.gotoxy(29, 14); printf("%c", 186);
	y.gotoxy(29, 15); printf("%c", 186);
	y.gotoxy(29, 16); printf("%c", 186);
	y.gotoxy(29, 17); printf("%c", 186);
	y.gotoxy(29, 18); printf("%c", 186);
	y.gotoxy(29, 19); printf("%c", 200);
	//Arriba
	y.gotoxy(30, 13); printf("%c", 205);
	y.gotoxy(31, 13); printf("%c", 205);
	y.gotoxy(32, 13); printf("%c", 205);
	y.gotoxy(33, 13); printf("%c", 205);
	y.gotoxy(34, 13); printf("%c", 205);
	y.gotoxy(35, 13); printf("%c", 205);
	y.gotoxy(36, 13); printf("%c", 205);
	y.gotoxy(37, 13); printf("%c", 205);
	y.gotoxy(38, 13); printf("%c", 205);
	y.gotoxy(39, 13); printf("%c", 205);
	y.gotoxy(40, 13); printf("%c", 205);
	y.gotoxy(41, 13); printf("%c", 205);
	y.gotoxy(42, 13); printf("%c", 205);
	y.gotoxy(43, 13); printf("%c", 205);
	y.gotoxy(44, 13); printf("%c", 205);
	y.gotoxy(45, 13); printf("%c", 205);
	y.gotoxy(46, 13); printf("%c", 205);
	y.gotoxy(47, 13); printf("%c", 205);
	y.gotoxy(48, 13); printf("%c", 205);
	y.gotoxy(49, 13); printf("%c", 205);
	y.gotoxy(50, 13); printf("%c", 205);
	y.gotoxy(51, 13); printf("%c", 205);

	//Vertical Derecha

	y.gotoxy(51,13); printf("%c", 187);
	y.gotoxy(51, 14); printf("%c", 186);
	y.gotoxy(51, 15); printf("%c", 186);
	y.gotoxy(51, 16); printf("%c", 186);
	y.gotoxy(51, 17); printf("%c", 186);
	y.gotoxy(51, 18); printf("%c", 186);
	y.gotoxy(51, 19); printf("%c", 188);


	//Abajo

	y.gotoxy(50, 19); printf("%c", 205);
	y.gotoxy(49, 19); printf("%c", 205);
	y.gotoxy(48, 19); printf("%c", 205);
	y.gotoxy(47, 19); printf("%c", 205);
	y.gotoxy(46, 19); printf("%c", 205);
	y.gotoxy(45, 19); printf("%c", 205);
	y.gotoxy(44, 19); printf("%c", 205);
	y.gotoxy(43, 19); printf("%c", 205);
	y.gotoxy(42, 19); printf("%c", 205);
	y.gotoxy(41, 19); printf("%c", 205);
	y.gotoxy(40, 19); printf("%c", 205);
	y.gotoxy(39, 19); printf("%c", 205);
	y.gotoxy(38, 19); printf("%c", 205);
	y.gotoxy(37, 19); printf("%c", 205);
	y.gotoxy(36, 19); printf("%c", 205);
	y.gotoxy(35, 19); printf("%c", 205);
	y.gotoxy(34, 19); printf("%c", 205);
	y.gotoxy(33, 19); printf("%c", 205);
	y.gotoxy(32, 19); printf("%c", 205);
	y.gotoxy(31, 19); printf("%c", 205);
	y.gotoxy(30, 19); printf("%c", 205);

}



int tiempo = 0;
int nivel = 0;
int TiempoNiv = 0;
int JugadorPos = 0;

Jugador Jugadores[10];
int main() {
	Carro x(0,0,0);
	int seleccion=0, repetir = 1;
	//Mostramos el menu mientras repetir sea igula a true o 1 ;-)
	while (repetir == 1)
	{
		char opcion;
		//clrscr(); /* Para limpiar pantalla */
		do
		{
			system("cls");
			Marcos();

			x.gotoxy(31, 14); printf("1.- Jugar\n");
			x.gotoxy(31, 15); printf("2.- Estadisticas\n");
			x.gotoxy(31, 16); printf("3.- Guardar\n");
			x.gotoxy(31, 17); printf("0.- Salir\n");
			x.gotoxy(31, 18); printf("Escoge una opcion:");
			opcion = getchar();
			switch (opcion)
			{
			case '1':// x.gotoxy(2, 8); printf("Has elegido la Opción Comenzar");
			{
				system("cls");
				clock_t start = clock();
				bool gameover = false;
				
				Carro carro(30, 27, 4);
				carro.Limites();
				carro.Dibuja_Carro();
				Enemigo en(10, 4), en1(4, 8);
				while (gameover!=true) {
					carro.gotoxy(18, 2); cout << "NIVEL :" << nivel << endl;
					carro.Morir();
					carro.Mover();
					carro.Vidas();

					en.mover();
					en.choque(carro);
					en.borrarEn();


					en1.mover();
					en1.choque(carro);
					en1.borrarEn();

					carro.Vidas();
					if (tiempo > 0 && tiempo < 100) {
						if (tiempo > 0 && tiempo <= 100) 
						{
							nivel = 0;;
							TiempoNiv = 50;
						}
					

						
						if (GetAsyncKeyState(VK_UP))
						{
							Sleep(10);
							
						}
						else {
						
						Sleep(TiempoNiv);
						Acelerar(TiempoNiv);
						}

					}
					else if (tiempo > 100 && tiempo < 200) {
						if (tiempo > 100 && tiempo<=200) {
							nivel=1;
							TiempoNiv = 45;
						}

						if (GetAsyncKeyState(VK_UP))
						{
							Sleep(10);

						}
						else {

							Sleep(TiempoNiv);
							Acelerar(TiempoNiv-2);
						}
					}
					else if (tiempo > 200 && tiempo < 400) {
						if (tiempo >= 200 && tiempo <=400) {
							nivel=2;
							TiempoNiv = 40;

						}
						

						if (GetAsyncKeyState(VK_UP))
						{
							Sleep(10);

						}
						else {

							Sleep(TiempoNiv);
							Acelerar(TiempoNiv-2);
						}
					}
					else if (tiempo > 400 && tiempo < 800) {
						if (tiempo >=400 && tiempo<=800 ) {
							nivel=3;
							TiempoNiv = 30;
						}


						if (GetAsyncKeyState(VK_UP))
						{
							Sleep(10);

						}
						else {

							Sleep(TiempoNiv);
							Acelerar(TiempoNiv-2);
						}
					}
					else if (tiempo > 800 && tiempo < 1500) {
						if (tiempo >= 800 && tiempo <=1500) {
							nivel=4;
							TiempoNiv = 10;
						}
						

						if (GetAsyncKeyState(VK_UP))
						{
							Sleep(0);

						}
						else {

							Sleep(TiempoNiv);
							Acelerar(0);
						}
					}
					else if (tiempo > 1500 && tiempo < 3000) {
						if (tiempo >= 1500 && tiempo <= 3000) {
							nivel=5;
							TiempoNiv = 5;
						}
						
						if (GetAsyncKeyState(VK_UP))
						{
							Sleep(0);

						}
						else {

							Sleep(TiempoNiv);
							Acelerar(TiempoNiv - 2);
						}
					}
					else if (tiempo > 3000 && tiempo < 5000) {
						if (tiempo >= 3000 && tiempo <= 5000) {
							nivel = 6;
							TiempoNiv = 2;
						}
						



						if (GetAsyncKeyState(VK_UP))
						{
							Sleep(0);

						}
						else {

							Sleep(TiempoNiv);
							Acelerar(TiempoNiv-2);
						}
					}
					else if (tiempo > 5000 && tiempo < 7000) {
						if (tiempo >= 5000 && tiempo <= 7000) {
							nivel = 7;
							TiempoNiv = 50;
						}
						

						if (GetAsyncKeyState(VK_UP))
						{
							Sleep(0);

						}
						else {

							Sleep(TiempoNiv-2);
							Acelerar(TiempoNiv);
						}
					}

					tiempo++;
					en.gotoxy(2, 2); cout << "PUNTAJE :" << tiempo;
					en.gotoxy(30, 2); cout << "VELOCIDAD :" <<TiempoNiv;
				

					if (carro.getVidas() == 0) {
						carro.Morir();
						gameover = true;

						carro.gotoxy(35, 17); cout << "GAME OVER\n" << endl;
						carro.gotoxy(35, 18); cout << "PUNTOS :" << tiempo << endl;
						carro.gotoxy(35, 19); cout << "NIVEL :" << nivel << endl;
						//carro.setPuntaje(tiempo);
						Jugadores[JugadorPos].setNombre("Jugador");
						Jugadores[JugadorPos].setNivel(nivel);
						Jugadores[JugadorPos].setPuntos(tiempo);
						Jugadores[JugadorPos].setVelocidad(TiempoNiv);

						JugadorPos++;
						system("pause");

					}
					
				}
			}
				break;

			case '2': 
				system("cls");
				for (int x = 0; x < 10;x++) {
					cout<<" |||||     JUGADOR NUMERO  [" << x << "]  |||||\n" << endl;
					Jugadores[x].Imprimir();
				
				}
				system("pause");
				break;
			case '3': x.gotoxy(2, 12); printf("Se han guardado todos los datos...");
			}
		} while (opcion != '0');
		x.gotoxy(2, 16); printf("Que tengas un buen dia");
		x.gotoxy(2, 17); printf("...");
		x.gotoxy(2, 18); printf("...");
		x.gotoxy(2, 19); printf("...");
		_getch();
	}

	system("pause");
}