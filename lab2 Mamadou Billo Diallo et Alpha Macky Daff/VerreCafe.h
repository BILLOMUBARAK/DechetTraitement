#pragma once
#include<string>
using namespace std;

#include"Dechet.h"
#include"Compteur.h"


class VerreCafe : public Dechet
{
public:
	VerreCafe() :Dechet(0, "Styrofoam", STYROFOARM, "inconnu", STYROFOARM, 30, true, true) 
	{
		Compteur::ajouterConstructeur();
	};
	~VerreCafe() {Compteur::ajouterDestructeur();};

private:

};

