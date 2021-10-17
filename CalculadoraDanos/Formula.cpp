#include "Formula.h"

DmgCalcObj::DmgCalcObj(){};

DmgCalcObj::~DmgCalcObj(){};




int DmgCalcObj::do_minimal(Player* const pAttacker, Monster* const pDefender)
{
	const int iPlayerAttack = (pAttacker->AtaqueMAX > pAttacker->AtaqueMagicoMAX) ? pAttacker->AtaqueMAX : pAttacker->AtaqueMagicoMAX;
	int iDamage = iPlayerAttack - pDefender->Defense;

	iDamage += 10;
	iDamage = InsureMin(iDamage, 0, 1);

	return iDamage;
};



int DmgCalcObj::do_critical(Player* const pAttacker, Monster* const pDefender)
{
	const int iPlayerAttack = (pAttacker->AtaqueMAX > pAttacker->AtaqueMagicoMAX) ? pAttacker->AtaqueMAX : pAttacker->AtaqueMagicoMAX;
	int iDamage = iPlayerAttack - pDefender->Defense;
	
	iDamage += 100;
	iDamage = InsureMin(iDamage, 0, 1);

	return iDamage;
};


int DmgCalcObj::do_normal(Player* const pAttacker, Monster* const pDefender)
{
	const int iPlayerAttack = (pAttacker->AtaqueMAX > pAttacker->AtaqueMagicoMAX) ? pAttacker->AtaqueMAX : pAttacker->AtaqueMagicoMAX;
	int iDamage = iPlayerAttack - pDefender->Defense;
	iDamage += 1000;
	iDamage = InsureMin(iDamage, 0, 1);

	return iDamage;
};


