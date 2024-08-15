#pragma once
#include<string>
using namespace std;

#include"CamionBrun.h"
#include"CamionVert.h"
#include"CamionBleu.h"
#include"Depot.h"
#include"sequenceOperations.h"
#include"Compteur.h"
#include"ChargementDechet.h"


class UsineTraitement
{
public:

	UsineTraitement();
	class Log
	{
	public:
		Log();
		static void i(string info);
		static void i(const Dechet& dechet);
		static void i(const Depot& depot);

		~Log();


	private:

	};
	void chargerOperations(sequenceOperations* sequenceOperations) {	Log::i("CHARGEMENT DES OPERATIONS");	this->sequenceOperations = sequenceOperations;};
	void demarrerTraitements(ChargementDechet* chargement);
	void preOperation();
	void postOperation();
	void creerDechetTraiteRecylable(Dechet* dechet);
	void creerDechetTraiteNonRecylable(Dechet* dechet);
	void creerDechetTraiteCompostable(Dechet* dechet);
	void traiterDechet(Dechet* dechet);
	~UsineTraitement();
	


private:
	
	sequenceOperations* sequenceOperations;
	Depot depot;
	CamionBleu* CamionBleu;
	CamionVert* CamionVert;
	CamionBrun* CamionBrun;
};

