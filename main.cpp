#include "Wyswietlacz.h"
#include <conio.h>
int main()
{
	Wyswietlacz wideo;
	std::vector<sf::Vector2f> punkty;
	std::vector<droga> drogi;
	punkty.push_back(sf::Vector2f(30,70));
	punkty.push_back(sf::Vector2f(120,50));
	punkty.push_back(sf::Vector2f(200,200));
	punkty.push_back(sf::Vector2f(300,170));
	punkty.push_back(sf::Vector2f(310,340));
	wideo.Wyswietlaj(punkty,drogi);
	getchar();
}