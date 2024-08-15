#include "Camion.h"



Camion::Camion() :Camion(80)
{
	Compteur::ajouterConstructeur();

}
Camion::Camion(int maxCapacite){}


bool Camion::ajouterDechet(DechetTraite* dechetTraite)
{

	if (Capacite < maxCapacite)
	{
		pileDechets.push(dechetTraite);
		Capacite+=dechetTraite->getDechet()->getPoids()>maxCapacite;
		return true;
	}
	else
		return false;
}

int Camion::viderCamion()
{
	int totalPoids = 0;

	while (!pileDechets.empty()) {
		DechetTraite* poids = pileDechets.top();
		totalPoids += poids->getPoids();
		pileDechets.pop();

		delete poids;
	}
	Capacite = 0;
	return totalPoids;
}

Camion::~Camion()
{
	Compteur::ajouterDestructeur();

}
