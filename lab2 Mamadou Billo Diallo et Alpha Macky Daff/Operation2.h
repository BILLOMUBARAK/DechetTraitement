#pragma once
#pragma once
#include<string>
using namespace std;
#include"Operation.h"
#include"Compteur.h"


class Operation2 : public Operation
{
public:
	Operation2(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	Operation2();
	bool effectuerOperation(Dechet* dechet);

	~Operation2();

private:

};

