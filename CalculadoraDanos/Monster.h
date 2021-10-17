#pragma once

struct Monster
{
	int MobId;
	int Level;
	int Defense;
	char MobName[32];
	int PhyAttMin1;
	int PhyAttMax1;
	int PhyAttMin2;
	int PhyAttMax2;
	long long HP;
};