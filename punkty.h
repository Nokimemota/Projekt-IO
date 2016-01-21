#ifndef punkty_h
#define punkty_h
#include<iostream>
#include<fstream>
#include<string>
#include <vector>
#include "SFML\Window.hpp"


struct droga{
	droga();
	droga(int,int);
	int a,b;
	float dlugosc;
};
class MapManager
{
protected:
	std::vector<sf::Vector2f> tabpunkt;
	std::vector<droga> tabdroga;
public:
	virtual const std::vector<sf::Vector2f> GetPoints() =0;
	virtual const std::vector<droga> GetDrogi()=0;
};
class MapManager_plik:public MapManager
{
public:
	MapManager_plik(std::string mapa);
	virtual const std::vector<sf::Vector2f> GetPoints();
	virtual const std::vector<droga> GetDrogi();
};
class MapManagerGoogle:public MapManager
{
public:
	MapManagerGoogle();
	virtual const std::vector<sf::Vector2f> GetPoints();
	virtual const std::vector<droga> GetDrogi();
};

#endif