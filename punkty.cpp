#include "punkty.h"

droga::droga(int A,int B):a(A),b(B){}
Punkty::Punkty()
{
		std::ifstream strumien;
		strumien.open("mapa.txt");
	
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
std::vector<sf::Vector2f> Punkty::GetPoints()
{
	return tabpunkt;
}
std::vector<droga> Punkty::GetDrogi()
{
	return tabdroga;
}
