#pragma once
#include "Header.h"
#include "Monster.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

ifstream mobfin;


class IMobsReader
{
public:
	
	Monster* m_pmonster;

	IMobsReader();

	~IMobsReader();
	
	
	Monster * get_monster(int iMonster) {return &m_pmonster[iMonster];}
	
};
