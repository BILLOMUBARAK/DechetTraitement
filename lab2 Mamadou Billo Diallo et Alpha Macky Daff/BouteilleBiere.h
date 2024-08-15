#pragma once
#include<string>
using namespace std;
#include"Dechet.h"
#include"Compteur.h"

class BouteilleBiere : public Dechet
{
public:

    BouteilleBiere() :Dechet(0, "Bouteille", BOUTEILLE, "vert", PLASTIQUE, 100, false, true)
	{ Compteur::ajouterConstructeur();

		
	};
	~BouteilleBiere() {Compteur::ajouterDestructeur();}

private:

};

