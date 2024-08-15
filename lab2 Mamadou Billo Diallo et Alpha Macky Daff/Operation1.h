#pragma once
#include<string>
using namespace std;
#include"Operation.h"
#include"Compteur.h"


class Operation1 : public Operation
{
public:
	Operation1(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	Operation1();
	bool effectuerOperation(Dechet* dechet);

	~Operation1();

private:

};

