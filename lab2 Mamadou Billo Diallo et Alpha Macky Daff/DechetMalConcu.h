#pragma once
#include<string>
using namespace std;

#include"Dechet.h"
#include"Compteur.h"

class DechetMalConcu : public Dechet
{
public:
	DechetMalConcu() :Dechet(0, "Inconnu", INCONNU, "inconnu", INCONNU, 50, false, false) {
		Compteur::ajouterConstructeur();
	};

	~DechetMalConcu() {
		Compteur::ajouterDestructeur();
	};

private:

};
