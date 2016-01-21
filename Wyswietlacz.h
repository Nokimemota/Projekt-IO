#ifndef Wyswietlacz_h
#define Wyswietlacz_h
#include "SFML\Window.hpp"
#include"SFML\Graphics.hpp"
#include <vector>
#include <math.h>
#include <iostream>
#include <sstream>
#include "punkty.h"
#define PI 3.14159265358979323846
using namespace std;
string ToStrings(int a);
class Wyswietlacz
{
	sf::RenderWindow window;
	static void Line(sf::RectangleShape & rec, sf::Vector2f a,sf::Vector2f b);
public:
	Wyswietlacz();
	void Wyswietlaj(std::vector<sf::Vector2f> punkty, std::vector<droga> drogi,std::vector<int> trasa = vector<int>());
};
#endif