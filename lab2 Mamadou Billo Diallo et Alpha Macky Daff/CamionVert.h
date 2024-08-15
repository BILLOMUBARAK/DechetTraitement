#pragma once
#include<string>
using namespace std;

#include"Camion.h"
#include "DechetTraiteNonRecyclable.h"
#include"Compteur.h"

class CamionVert : public Camion
{
public:
	CamionVert();
	CamionVert(int maxCapacite);

	bool ajouterDechet(DechetTraiteNonRecyclable* dechetTraite);
	~CamionVert();

private:
	
};

