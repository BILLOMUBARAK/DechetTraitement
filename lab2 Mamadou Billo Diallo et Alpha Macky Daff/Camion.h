 #pragma once
#include<string>
using namespace std;
#include "DechetTraite.h"
#include"Compteur.h"

#include<stack>

class Camion
{
public:
	Camion(int maxCapacite);
	Camion();
	bool ajouterDechet(DechetTraite* dechetTraite);
	int viderCamion();
	~Camion();

private:
	int maxCapacite;
	int Capacite=0;
	stack<DechetTraite*> pileDechets;

};
