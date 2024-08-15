#pragma once

#pragma once
#include<string>
using namespace std;
#include"Operation.h"
#include"Compteur.h"


class Operation3 : public Operation
{
public:
	Operation3(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	Operation3();
	bool effectuerOperation(Dechet* dechet);

	~Operation3();

private:

};
