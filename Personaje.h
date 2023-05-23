#pragma once
#include <iostream>

using namespace std;

class Personaje
{
private:
	int hp, damage, posicionX, posicionY;
	string name;


public:
	//CONSTRUCTOR

	Personaje(int pHp, int pDamage, int pPosicionX, int pPosicionY, string pName);


	//getters

	int getHp();
	int getDamage();
	int getPosicionX();
	int getPosicionY();
	string getName();


	//setters

	void setHp(int pHp);

	void setDamage(int pDamage);

	void setPosicionX(int pPosicionX);

	void setPosicionY(int pPosicionY);

	void setName(string pName);


	//Metodos Propios
};

