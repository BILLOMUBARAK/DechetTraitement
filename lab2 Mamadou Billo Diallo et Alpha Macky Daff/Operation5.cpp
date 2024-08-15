#include "Operation5.h"

Operation5::Operation5(Operation* operationSuivanteTrue, Operation* operationSuivanteFalse):
    Operation(operationSuivanteTrue, operationSuivanteFalse)

{
}

Operation5::Operation5()
{
    Compteur::ajouterConstructeur();

}

bool Operation5::effectuerOperation(Dechet* dechet)
{
    if (dechet->getDescription() ==  "Végétal Vert") {
        return true;
    }
    else
        return false;

}

Operation5::~Operation5()
{
    Compteur::ajouterDestructeur();

}


