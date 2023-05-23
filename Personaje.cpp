#include "Personaje.h"
#include <iostream>

//constructor

Personaje::Personaje(int pHp, int pDamage, int pPosicionX, int pPosicionY, string pName) {

	hp = pHp;
	damage = pDamage;
	posicionX = pPosicionX;
	posicionY = pPosicionY;
	name = pName;
}

//getters

int Personaje::getHp() {
	return hp;
}

int Personaje::getDamage() {
	return damage;
}

int Personaje::getPosicionX() {
	return posicionX;
}
int Personaje::getPosicionY() {
	return posicionY;
}

string Personaje::getName() {
	return name;
}

	// SETTERS

void Personaje::setHp(int pHp) {
	hp = pHp;
}
void Personaje::setDamage(int pDamage) {
	damage = pDamage;
}
void Personaje::setPosicionX(int pPosicionX) {
	posicionX = pPosicionX;
}
void Personaje::setPosicionY(int pPosicionY) {
	posicionY = pPosicionY;
}
void Personaje::setName(string pName) {
	name = pName;
}

