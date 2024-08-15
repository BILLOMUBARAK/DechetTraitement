#include "CamionBrun.h"



CamionBrun::CamionBrun():CamionBrun(50)
{
	Compteur::ajouterConstructeur();

}
CamionBrun::CamionBrun(int maxCapacite) {}


bool CamionBrun::ajouterDechet(DechetTraiteCompostable* dechetTraite)
{
	return Camion::ajouterDechet(dechetTraite);
}



CamionBrun::~CamionBrun()
{
	Compteur::ajouterDestructeur();

}

