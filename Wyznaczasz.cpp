#include "Wyznaczasz.h"
std::vector<int> Wyznaczasz::Znajdz_trase(std::vector<sf::Vector2f> & punkty,std::vector<droga> & drogi, int punkt_A,int punkt_B)
{
	std::vector<int> trasa;
	struct djikstra
	{
		int poprzednik;
		int droga_poprzednika;
		float koszty_dojscia;
		bool ustawione;
		bool przeszukal;
		std::vector<int> sasiedztwa;
		std::vector<float> odleglosci;
		std::vector<int> droga;
	};

	std::vector<djikstra> algo(punkty.size());

	for(auto & elem:algo)
	{
		elem.ustawione = 0;
		elem.przeszukal = 0;
	}
	algo[punkt_A].ustawione = 1;
	algo[punkt_A].koszty_dojscia = 0;

	//std::vector<bool> wszerz(punkty.size());
	for(int i = 0 ;i<drogi.size();i++)
	{
		float odleglosc = sqrt(pow(punkty[drogi[i].a].x -punkty[drogi[i].b].x,2 ) +pow(punkty[drogi[i].a].y -punkty[drogi[i].b].y,2 ));
		algo[drogi[i].a].sasiedztwa.push_back(drogi[i].b);
		algo[drogi[i].a].odleglosci.push_back(odleglosc);
		algo[drogi[i].a].droga.push_back(i);
		algo[drogi[i].b].sasiedztwa.push_back(drogi[i].a);
		algo[drogi[i].b].odleglosci.push_back(odleglosc);
		algo[drogi[i].b].droga.push_back(i);
	}
	
	bool koniec = 0;
	while(koniec ==0)
	{
		koniec = 1;
	for(unsigned int i = 0;i<punkty.size();i++)
		if(algo[i].ustawione)
		{
			for(unsigned int j = 0;algo[i].przeszukal == 0&&j<algo[i].sasiedztwa.size();j++)
			{
				int sprawdzany = algo[i].sasiedztwa[j];
				if(algo[sprawdzany].ustawione ==0 || algo[sprawdzany].koszty_dojscia > algo[i].koszty_dojscia + algo[i].odleglosci[j])
				{
					algo[sprawdzany].ustawione =1;
					algo[sprawdzany].koszty_dojscia = algo[i].koszty_dojscia + algo[i].odleglosci[j];
					algo[sprawdzany].poprzednik = i;
					algo[sprawdzany].droga_poprzednika = j;
					algo[sprawdzany].przeszukal =0;
					koniec = 0;

				}
			}
			algo[i].przeszukal =1;

		}
	}
	for(int i = punkt_B; i != punkt_A;i = algo[i].poprzednik)
		trasa.push_back(algo[algo[i].poprzednik].droga[algo[i].droga_poprzednika]);


	return trasa;
}
