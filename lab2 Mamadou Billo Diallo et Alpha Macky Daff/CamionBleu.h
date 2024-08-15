#pragma once
#include<string>
using namespace std;

#include"Camion.h"
#include "DechetTraiteRecyclable.h"
#include"Compteur.h"


class CamionBleu : public Camion
{
public:
	CamionBleu();
	CamionBleu(int maxCapacite);

	~CamionBleu();
	bool ajouterDechet(DechetTraiteRecyclable* dechetTraite);

private:
	
};

