#include "Operation.h"

Operation::Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse)
{
	this->operationSuivanteTrue;
	this->operationSuivanteFalse;

}

Operation::Operation()
{
	Compteur::ajouterConstructeur();

}

bool Operation::effectuerOperation(Dechet* dechet)
{
	return operationSuivanteTrue->effectuerOperation(dechet);
}

Operation* Operation::getOperationSuivante(bool choix)
{
	if (choix)
		return operationSuivanteTrue;
	else
		return operationSuivanteFalse;

}

Operation::~Operation()
{
	Compteur::ajouterDestructeur();

}

