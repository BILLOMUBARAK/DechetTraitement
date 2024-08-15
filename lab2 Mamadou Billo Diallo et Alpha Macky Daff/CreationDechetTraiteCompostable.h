#pragma once
#include<string>
using namespace std;
#include"Compteur.h"

#include"OperationTraitement.h"

class CreationDechetTraiteCompostable: public OperationTraitement
{
public:

	CreationDechetTraiteCompostable(UsineTraitement* usineTraitement);
	CreationDechetTraiteCompostable();
	bool effectuerOperation(Dechet* dechet);
	~CreationDechetTraiteCompostable();

private:

};

