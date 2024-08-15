#include "OperationTraitement.h"

// Implémentation du constructeur sans paramètre
OperationTraitement::OperationTraitement()
{
    Compteur::ajouterConstructeur();
}

OperationTraitement::OperationTraitement(UsineTraitement* usineTraitement)
    : Operation(), usineTraitement(usineTraitement)
{
}


bool OperationTraitement::effectuerOperation(Dechet* dechet)
{
    return true;
}

OperationTraitement::~OperationTraitement()
{
    Compteur::ajouterDestructeur();

}

void OperationTraitement::creerDechetTraiteRecylable(Dechet* dechet)
{
    UsineTraitement* utR = new UsineTraitement;
    utR->creerDechetTraiteRecylable(dechet);

}

void OperationTraitement::creerDechetTraiteNonRecylable(Dechet* dechet)
{
    UsineTraitement* utNR = new UsineTraitement;

    utNR->creerDechetTraiteNonRecylable(dechet);

}

void OperationTraitement::creerDechetTraiteCompostable(Dechet* dechet)
{
    UsineTraitement* utC = new UsineTraitement;

    utC->creerDechetTraiteCompostable(dechet);

}