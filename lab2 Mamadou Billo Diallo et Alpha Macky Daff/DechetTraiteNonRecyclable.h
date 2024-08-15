#pragma once

#include<string>
using namespace std;
#include"DechetTraite.h"
#include"Compteur.h"


class DechetTraiteNonRecyclable : public  DechetTraite
{
public:
	DechetTraiteNonRecyclable(Dechet* dechet) {};
	DechetTraiteNonRecyclable() { Compteur::ajouterConstructeur(); };

	~DechetTraiteNonRecyclable() {
		Compteur::ajouterDestructeur();
	};

private:

};
