#ifndef Zazadzacz_h
#define Zazadzacz_h
#include <vector>
#include <math.h>
#include <iostream>
#include <conio.h>
#include "Wyswietlacz.h"
#include "punkty.h"
#include "Wyznaczasz.h"
#include <memory>



class Zarzadzacz
{
protected:
	std::unique_ptr<MapManager> mapmanager;
	std::unique_ptr<Wyznaczasz> znajdywacz;

public:
	virtual void Play() = 0;
};
class ZarzadzaczK_O:public Zarzadzacz
{
	Wyswietlacz okno;
public:
	ZarzadzaczK_O();
	virtual void Play();
};
class ZarzadzaczG_O:public Zarzadzacz
{
public:
	ZarzadzaczG_O();
	virtual void Play();
};


#endif