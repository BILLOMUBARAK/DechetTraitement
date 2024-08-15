#pragma once
#include<string>
using namespace std;
#include"Compteur.h"

#include"OperationTraitement.h"

class CreationDechetTraiteRecylable :public OperationTraitement
{
public:
	CreationDechetTraiteRecylable(UsineTraitement* usineTraitement);
	CreationDechetTraiteRecylable();
	bool effectuerOperation(Dechet* dechet);

	~CreationDechetTraiteRecylable();

private:

};
