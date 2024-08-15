#pragma once

#include<string>
#include"ChargementDechet.h"
using namespace std;
#include"Compteur.h"

class UQAC
{
public:
	UQAC();
	~UQAC();

	static ChargementDechet* getChargementDechets();

};

