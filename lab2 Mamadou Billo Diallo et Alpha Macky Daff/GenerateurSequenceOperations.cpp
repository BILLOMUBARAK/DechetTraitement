#include "GenerateurSequenceOperations.h"
#include"UsineTraitement.h"
#include"CreationDechetTraiteRecylable.h"
#include"CreationDechetTraiteNonRecylable.h"
#include"CreationDechetTraiteCompostable.h"
#include"Operation.h"
#include"Operation1.h"
#include"Operation2.h"
#include"Operation3.h"
#include"Operation4.h"
#include"Operation5.h"
#include"Operation6.h"
#include"Compteur.h"
#include"sequenceOperations.h"

GenerateurSequenceOperations::GenerateurSequenceOperations()
{
    Compteur::ajouterConstructeur();
}
GenerateurSequenceOperations::GenerateurSequenceOperations(const GenerateurSequenceOperations& generateurSequenceOperations)
{
    Compteur::ajouterConstructeurCopie();
}
GenerateurSequenceOperations::~GenerateurSequenceOperations()
{
    Compteur::ajouterDestructeur();
}

sequenceOperations* GenerateurSequenceOperations::genererSequence(int id, UsineTraitement* usineTraitement)
{
    switch (id)
    {
    case 1: return genererSequence1(1,usineTraitement);
    default:return genererSequence0(0,usineTraitement);
    }
}
sequenceOperations* GenerateurSequenceOperations::genererSequence0(int id, UsineTraitement* usineTraitement)
{

    CreationDechetTraiteRecylable* dtr = new CreationDechetTraiteRecylable(usineTraitement);
    CreationDechetTraiteNonRecylable* dtnr = new CreationDechetTraiteNonRecylable(usineTraitement);
    CreationDechetTraiteCompostable* dtc = new CreationDechetTraiteCompostable(usineTraitement);

    Operation* operation6 = new Operation6(dtr, dtnr);
    Operation* operation5 = new Operation5(dtc, dtnr);
    Operation* operation4 = new Operation4(dtc, operation5);
    Operation* operation3 = new Operation3(dtr, operation4);
    Operation* operation2 = new Operation2(operation6, operation3);
    Operation* operation1 = new Operation1(dtnr, operation2);

    sequenceOperations* SequenceOperations = new sequenceOperations();

    SequenceOperations
        ->ajouterOperation(dtr)
        ->ajouterOperation(dtnr)
        ->ajouterOperation(dtc)
        ->ajouterOperation(operation6)
        ->ajouterOperation(operation5)
        ->ajouterOperation(operation4)
        ->ajouterOperation(operation3)
        ->ajouterOperation(operation2)
        ->ajouterOperation(operation1)
        ->definirOperationDemarrage(operation1);
    return SequenceOperations;
}

sequenceOperations* GenerateurSequenceOperations::genererSequence1(int id, UsineTraitement* usineTraitement)
{

    CreationDechetTraiteRecylable* dtr = new CreationDechetTraiteRecylable(usineTraitement);
    CreationDechetTraiteNonRecylable* dtnr = new CreationDechetTraiteNonRecylable(usineTraitement);
    CreationDechetTraiteCompostable* dtc = new CreationDechetTraiteCompostable(usineTraitement);

    Operation* operation6 = new Operation6(dtr, dtnr);
    Operation* operation5 = new Operation5(dtc, dtnr);
    Operation* operation4 = new Operation4(dtc, operation5);
    Operation* operation3 = new Operation3(dtr, operation4);
    Operation* operation2 = new Operation2(operation6, operation3);
    Operation* operation1 = new Operation1(dtnr, operation2);

    sequenceOperations* SequenceOperations = new sequenceOperations();

    SequenceOperations
        ->ajouterOperation(dtr)
        ->ajouterOperation(dtnr)
        ->ajouterOperation(dtc)
        ->ajouterOperation(operation6)
        ->ajouterOperation(operation5)
        ->ajouterOperation(operation4)
        ->ajouterOperation(operation3)
        ->ajouterOperation(operation2)
        ->ajouterOperation(operation1)
        ->definirOperationDemarrage(operation1);
    return SequenceOperations;
}
