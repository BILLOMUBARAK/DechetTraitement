#include "Dechet.h"
#include<iostream>
using namespace std;



Dechet::Dechet() : Dechet(0, "", 0, "", CARTON, 0, true, true) {
    Compteur::ajouterConstructeur();
}
Dechet::Dechet(int poids, string description) : Dechet(poids, description, 0, "", CARTON, 0, true, true) {}

Dechet::Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStyromousse, bool rigide)
{
    this->id = idcourant++;
    setPoids(poids);
    setDescription(description);
    setType(type);
    setCouleur(couleur);
    this->materiel = materiel;
    setPurete(purete);
    this->styromousse = estEnStyromousse;
    this->rigide = rigide;
}

void Dechet::setPoids(int poids)
{
    if (poids <= 100 && poids >= 0)
        poids = poids;
    else poids = 0;
   
}

void Dechet::setDescription(string description)
{
    if (description.length() < 3) description = "???";
    else
        description = description;
}

void Dechet::setType(int type)
{
    if (type <= 7 && type >= 0)
        type = type;
    else
        type = 0;
    
}

void Dechet::setCouleur(string couleur)
{
    if (couleur == "brun" || couleur == "vert")
       couleur = couleur;
    else
        couleur = "inconnu";
}

void Dechet::setPurete(int purete)
{
    if (purete <= 100 && poids >= 1)
        purete = purete;
    else purete = 1;

}


 

ostream& operator<<(ostream& out, const Dechet& dechet)
{

    out << "Id\t: " << dechet.getId() << endl;
    out << "Description\t: " << dechet.getDescription() << endl;
    out << "Poids\t: " << dechet.getPoids() << endl;
    out << "Type\t: " << dechet.getType() << endl;
    out << "Couleur\t: " << dechet.getCouleur() << endl;
    out << "Materiel\t: " << dechet.getMateriel() << endl;
    out << "Purete\t: " << dechet.getPurete() << endl;
    out << "styromousse\t: " << dechet.estEnStyromousse() << endl;
    out << "rigide\t: " << dechet.estRigide() << endl;
    return out;
}


 