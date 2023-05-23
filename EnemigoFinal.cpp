#include "EnemigoFinal.h"

//constructor

EnemigoFinal::EnemigoFinal(int pHp, int pDamage, int pPosicionX, int pPosicionY, 
							string pName, int pStormAttack, int pWaterAttack) : 
	
				Personaje(pHp, pDamage, pPosicionX, pPosicionY, pName) {
				stormAttack = pStormAttack; waterAttack = pWaterAttack;}


// getters y setter

int EnemigoFinal::getStormAttack() {
	return stormAttack;
}
int EnemigoFinal::getWaterAttack() {
	return waterAttack;
}





void EnemigoFinal::setStormAttack(int pStormAttack) {
	stormAttack = pStormAttack;
}
void EnemigoFinal::setWaterAttack(int pWaterAttack) {
	waterAttack = pWaterAttack;
}

// Metodos propios
// Metodos propios
