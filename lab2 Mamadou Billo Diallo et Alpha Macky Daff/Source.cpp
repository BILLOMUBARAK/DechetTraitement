/*
Nom et prenom: Mamadou Billo Diallo(DIAM02120004)/ Alpha Macky Daff(DAFA11060002)

*/




#include <iostream>
#include<string>
#include"Dechet.h"
#include"BouteilleBiere.h"
#include"BoiteCarton.h"
#include"DechetMalConcu.h"
#include"Chaise.h"
#include"FeuillePapier.h"
#include"PlanteVerte.h"
#include"QuelqueChose.h"
#include"RestantNourriture.h"
#include"SacChips.h"
#include"VerreCafe.h"
#include "ChargementDechet.h"
#include"UQAC.h"
#include "UsineTraitement.h"
#include "GenerateurSequenceOperations.h"
#include"Compteur.h"
using namespace std;
void section1(void);
void section2et3(void);
void laboratoire2(void);
void afficherInformation(void);

int main()
{
	section1();
	section2et3();

	system("PAUSE");
	return 0;
}

void section1(void)
{
	cout << "SECTION 1 " << endl
		<< " CHARGEMENT DES OPERATIONS " << endl << endl;

	//creation des Dechets
	Dechet* dc = new Dechet();
	BoiteCarton* bc = new BoiteCarton();
	BouteilleBiere* bb = new BouteilleBiere();
	Chaise* ch = new Chaise();
	DechetMalConcu* dm = new DechetMalConcu();
	FeuillePapier* fp = new FeuillePapier();
	PlanteVerte* pv = new PlanteVerte();
	QuelqueChose* qc = new QuelqueChose();
	RestantNourriture* rn = new RestantNourriture();
	SacChips* ss = new SacChips();
	VerreCafe* vc = new VerreCafe();

	cout << "Destruction de tous nos pointeurs" << endl;
	delete bc;
	delete bb;
	delete ch;
	delete dm;
	delete fp;
	delete pv;
	delete qc;
	delete rn;
	delete ss;
	delete vc;
}
void section2et3(void)
{
	cout << "SECTION2" << endl
		<< "Ne rien faire pour l'instant.Passons aux autres SECTIONS et on reviendra sur le 2par la suite..." << endl;
	laboratoire2();
	afficherInformation();
}

void laboratoire2()
{
	ChargementDechet* chargement = UQAC::getChargementDechets();
	UsineTraitement* usineTraitement = new UsineTraitement();
	GenerateurSequenceOperations gso;
	usineTraitement->chargerOperations(gso.genererSequence(0, usineTraitement));
	usineTraitement->demarrerTraitements(chargement);
	delete usineTraitement;
}


void afficherInformation()
{
	cout << endl << endl;
	cout << endl << "___________________________" << endl
		<< "NB constructeurs             :" << Compteur::getNbConstructeur() << endl
		<< "NB constructeurs copie       :" << Compteur::getNbConstructeurCopie() << endl
		<< "NB destructeurs              :" << Compteur::getNbDestructeur() << endl;
	cin.get();

}


