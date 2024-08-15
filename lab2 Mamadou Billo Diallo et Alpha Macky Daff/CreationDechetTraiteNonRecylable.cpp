#include "CreationDechetTraiteNonRecylable.h"

CreationDechetTraiteNonRecylable::CreationDechetTraiteNonRecylable(UsineTraitement* usineTraitement)
{
}

CreationDechetTraiteNonRecylable::CreationDechetTraiteNonRecylable()
{
	Compteur::ajouterConstructeur();

}

bool CreationDechetTraiteNonRecylable::effectuerOperation(Dechet* dechet)
{
	OperationTraitement::effectuerOperation(dechet);
	return true;
}

CreationDechetTraiteNonRecylable::~CreationDechetTraiteNonRecylable()
{
	Compteur::ajouterDestructeur();

}
