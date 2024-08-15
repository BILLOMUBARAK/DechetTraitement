#include "Depot.h"

#include<iostream>
using namespace std;

Depot::Depot()
{
    Compteur::ajouterConstructeur();

    totalDTRecyclable = 0;
    totalDTNonRecyclable = 0;
    totalDTCompostable = 0;
}

CamionBleu* Depot::getCamionBleu()
{
    CamionBleu* camionBleu = new CamionBleu();
    return camionBleu;
}

CamionVert* Depot::getCamionVert()
{
    CamionVert* camionVert = new CamionVert();
    return camionVert;
}

CamionBrun* Depot::getCamionBrun()
{
    CamionBrun* camionBrun = new CamionBrun();
    return camionBrun;
}

void Depot::depotDechetsTraites(CamionVert* camion)
{
    int poidsDechets = camion->Camion::viderCamion();
    totalDTNonRecyclable += poidsDechets;
    delete camion;
}



void Depot::depotDechetsTraites(CamionBleu* camion)
{
    int poidsDechets = camion->Camion::viderCamion();
    totalDTNonRecyclable += poidsDechets;
    delete camion;
}

void Depot::depotDechetsTraites(CamionBrun* camion)
{
    int poidsDechets = camion->Camion::viderCamion();
    totalDTNonRecyclable += poidsDechets;
    delete camion;
}

Depot::~Depot()
{
    Compteur::ajouterDestructeur();

}

ostream& operator<<(ostream& out, const Depot& depot)

{
    out << "Total déchets recyclables : " << depot.totalDTRecyclable << endl;
    out << "Total déchets non recyclables : " << depot.totalDTNonRecyclable << endl;
    out << "Total déchets compostables : " << depot.totalDTCompostable << endl;
    return out;
}



