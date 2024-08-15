#pragma once
#include<string>
using namespace std;
#include"Dechet.h"
#include"Compteur.h"


class QuelqueChose : public Dechet
{
public:
	QuelqueChose() :Dechet(0, "Metal", METAL, "inconnu", METAL, 70, false, true) {
		Compteur::ajouterConstructeur();
	 };
	~QuelqueChose() {Compteur::ajouterDestructeur();};

private:

};

