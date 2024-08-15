#pragma once
#include<string>
using namespace std;

#include"Dechet.h"
#include"Compteur.h"
class BoiteCarton : public Dechet
{
public:
	BoiteCarton():Dechet(0, "Carton", CARTON, "brun", CARTON, 100, true, false)
	{
		Compteur::ajouterConstructeur();
	}
	~BoiteCarton()	{Compteur::ajouterDestructeur();}


private:

};

