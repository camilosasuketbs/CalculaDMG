#include "Header.h"
//#include "Formula.h"








int main()
{
	
	setlocale(LC_ALL,"Portuguese");

	//Menus::MenuPrincipal();
	//Menus::SubMenuOutroAlvo();
	
	Player character[MAX_NUM];
	Monster mob[MAX_NUM];


	// MobId    LEV    DEF    NOMEMOB
	mob[0] = { 569,    95,   264,   "Leocorne Zumbi+" };
	mob[1] = { 704,   160,  1816,   "Berderk Faello" };
	mob[2] = { 918,   180,  1906,   "UMD-03 Lautus Pluma" };
	mob[3] = { 1929,   225,  2546,   "Golem Arcano da Ira" };
	mob[4] = {  917,   163,   733,   "UMD-02 Cornus" };
	mob[5] = { 1910,   200,   891,   "Guerreiro Rebelde F." };
	mob[6] = { 1244,   200,   988,   "Lagarta Monstruosa" };
	

	mob[8] = {   40,   214,   2258,   "Lebrecorne" }; //Ataque Igual Defesa e LevelPlayer Menor em 14 Niveis
	mob[9] = {   2,   186,   2258,   "Scorpilarva" }; //Ataque Igual Defesa e LevelPlayer Maior em 14 Niveis
	mob[10] = {  94,  200,   2258,   "Javali Atroz" }; //Ataque Igual Defesa e Level Igual


	mob[11] = { 362,   222,   2258,   "Sapo de Planta" }; //Ataque Igual Defesa e LevelPlayer Maior em 22 Niveis
	mob[12] = {   9,   178,   2258,   "Mosca Ceifadora" }; //Ataque Igual Defesa e LevelPlayer Menor em 22 Niveis

	mob[13] = {  62,   222,   2158,   "Reptissauro" }; // Ataque Player Maior e LevelPlayer Menor que o Mob em 100 de Ataque e 22 Niveis
	mob[14] = {  43,   178,   2158,   "Pantrocorne" }; // Ataque Player Maior e LevelPlayer Maior que o Mob em 100 de Ataque e 22 Niveis

	mob[15] = { 226,   222,   2244,   "Lobo Zumbi" }; // Ataque Player Maior e Level Maior que o Mob em 15 de Ataque e 22 Niveis
	mob[16] = { 172,   178,   2244,   "Esqueleto Guerreiro" }; // Ataque Player Maior e Level Menor que o Mob em 15 de Ataque e 22 Niveis
	mob[17] = {  19,   178,   2358,   "Louva-a-Deus" }; // Ataque Player Menor e LevelPlayer Maior que o Mob em 22 Niveis em 100 de Ataque

	mob[18] = { 353,   200,   1278,   "Árvore Amaldiçoada" }; //Ataque Player Maior em 400 Ataque e LevelPlayer Menor em 30 Leveis
	mob[19] = {  13,   200,   2178,   "Moscortadora Rainha" }; //Ataque Player Maior em 500 Ataque e LevelPlayer igual

	//(iDamage < DMGGranted)

	//	 NOME           LEV  ATQ     MAG    DC  DN_ADC  DN_MIN  CLASSE     SKILL PRESSIONADA
	character[0] = { "PLOMO"      , 161,    0,  2251,   99,  0,       0,     "AA" }; //Canhao de Pedra 20
	character[1] = { "Modavoska"  , 133,  721,     0,   35,  0,       0,     "GU" }; //Carga
	character[2] = { "LethalMage" , 180,    0,  3101,  228, 37,       0,     "MA" }; //Canhão Duplo Supremo Nv12
	character[3] = { "lPesadeloXD", 200,    0,  4144,  186,  0,       0,     "AA" }; //Canhão de Pedra Nv20
	character[4] = { "CALANGUINHO", 200, 2278,     0,  153,  0,       0,     "DU" }; //Interferencia Vital Nv20

/*
	cout << "Minimo: " << FORMULA::AttackInMonsterMin(character[0].AtaqueMAX + character[0].AtaqueMagicoMAX, character[0].Level, character[0].DanoAdicional, mob[1].Level, mob[1].Defense) << " ";
	cout << "NORMAL: " << FORMULA::AttackInMonster(character[0].AtaqueMAX + character[0].AtaqueMagicoMAX, character[0].Level, character[0].DanoAdicional, mob[1].Level, mob[1].Defense) << " ";
	cout << "Critado: " << FORMULA::AttackInMonster(character[0].AtaqueMAX + character[0].AtaqueMagicoMAX, character[0].Level, character[0].DanoAdicional, mob[1].Level, mob[1].Defense, character[0].DanoCritico) << endl;
	cout << "Minimo: " << FORMULA::AttackInMonsterMin(character[1].AtaqueMAX + character[1].AtaqueMagicoMAX, character[1].Level, character[1].DanoAdicional, mob[1].Level, mob[1].Defense) << " ";
	cout << "NORMAL: " << FORMULA::AttackInMonster(character[1].AtaqueMAX + character[1].AtaqueMagicoMAX, character[1].Level, character[1].DanoAdicional, mob[1].Level, mob[1].Defense) << " ";
	cout << "Critado: " << FORMULA::AttackInMonster(character[1].AtaqueMAX + character[1].AtaqueMagicoMAX, character[1].Level, character[1].DanoAdicional, mob[1].Level, mob[1].Defense, character[1].DanoCritico) << endl;
	cout << "Minimo: " << FORMULA::AttackInMonsterMin(character[2].AtaqueMAX + character[2].AtaqueMagicoMAX, character[2].Level, character[2].DanoAdicional, mob[1].Level, mob[1].Defense) << " ";
	cout << "NORMAL: " << FORMULA::AttackInMonster(character[2].AtaqueMAX + character[2].AtaqueMagicoMAX, character[2].Level, character[2].DanoAdicional, mob[1].Level, mob[1].Defense) << " ";
	cout << "Critado: " << FORMULA::AttackInMonster(character[2].AtaqueMAX + character[2].AtaqueMagicoMAX, character[2].Level, character[2].DanoAdicional, mob[1].Level, mob[1].Defense, character[2].DanoCritico) << endl;
*/

	DmgCalcObj calcDMG;

	
	cout << setw(21) << left << "[NOME_DO_MONSTRO]\t[MOBLEVEL]\t[PERSONAGEM]\t[LEV]\t[CLASSE]\t[DANO_MIN]\t[DANO_BASE]\t[DANO_CRITICO]" << endl;
	for (int iMob = 0; iMob < MAX_NUM; iMob++)
	{
		if (!(strcmp(mob[iMob].MobName, "") == 0) && (mob[iMob].Level > 0))
		{
			for (int iPlayer = 0; iPlayer < MAX_NUM; iPlayer++)
			{
				if (!(strcmp(character[iPlayer].Name, "") == 0) && (character[iPlayer].Level > 0))
				{
					cout << setw(21) << left << mob[iMob].MobName << "\t" << mob[iMob].Level << "\t\t" << setw(16) << left << character[iPlayer].Name << " " << character[iPlayer].Level << "\t" << character[iPlayer].Classe << "\t\t" << calcDMG.do_minimal(&character[iPlayer], &mob[iMob]) << "\t\t" << calcDMG.do_normal(&character[iPlayer], &mob[iMob]) << "\t\t" << calcDMG.do_critical(&character[iPlayer], &mob[iMob]) << endl;
				}
			}
			cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
		}

	}




	cout << endl << endl;
	system("pause");
	return 0;
}


// Bugados Aneis do Mazel, Bracelete de Sienna, Amuletos da Ophidia (Calculo Danos Cliente e Servidor não Bate)