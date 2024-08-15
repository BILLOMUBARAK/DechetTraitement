#pragma once
#include<string>
using namespace std;
#include"Compteur.h"

#include"Operation.h"
#include<list>

class sequenceOperations
{
public:
	sequenceOperations();
	sequenceOperations* ajouterOperation(Operation* operation);
	void definirOperationDemarrage(Operation* operation);
	Operation* getOperationDemarrage();

	~sequenceOperations();

private:
	list<Operation*>listeOperations;
	Operation* operationDemarrage;
};

