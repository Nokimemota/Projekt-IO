#include "Zazadzacz.h"
void ZarzadzaczK_O::Play()
{


	
	std::vector<sf::Vector2f> punkty;
	std::vector<droga> drogi;
	std::vector<int> trasa;
	punkty = mapmanager->GetPoints();
	drogi = mapmanager->GetDrogi();
	bool dzialaj = 1;

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
			{
				cout<<"Szukanie trasy"<<endl;
				int a,b;
				cin>>a>>b;
				trasa = znajdywacz->Znajdz_trase(punkty,drogi,a,b);

				break;
			}
		}

	}
}
ZarzadzaczK_O::ZarzadzaczK_O()
{
	mapmanager = std::unique_ptr<MapManager>(new MapManager_plik("mapa.txt"));
	znajdywacz = std::unique_ptr<Wyznaczasz>(new Wyznaczasz_zwykly());

}