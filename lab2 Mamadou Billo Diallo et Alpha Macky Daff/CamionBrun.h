#pragma once
#include<string>
using namespace std;

#include"Camion.h"
#include "DechetTraiteCompostable.h"
#include"Compteur.h"

class CamionBrun : public Camion
{
public:
	CamionBrun();
	CamionBrun(int maxCapacite);

	bool ajouterDechet(DechetTraiteCompostable* dechetTraite);

	~CamionBrun();

private:
	
};

