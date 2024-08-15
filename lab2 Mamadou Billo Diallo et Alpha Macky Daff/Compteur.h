#pragma once

#include <string>
using namespace std;

class Compteur
{
public:
	Compteur();
	static void ajouterConstructeur() {	constructeur++;};
	static void ajouterConstructeurCopie() {constructeurCopie++; };
	static void ajouterDestructeur() {  destructeur++; };
	static int getNbConstructeur() { return constructeur; };
	static int getNbConstructeurCopie() { return constructeurCopie; };
	static int getNbDestructeur() { return destructeur; };
	~Compteur();

private:
	static int constructeur;
	static int constructeurCopie;
	static int destructeur;
};

