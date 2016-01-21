#ifndef Wyznaczasz_h
#define Wyznaczasz_h
#include<iostream>
#include<string>
#include <vector>
#include "SFML\Window.hpp"
#include "punkty.h"

#define min(a,b) (a,b)?a:b
#define nieskonczonosc 200

class Wyznaczasz
{
	int A[25][25];
public:
	std::vector<int> Znajdz_trase(std::vector<sf::Vector2f> & punkty,std::vector<droga> & drogi, int punkt_A,int punkt_B);
	std::vector<int> Poprzedniki(std::vector<sf::Vector2f> & punkty,std::vector<droga> & drogi, int x);
};
#endif