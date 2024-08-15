#pragma once
#include<string>
using namespace std;

#include"Operation.h"
#include "UsineTraitement.h"
#include"Compteur.h"


class OperationTraitement :public Operation
{
public:
	OperationTraitement(UsineTraitement* usineTraitement);
	OperationTraitement();
	bool effectuerOperation(Dechet* dechet);
	friend class UsineTraitement;


	~OperationTraitement();

private:
	UsineTraitement* usineTraitement;

protected:
	void creerDechetTraiteRecylable(Dechet* dechet);
	void creerDechetTraiteNonRecylable(Dechet* dechet);
	void creerDechetTraiteCompostable(Dechet* dechet); 

	
};
