#pragma once

#pragma once
#include<string>
using namespace std;
#include"Operation.h"
#include"Compteur.h"


class Operation5 :public Operation
{
public:
	Operation5(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	Operation5();
	bool effectuerOperation(Dechet* dechet);

	~Operation5();

private:

};
