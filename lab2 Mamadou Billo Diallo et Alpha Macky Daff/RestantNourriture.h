#pragma once
#include<string>
using namespace std;
#include"Dechet.h"
#include"Compteur.h"


class RestantNourriture : public Dechet
{
public:
	RestantNourriture() :Dechet(0, "Nourriture", NOURRITURE, "inconnu", NOURRITURE, 20, false, false) {
		Compteur::ajouterConstructeur();
	 };
	~RestantNourriture() {Compteur::ajouterDestructeur();};

private:

};

