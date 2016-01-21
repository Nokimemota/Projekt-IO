#ifndef Wyswietlacz_h
#define Wyswietlacz_h
//#include "SFML\Config.hpp"
//#include "SFML\System.hpp"
#include "SFML\Window.hpp"
#include"SFML\Graphics.hpp"
#include <vector>

struct droga{
	droga(int,int);
	int a,b;
};
class Wyswietlacz
{
	sf::RenderWindow window;
public:
	Wyswietlacz();
	void Wyswietlaj(std::vector<sf::Vector2f> punkty, std::vector<droga> drogi);
};


#endif