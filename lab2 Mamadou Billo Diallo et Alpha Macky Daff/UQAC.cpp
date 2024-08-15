#include "UQAC.h"
#include "Dechet.h"
UQAC::UQAC()
{
	Compteur::ajouterConstructeur();

}

UQAC::~UQAC()
{
	Compteur::ajouterDestructeur();
}

ChargementDechet* UQAC::getChargementDechets()
{
    list<Dechet*>* listeDechets = new list<Dechet*>();

    

    // ajoutons 5 fois chaque type de déchet à la liste
    for (int i = 0; i < 5; i++) {
        listeDechets->push_back(new BoiteCarton());
        listeDechets->push_back(new BouteilleBiere());
        listeDechets->push_back(new SacChips());
        listeDechets->push_back(new QuelqueChose());
        listeDechets->push_back(new Chaise());
        listeDechets->push_back(new RestantNourriture());
        listeDechets->push_back(new PlanteVerte());
        listeDechets->push_back(new FeuillePapier());
        listeDechets->push_back(new VerreCafe());
        listeDechets->push_back(new DechetMalConcu());


    }
        ChargementDechet* chargement = new  ChargementDechet(listeDechets);

	return chargement;
}
