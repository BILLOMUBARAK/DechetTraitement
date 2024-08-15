#pragma once

#include<string>
using namespace std;

#include"Dechet.h"
#include"Compteur.h"

class PlanteVerte : public Dechet
{
public:
	PlanteVerte() : Dechet(0, "Vegetal", VEGETAL, "inconnu", VEGETAL, 80, true, false) {
		Compteur::ajouterConstructeur();
		 };
	~PlanteVerte() {Compteur::ajouterDestructeur();}
private:

};
