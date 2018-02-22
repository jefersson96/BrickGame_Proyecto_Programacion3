#include"Jugador.h"

Jugador::Jugador() {}
Jugador::Jugador(string nombre,int nivel,int puntos,int velocidad) {
	
	
	
	
	this->nombre = nombre;
	this->Nivel = nivel;
	this->Puntos = puntos;
	this->velocidad = velocidad;




}
void Jugador::setNivel(int nivel) {
	this->Nivel = nivel;


}

void Jugador::setNombre(string nombre) {


	this->nombre = nombre;



}


void Jugador::setVelocidad(int velocidad) {

	this->velocidad = velocidad;


}

void Jugador::setPuntos(int puntos) {
	this->Puntos = puntos;


}
int Jugador::getNivel() {


	return this->Nivel;

}
string Jugador::getNombre() {

	return this->nombre;


}
int Jugador::getVelocidad() {

	return this->velocidad;

}

int Jugador::getPuntos(){

	return this->Puntos;

}

void Jugador::Imprimir() {

	cout << "Nombre :" << this->nombre << "\nPuntos :" << this->Puntos << "\nNivel :" << this->Nivel << "\nVelocidad Alcanzada :" << this->velocidad<<endl;
	cout << "\n";

	cout << "\n";
	cout << "\n";



}