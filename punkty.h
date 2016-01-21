#ifndef punkty_h
#define punkty_h
#include<iostream>
#include<fstream>
#include<string>
#include <vector>
#include "SFML\Window.hpp"


struct droga{
	droga(){}
	droga(int,int);
	int a,b;
	float dlugosc;
};
class Punkty
{
	std::string a;
	std::vector<sf::Vector2f> tabpunkt;
	std::vector<droga> tabdroga;
public:
	Punkty();
	std::vector<sf::Vector2f> GetPoints();
	std::vector<droga> GetDrogi();
};

#endif