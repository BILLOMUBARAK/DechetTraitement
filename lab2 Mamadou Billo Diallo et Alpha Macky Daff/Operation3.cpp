#include "Operation3.h"


Operation3::Operation3(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse):
    Operation(operationSuivanteTrue, operationSuivanteFalse)

{
}

Operation3::Operation3()
{
    Compteur::ajouterConstructeur();

}

bool Operation3::effectuerOperation(Dechet* dechet)
{
    if (dechet->getMateriel() == PAPIER || dechet->getMateriel() == CARTON) {
        return true;
    }
    else
        return false;
}

Operation3::~Operation3()
{
    Compteur::ajouterDestructeur();

}


