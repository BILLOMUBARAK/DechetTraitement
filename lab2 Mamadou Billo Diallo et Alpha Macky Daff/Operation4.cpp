#include "Operation4.h"

Operation4::Operation4(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse):
	Operation(operationSuivanteTrue, operationSuivanteFalse)

{
}

Operation4::Operation4()
{
    Compteur::ajouterConstructeur();

}

bool Operation4::effectuerOperation(Dechet* dechet)
{

    if (dechet->getDescription()== "Nourriture Brune") {
        return true;
    }
    else
        return false;   
}

Operation4::~Operation4()
{
    Compteur::ajouterDestructeur();

}

