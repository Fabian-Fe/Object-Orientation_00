#include <iostream>


//Member von Klassen (also Methoden und Variablen) sind regul�r private(oder protected) 
//einfachere structs sind regul�r public und haben auch Constructoren, Vererbung und somit 1 Form der Polymorphie

struct Form
{
//public:		//Zeile obsolet, sowieso public 
	double laenge, breite;

	//Constructor
	Form(double l = 1, double b = 1)		//Standardwerte f�r ausgelassene parameter beim Aufruf
	{
		laenge = l;
		breite = b;				
	}

	//Funktion/Methode zur Flaechenberechnung
	double Flaeche()
	{
		return laenge * breite;
	}
};

//Kreis ist eine Spezialisierung von Form. Deshalb erbt es Member. 
struct Kreis:Form
{
	//Constructor wird �berladen, nutzt 1 geerbte Variable und braucht nur noch 1 Argument
	Kreis(double durchmesser)
	{
		breite = durchmesser;
	}

	//Flaechenberechnung wird ueberschrieben

};



int main()
{

}