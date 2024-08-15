#pragma once
#include<string>
using namespace std;

#include "sequenceOperations.h"
#include "UsineTraitement.h"

class GenerateurSequenceOperations
{
public:
	GenerateurSequenceOperations();	
	sequenceOperations* genererSequence(int id, UsineTraitement* usineTraitement);

	~GenerateurSequenceOperations();

private:
	sequenceOperations* genererSequence0(int id, UsineTraitement* usineTraitement);
	sequenceOperations* genererSequence1(int id, UsineTraitement* usineTraitement);

};
