#pragma once
#include<string>
using namespace std;

#include"Dechet.h"
#include"Compteur.h"

class FeuillePapier : public Dechet
{
public:
	FeuillePapier() :Dechet(0, "Papier", PAPIER, "inconnu", PAPIER, 100, true, false) 

	{ Compteur::ajouterConstructeur();
	};	
	~FeuillePapier() {
		Compteur::ajouterDestructeur();
	};

private:

};
