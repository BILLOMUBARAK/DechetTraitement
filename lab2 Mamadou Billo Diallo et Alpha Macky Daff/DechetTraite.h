#pragma once
#include<string>
using namespace std;
#include"Dechet.h"
#include"Compteur.h"

class DechetTraite : public Dechet
{
public:
	DechetTraite(Dechet* dechet);
	DechetTraite() { Compteur::ajouterConstructeur(); };
	Dechet const* getDechet() { return dechet; };
	~DechetTraite() {Compteur::ajouterDestructeur();};

private:

protected:
	Dechet* dechet;

};
