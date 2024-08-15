#pragma once
#include<string>
using namespace std;

#include"Dechet.h"
#include"Compteur.h"

class Chaise : public Dechet
{
public:
	Chaise() :Dechet(0, "Bois", BOIS, "inconnu", BOIS, 100, false, true){
	Compteur::ajouterConstructeur();}
	~Chaise() {	Compteur::ajouterDestructeur();};

private:

};
