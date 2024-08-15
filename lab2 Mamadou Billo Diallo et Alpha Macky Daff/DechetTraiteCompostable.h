#pragma once
#include<string>
using namespace std;
#include"DechetTraite.h"
#include"Compteur.h"


class DechetTraiteCompostable : public DechetTraite
{
public:
	DechetTraiteCompostable(Dechet* dechet) {};
	DechetTraiteCompostable() { Compteur::ajouterConstructeur(); };

	~DechetTraiteCompostable() {
		Compteur::ajouterDestructeur();
	};

private:

};
