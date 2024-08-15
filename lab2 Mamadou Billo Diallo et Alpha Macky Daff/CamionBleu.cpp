#include "CamionBleu.h"



CamionBleu::CamionBleu() :CamionBleu(50)
{
	Compteur::ajouterConstructeur();

}
CamionBleu::CamionBleu(int maxCapacite) {}


CamionBleu::~CamionBleu()
{
	Compteur::ajouterDestructeur();

}

bool CamionBleu::ajouterDechet(DechetTraiteRecyclable* dechetTraite)
{
	return  Camion::ajouterDechet(dechetTraite);

}
