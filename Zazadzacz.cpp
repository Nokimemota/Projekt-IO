#include "Zazadzacz.h"
void Zazadzacz::Play()
{


	
	std::vector<sf::Vector2f> punkty;
	std::vector<droga> drogi;
	drogi.push_back(droga(0,1));
	drogi.push_back(droga(2,1));
	drogi.push_back(droga(0,3));
	drogi.push_back(droga(3,4));
	drogi.push_back(droga(4,1));
	drogi.push_back(droga(4,2));
	punkty.push_back(sf::Vector2f(30,70));
	punkty.push_back(sf::Vector2f(120,50));
	punkty.push_back(sf::Vector2f(200,200));
	punkty.push_back(sf::Vector2f(300,170));
	punkty.push_back(sf::Vector2f(310,340));
	std::vector<int> trasa;
	trasa.push_back(0);
	trasa.push_back(1);
	trasa.push_back(3);
	bool dzialaj = 1;

	//punkty = mapmanager.Wektor();
	while(dzialaj)
	{
		okno.Wyswietlaj(punkty,drogi,trasa);
		cout<<"Komendy: \n 0.KONIEC \n 1. szukaj trase z A do B"<<endl;
		int com;
		cin>>com;
		switch(com)
		{
		case 0:
			dzialaj = 0;
			break;
		case 1:
			cout<<"Szukanie trasy"<<endl;
			break;
		}



	}
	okno.Wyswietlaj(punkty,drogi,trasa);

	getchar();
}