#pragma once
#include<string>
using namespace std;
#include"Dechet.h"
#include"Operation.h"
#include"Compteur.h"

class Operation
{
public:
	Operation(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	bool effectuerOperation(Dechet* dechet);
	Operation* getOperationSuivante(bool choix);
	~Operation();

private:
	Operation* operationSuivanteTrue;
	Operation* operationSuivanteFalse;
protected:

	Operation() : Operation(operationSuivanteTrue = nullptr, operationSuivanteFalse = nullptr) {};
	
};
