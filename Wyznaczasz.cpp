#include "Wyznaczasz.h"
std::vector<int> Wyznaczasz::Znajdz_trase(std::vector<sf::Vector2f> & punkty,std::vector<droga> & drogi, int punkt_A,int punkt_B)
{
	std::vector<int> trasa;
	int D[25];
	int i, j, k, N;

	//wyznaczanie najkrotszej drogi z danego punktu do wszystkich innych

	for(i=0;i<(int)punkty.size();i++) D[i]=A[0][i];

	for(k=punkt_A;k<(int)punkty.size()-1;k++)
	{
		for(i=0;i<(int)punkty.size();i++)
		{
			for(j=0;j<(int)punkty.size();j++)
			{
				if(D[j]+A[j][i]>nieskonczonosc)
					N=nieskonczonosc;
				else
					N=D[j]+A[j][i];
				D[i]=min(D[i],N);
			}
		}
	}

	//wyznaczanie trasy

	int u, v;
	std::vector<int> poprzedniki;

	trasa.push_back(punkt_B);
	v=punkt_B;

	while(v!=punkt_A)
	{
		poprzedniki=Poprzedniki(punkty,drogi,v);

		for(i=0;i<poprzedniki.size();i++)
		{
			if(D[v]==D[poprzedniki[i]]+A[poprzedniki[i]][v])
				u=poprzedniki[i];
		}
		trasa.push_back(u);
		v=u;
	}

	///tu trzeba zrobic algorytm znajdujacy polaczenie od a do b
	//trasa.push_back(0);//przyklad
	//trasa.push_back(1);//przyklad
	//trasa.push_back(2);//przyklad
	return trasa;
}

//wyznaczanie poprzednikow wierzcholka koncowego punkt_B

std::vector<int> Wyznaczasz::Poprzedniki(std::vector<sf::Vector2f> & punkty,std::vector<droga> & drogi, int x)
{
	int i, j;

	for(i=0;i<(int)punkty.size();i++)
	{
	for(j=0;j<(int)punkty.size();j++)
	{
		if(i==j) A[i][j]=nieskonczonosc;
		else if(drogi[i].dlugosc!=0)
			A[i][j]=drogi[i].dlugosc;
		else
			A[i][j]=nieskonczonosc;
	}
	}

	std::vector<int> wynik;

	for(i=0;i<(int)punkty.size();i++)
	{
		if((A[i][x]!=nieskonczonosc)&&(A[i][x]!=0))
			wynik.push_back(i);
	}
	return wynik;
}