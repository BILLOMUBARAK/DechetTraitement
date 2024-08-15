#include "CreationDechetTraiteCompostable.h"

CreationDechetTraiteCompostable::CreationDechetTraiteCompostable(UsineTraitement* usineTraitement)
{
}

CreationDechetTraiteCompostable::CreationDechetTraiteCompostable()
{
	Compteur::ajouterConstructeur();

}

bool CreationDechetTraiteCompostable::effectuerOperation(Dechet* dechet)
{
    OperationTraitement::effectuerOperation(dechet);
    return true;
}
CreationDechetTraiteCompostable::~CreationDechetTraiteCompostable()
{
	Compteur::ajouterDestructeur();

}
