#pragma once
#include<string>
using namespace std;
#include"Compteur.h"

#include"OperationTraitement.h"

class CreationDechetTraiteNonRecylable :public OperationTraitement
{
public:
	
	CreationDechetTraiteNonRecylable(UsineTraitement* usineTraitement);
	CreationDechetTraiteNonRecylable();
	bool effectuerOperation(Dechet* dechet);
	~CreationDechetTraiteNonRecylable();

private:

};

