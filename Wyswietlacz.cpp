#include "Wyswietlacz.h"

Wyswietlacz::Wyswietlacz():window(sf::VideoMode( 400, 400, 32 ),"NAWIGATOR")
{
}
void Wyswietlacz::Wyswietlaj(std::vector<sf::Vector2f> punkty, std::vector<droga> drogi)
{
	if(window.isOpen()){
		window.clear(sf::Color(sf::Color::Black));

		sf::CircleShape point;
		point.setRadius(5);
		point.setFillColor(sf::Color::Red);
		for(int i = 0;i< punkty.size();i++)
		{
			point.setPosition(punkty[i]);
			window.draw(point);
		}
		window.display();
	}

}
droga::droga(int A,int B):a(A),b(B){}