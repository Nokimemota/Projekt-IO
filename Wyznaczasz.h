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
	virtual std::vector<int> Znajdz_trase(std::vector<sf::Vector2f> & punkty,std::vector<droga> & drogi, int punkt_A,int punkt_B)=0;
};
class Wyznaczasz_Zpunktami_specjalnymi:public Wyznaczasz
{
public:
	bool czy_szukac_punkty_specjalne;
	virtual std::vector<int> Znajdz_trase(std::vector<sf::Vector2f> & punkty,std::vector<droga> & drogi, int punkt_A,int punkt_B);
};
class Wyznaczasz_zwykly:public Wyznaczasz
{
public:
	virtual std::vector<int> Znajdz_trase(std::vector<sf::Vector2f> & punkty,std::vector<droga> & drogi, int punkt_A,int punkt_B);
};
#endif