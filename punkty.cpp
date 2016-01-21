#include "punkty.h"


Punkty::Punkty()
{
}

std::vector<punkt> Punkty::Wektor()
{
	std::ifstream strumien;
		strumien.open("mapa.txt");

	n=0;
	while(!strumien.eof())	
	{
		strumien>>a;
		n++;
	}
	rozmiar=n;

	tab=new float [n];

	n=0;
	strumien.seekg(0);
	while(!strumien.eof())
	{
		strumien>>a;
		x=atof(a.c_str());
		tab[n]=x;
		n++;
	}
	
	for(n=0;n<rozmiar-1;n++)
	{
		tabpunkt[n].a=tab[n];
		tabpunkt[n].b=tab[n+1];
	}

	return tabpunkt;
}

punkt::punkt(float A,float B):a(A),b(B){}