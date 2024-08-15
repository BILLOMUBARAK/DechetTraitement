#pragma once

#pragma once
#include<string>
using namespace std;
#include"Operation.h"
#include"Compteur.h"


class Operation6 :public Operation
{
public:
	Operation6(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	Operation6();
	bool effectuerOperation(Dechet* dechet);

	~Operation6();

private:

};
