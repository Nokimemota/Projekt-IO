//#include "Wyswietlacz.h"
//
//Wyswietlacz::Wyswietlacz():window(sf::VideoMode( 400, 400, 32 ),"NAWIGATOR")
//{
//}
//void Wyswietlacz::Wyswietlaj(std::vector<sf::Vector2f> punkty, std::vector<droga> drogi,std::vector<int> trasa)
//{
//	if(window.isOpen()){
//		window.clear(sf::Color(sf::Color::Black));
//
//	sf::RectangleShape rec;
//
//		sf::CircleShape point;
//		point.setRadius(5);
//		point.setFillColor(sf::Color::Red);
//		point.setOrigin(5,5);
//		for(int i = 0;i< punkty.size();i++)
//		{
//			point.setPosition(punkty[i]);
//			window.draw(point);
//		}
//		rec.setOutlineThickness(3);
//		rec.setOutlineColor(sf::Color::Green);
//		rec.setFillColor(sf::Color::Green);
//
//		for(int i = 0;i< trasa.size();i++)
//		{
//			rec.setPosition(punkty[drogi[trasa[i]].a]);
//		    Line(rec,punkty[drogi[trasa[i]].a],punkty[drogi[trasa[i]].b]);
//			window.draw(rec);
//		}
//
//	rec.setOutlineThickness(1);
//	rec.setOutlineColor(sf::Color::Blue);
//	rec.setFillColor(sf::Color::Blue);
//		for(int i = 0;i< drogi.size();i++)
//		{
//			rec.setPosition(punkty[drogi[i].a]);
//		    Line(rec,punkty[drogi[i].a],punkty[drogi[i].b]);
//			window.draw(rec);
//		}
//
//
//		window.display();
//
//
//
//	}
//
//}
//void Wyswietlacz::Line(sf::RectangleShape & rec, sf::Vector2f a,sf::Vector2f b)
//{
//	//rec.setSize(sf::Vector2f(sqrt(pow(a.x-b.x,2) +pow(a.y-b.y,2)),1));
//	//rec.rotate(45);
//	//float angle ;
//	//if(a.x-b.x)
//	//angle = atan((a.y-b.y)/(a.x-b.x));
//	//angle = angle/(PI*2)*360;
//	//cout<<angle<<endl;
//	//rec.setRotation(angle);
//	//rec.ro
//	
//	rec.setSize(sf::Vector2f(sqrt(pow(a.x-b.x,2) +pow(a.y-b.y,2)),0));
//double x = b.x - a.x;
//double y = b.y- a.y;
//double angleInRadians = std::atan2(y, x);
//double angleInDegrees = (angleInRadians / PI) * 180.0;
//	rec.setRotation(angleInDegrees);
//}
//droga::droga(int A,int B):a(A),b(B){}
#include "Wyswietlacz.h"
string ToStrings(int a)
{
	stringstream s;
	s<<a;
	string napis;
	s>>napis;
	return napis;
}
Wyswietlacz::Wyswietlacz():window(sf::VideoMode( 400, 400, 32 ),"NAWIGATOR")
{
}
void Wyswietlacz::Wyswietlaj(std::vector<sf::Vector2f> punkty, std::vector<droga> drogi,std::vector<int> trasa)
{
	if(window.isOpen()){
		window.clear(sf::Color(sf::Color::Black));
		sf::Font font;
		font.loadFromFile("arial.ttf");
	sf::Text nr;
	nr.setFont(font);
	nr.setOrigin(0,20);
	nr.setCharacterSize(15);
	sf::RectangleShape rec;
		sf::CircleShape point;
		point.setRadius(5);
		point.setFillColor(sf::Color::Red);
		point.setOrigin(5,5);
		for(unsigned int i = 0;i< punkty.size();i++)
		{
			point.setPosition(punkty[i]);
			window.draw(point);

		}
		rec.setOutlineThickness(3);
		rec.setOutlineColor(sf::Color::Green);
		rec.setFillColor(sf::Color::Green);

		for(unsigned int i = 0;i< trasa.size();i++)
		{
			rec.setPosition(punkty[drogi[trasa[i]].a]);
		    Line(rec,punkty[drogi[trasa[i]].a],punkty[drogi[trasa[i]].b]);
			window.draw(rec);
		}

	rec.setOutlineThickness(1);
	rec.setOutlineColor(sf::Color::Blue);
	rec.setFillColor(sf::Color::Blue);
		for(unsigned int i = 0;i< drogi.size();i++)
		{
			rec.setPosition(punkty[drogi[i].a]);
		    Line(rec,punkty[drogi[i].a],punkty[drogi[i].b]);
			window.draw(rec);
		}
		for(unsigned int i = 0;i< punkty.size();i++)
		{

			nr.setPosition(punkty[i]);
			nr.setString(ToStrings(i));
			window.draw(nr);

		}
		window.display();



	}

}
void Wyswietlacz::Line(sf::RectangleShape & rec, sf::Vector2f a,sf::Vector2f b)
{
	//rec.setSize(sf::Vector2f(sqrt(pow(a.x-b.x,2) +pow(a.y-b.y,2)),1));
	//rec.rotate(45);
	//float angle ;
	//if(a.x-b.x)
	//angle = atan((a.y-b.y)/(a.x-b.x));
	//angle = angle/(PI*2)*360;
	//cout<<angle<<endl;
	//rec.setRotation(angle);
	//rec.ro
	
	rec.setSize(sf::Vector2f(sqrt(pow(a.x-b.x,2) +pow(a.y-b.y,2)),0));
double x = b.x - a.x;
double y = b.y- a.y;
double angleInRadians = std::atan2(y, x);
double angleInDegrees = (angleInRadians / PI) * 180.0;
	rec.setRotation(float(angleInDegrees));
}