#pragma once

#pragma once
#include<string>
using namespace std;
#include"Operation.h"
#include"Compteur.h"


class Operation4: public Operation
{
public:
	Operation4(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse);
	Operation4();
	bool effectuerOperation(Dechet* dechet);

	~Operation4();

private:

};
