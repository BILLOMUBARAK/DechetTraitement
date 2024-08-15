#pragma once
#include<string>
using namespace std;
#include "Dechet.h"
#include "UQAC.h"
#include "BoiteCarton.h"
#include "BouteilleBiere.h"
#include "Chaise.h"
#include "DechetMalConcu.h"
#include "SacChips.h"
#include "QuelqueChose.h"
#include "FeuillePapier.h"
#include "PlanteVerte.h"
#include "VerreCafe.h"
#include "RestantNourriture.h"
#include "Compteur.h"

#include <list>

	class ChargementDechet: public Dechet
	{
	public:
		ChargementDechet(list<Dechet*> *listeDechets);
		ChargementDechet();
		Dechet* getDechet() ;  // recuperer dechet (front), supprimer de la liste, retourner dechet
		~ChargementDechet(){Compteur::ajouterDestructeur();};

	private:
		list<Dechet*>* listeDechets;
	};



