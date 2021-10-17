#pragma once
#include "Header.h"



class DmgCalcObj
{
public:
	DmgCalcObj();
	~DmgCalcObj();
	
	static int do_critical(Player * pAttacker, Monster * pDefender);
	static int do_normal(Player * pAttacker, Monster * pDefender);
	static int do_minimal(Player * pAttacker, Monster * pDefender);
};


enum BattleStyle
{
	GU = 1,
	DU,
	MA,
	AA,
	GA,
	EA
};

struct ClassNames
{
	const char Classe[7][3] = { "NO","GU","DU","MA","AA","GA","EA" };
	const int MinDmgRate[7] = { 0, 80, 90, 85, 85, 85, 85 }; //%DmgMin Base in Rank.scp
	const bool magicClass[7] = { false, false, false, true, true, false, false };
};



inline int InsureMin(int var, int be, int mv)
{
	if (var <= be)
		var = mv;
	return var;
}
