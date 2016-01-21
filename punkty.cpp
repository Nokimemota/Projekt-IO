#include "punkty.h"

droga::droga(int A,int B):a(A),b(B){}
droga::droga(){}
MapManager_plik::MapManager_plik(std::string mapa)
{
		std::ifstream strumien;
		strumien.open(mapa);
	
		int roz;
		strumien>>roz;
		tabpunkt.resize(roz);
		for(int i = 0;i<tabpunkt.size();i++)
		{
			strumien>>tabpunkt[i].x;
			strumien>>tabpunkt[i].y;
		}

		int drogi;
		strumien>>drogi;
		tabdroga.resize(drogi);
		for(auto & elem:tabdroga)
		{
			strumien>>elem.a;
			strumien>>elem.b;
		}
}
const std::vector<sf::Vector2f> MapManager_plik::GetPoints()
{
	return tabpunkt;
}
const std::vector<droga> MapManager_plik::GetDrogi()
{
	return tabdroga;
}
