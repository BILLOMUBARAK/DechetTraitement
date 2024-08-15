#pragma once
#include<string>
using namespace std;
#include"Dechet.h"
#include"Compteur.h"



class SacChips : public Dechet
{
public:
	SacChips() :Dechet(0, "Plastique", PLASTIQUE, "inconnu", PLASTIQUE, 50, false, true) {
		Compteur::ajouterConstructeur();
		 };
	~SacChips() {Compteur::ajouterDestructeur();};

private:

};

