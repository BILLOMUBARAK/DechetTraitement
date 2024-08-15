#include "UsineTraitement.h"
#include "sequenceOperations.h"
#include "Compteur.h"
#include<iostream>
using namespace std;

UsineTraitement::UsineTraitement()
{
    Compteur::ajouterConstructeur();
    CamionBleu = depot.getCamionBleu();
    CamionVert = depot.getCamionVert();
    CamionBrun = depot.getCamionBrun();
}
UsineTraitement::UsineTraitement(const UsineTraitement&)
{
    Compteur::ajouterConstructeurCopie();
}
void UsineTraitement::Log::i(string info)
{
    cout << "INFO: " << info << endl;

}

void UsineTraitement::Log::i(const Dechet& dechet)
{


    cout << "INFO: Dechet " << dechet.getId() << " traité." << endl;
}

void UsineTraitement::Log::i(const Depot& depot)
{
    cout << "Dépôt : ";
    cout << depot << std::endl;
}



void UsineTraitement::preOperation()
{
    Log::i("PREOPERATION");
}
void UsineTraitement::postOperation()
{
    Log::i("POSTOPERATION");
}
void UsineTraitement::traiterDechet(Dechet* dechet)
{
    Operation* operationDemarrage = sequenceOperations->getOperationDemarrage();
    do
    {
        operationDemarrage = operationDemarrage->getOperationSuivante(
            operationDemarrage->effectuerOperation(dechet));
    } while (operationDemarrage != nullptr);
}




void UsineTraitement::demarrerTraitements(ChargementDechet* chargement)
{
    Dechet* dechet;
    while ((dechet = chargement->getDechet()) != NULL)
    {
        Log::i(*dechet);
        preOperation();
        traiterDechet(dechet);
        postOperation();
    }
    delete chargement;
    Log::i(depot);

}
void UsineTraitement::creerDechetTraiteRecylable(Dechet* dechet)
{
    Log::i("Ajout DTR : " + to_string(dechet->getId()));
    DechetTraiteRecyclable* dtr = new DechetTraiteRecyclable(dechet);
    if (!CamionBleu->ajouterDechet(dtr))
    {
        depot.depotDechetsTraites(CamionBleu);
        CamionBleu = depot.getCamionBleu();
        CamionBleu->ajouterDechet(dtr);

    }
}
void UsineTraitement::creerDechetTraiteNonRecylable(Dechet* dechet)
{
    Log::i("Ajout DTNR : " + to_string(dechet->getId()));
    DechetTraiteNonRecyclable* dtnr = new DechetTraiteNonRecyclable(dechet);
    if (!CamionVert->ajouterDechet(dtnr))
    {
        depot.depotDechetsTraites(CamionVert);
        CamionVert = depot.getCamionVert();
        CamionVert->ajouterDechet(dtnr);
    }
}
void UsineTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{
    Log::i("Ajout DTC  : " + to_string(dechet->getId()));
    DechetTraiteCompostable* dtc = new DechetTraiteCompostable(dechet);
    if (!CamionBrun->ajouterDechet(dtc))
    {
        depot.depotDechetsTraites(CamionBrun);
        CamionBrun = depot.getCamionBrun();
        CamionBrun->ajouterDechet(dtc);
    }

}


UsineTraitement :: ~UsineTraitement()
{
    delete sequenceOperations;
    depot.depotDechetsTraites(CamionBleu);
    depot.depotDechetsTraites(CamionBrun);
    depot.depotDechetsTraites(CamionVert);
    Log::i(depot);

    Compteur::ajouterDestructeur();
}