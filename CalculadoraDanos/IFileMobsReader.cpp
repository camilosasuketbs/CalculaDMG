#include "IFileMobsReader.h"

IMobsReader::IMobsReader()
{
	m_pmonster = new Monster[MAX_NUM];

	mobfin.open("MobsList.txt");
	if (!mobfin.is_open())
	{
		cout << "A Abertura do Arquivo " << "MobsList.txt" << " falhou!" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}

	string line;
	if (mobfin.is_open())
	{
		getline(mobfin, line);
		int i = 0;
		while (mobfin.good())
		{
			mobfin >> m_pmonster[i].MobId >> m_pmonster[i].Level >> mob[i].Defense;
			mobfin.ignore(1, ' '); //Ignora o Tab ou Espaço a Seguir
			mobfin.getline(m_pmonster[i].MobName, sizeof(m_pmonster[i].MobName)); //pega o nome com espaços no final da linha
			i++;
		}
	}
	mobfin.close();
};

IMobsReader::~IMobsReader()
{
		delete[]m_pmonster;
};
