#pragma once

#include<string>
using namespace std;

#include "Camion.h"
#include "CamionBleu.h"
#include "CamionVert.h"
#include "CamionBrun.h"
#include"Compteur.h"


class Depot
{
public:
	Depot();
	CamionBleu* getCamionBleu();
	CamionVert* getCamionVert();
	CamionBrun* getCamionBrun();
	void depotDechetsTraites(CamionVert* camion);
	void depotDechetsTraites(CamionBleu* camion);
	void depotDechetsTraites(CamionBrun* camion);
	friend ostream& operator<<(ostream& out, const Depot& depot);


	~Depot();

private:
	int totalDTRecyclable;
	int totalDTNonRecyclable;
	int totalDTCompostable;



};

