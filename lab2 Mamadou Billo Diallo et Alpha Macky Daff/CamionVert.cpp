#include "CamionVert.h"




CamionVert::CamionVert() :CamionVert(50)
{
	Compteur::ajouterConstructeur();

}
CamionVert::CamionVert(int maxCapacite) {}
	

bool CamionVert::ajouterDechet(DechetTraiteNonRecyclable* dechetTraite)
{
	return Camion::ajouterDechet(dechetTraite);
}

CamionVert::~CamionVert()
{
	Compteur::ajouterDestructeur();

}

