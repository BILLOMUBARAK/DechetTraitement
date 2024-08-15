#include "Operation2.h"

Operation2::Operation2(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse):
    Operation(operationSuivanteTrue, operationSuivanteFalse)
{
}

Operation2::Operation2()
{
    Compteur::ajouterConstructeur();

}

bool Operation2::effectuerOperation(Dechet* dechet)
{

    if (dechet->getMateriel() == PLASTIQUE) {
        return true;
    }
    else
        return false;
}

Operation2::~Operation2()
{
    Compteur::ajouterDestructeur();

}

