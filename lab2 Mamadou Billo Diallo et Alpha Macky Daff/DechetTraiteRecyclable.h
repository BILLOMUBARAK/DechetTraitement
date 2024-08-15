#pragma once
#include<string>
using namespace std;
#include"DechetTraite.h"
#include"Compteur.h"


class DechetTraiteRecyclable : public DechetTraite
{
public:
	DechetTraiteRecyclable(Dechet* dechet) {};
	DechetTraiteRecyclable() { Compteur::ajouterConstructeur(); };

	~DechetTraiteRecyclable() {Compteur::ajouterDestructeur();};

private:

};
