#ifndef Wyznaczasz_h
#define Wyznaczasz_h
#include<iostream>
#include<string>
#include <vector>
#include <math.h>
#include "SFML\Window.hpp"
#include "punkty.h"

class Wyznaczasz
{
public:
	std::vector<int> Znajdz_trase(std::vector<sf::Vector2f> & punkty,std::vector<droga> & drogi, int punkt_A,int punkt_B);
};
#endif