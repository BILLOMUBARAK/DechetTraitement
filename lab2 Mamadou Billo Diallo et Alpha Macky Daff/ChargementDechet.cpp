#include "ChargementDechet.h"




ChargementDechet::ChargementDechet()
{
    Compteur::ajouterConstructeur();

}
Dechet* ChargementDechet::getDechet()
{
    // recuperer dechet (front), supprimer de la liste, retourner dechet

    Dechet* d = listeDechets->front();
    listeDechets->pop_front();

    return d;
}


ChargementDechet::ChargementDechet(list<Dechet*>* listeDechets)
{
    this->listeDechets = listeDechets;

}
