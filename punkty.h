#ifndef punkty_h
#define punkty_h
#include<iostream>
#include<fstream>
#include<string>
#include <vector>



struct punkt{
	punkt(float,float);
	float a,b;
};

class Punkty
{
	int n, rozmiar;
	std::string a;
	std::vector<punkt> tabpunkt;
public:
	float *tab, x; 
	Punkty();
	std::vector<punkt> Wektor();
};

#endif