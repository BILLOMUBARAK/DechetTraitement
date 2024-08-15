#include "Operation1.h"

Operation1::Operation1(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse): 
    Operation(operationSuivanteTrue, operationSuivanteFalse) 
{

}

Operation1::Operation1()
{
    Compteur::ajouterConstructeur();

}



bool Operation1::effectuerOperation(Dechet* dechet)
{
    if (dechet->estRigide() || dechet->estEnStyromousse()) {
        return true;
    }
    else
        return false;
}

Operation1::~Operation1()
{
    Compteur::ajouterDestructeur();

}


