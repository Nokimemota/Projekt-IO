#ifndef Zazadzacz_h
#define Zazadzacz_h
#include <vector>
#include <math.h>
#include <iostream>
#include <conio.h>
#include "Wyswietlacz.h"
#include "punkty.h"
#include "Wyznaczasz.h"



class Zazadzacz
{
	Wyswietlacz okno;
	Punkty mapmanager;
	Wyznaczasz znajdywacz;

public:
	Zazadzacz()
	{
	}
	void Play();
};


#endif