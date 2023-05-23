#pragma once
#include "Personaje.h"

using namespace std;

class EnemigoFinal : public Personaje
{
private:
	int stormAttack;
	int waterAttack;


public:

	//Constructor
	EnemigoFinal(int pHp, int pDamage, int pPosicionX, int pPosicionY, string pName, int pStormAttack, int pWaterAttack);


		//getter

		int getStormAttack();
		int getWaterAttack();


		//setters

		void setStormAttack(int pStormAttack);
		void setWaterAttack(int pWaterAttack);


		//metodos propios

};

