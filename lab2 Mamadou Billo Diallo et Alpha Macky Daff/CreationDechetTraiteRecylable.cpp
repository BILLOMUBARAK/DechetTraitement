#include "CreationDechetTraiteRecylable.h"

CreationDechetTraiteRecylable::CreationDechetTraiteRecylable(UsineTraitement* usineTraitement)
{
}

CreationDechetTraiteRecylable::CreationDechetTraiteRecylable()
{
	Compteur::ajouterConstructeur();

}

bool CreationDechetTraiteRecylable::effectuerOperation(Dechet* dechet)
{
	OperationTraitement::effectuerOperation(dechet);
	return true;
}

CreationDechetTraiteRecylable::~CreationDechetTraiteRecylable()
{
	Compteur::ajouterDestructeur();

}

