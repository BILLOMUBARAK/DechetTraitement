#include"sequenceOperations.h"


sequenceOperations::sequenceOperations()
{
	Compteur::ajouterConstructeur();

	operationDemarrage = nullptr;
}

sequenceOperations* sequenceOperations::ajouterOperation(Operation* operation)
{
	if (listeOperations.empty())
		operationDemarrage = operation;
	listeOperations.push_back(operation);
	return this;
}
void sequenceOperations::definirOperationDemarrage(Operation* operation)
{
	listeOperations.push_front(operation);
	operationDemarrage = operation;
}
Operation* sequenceOperations::getOperationDemarrage()
{
	return operationDemarrage;
}

sequenceOperations::~sequenceOperations()
{
	Compteur::ajouterDestructeur();

}
