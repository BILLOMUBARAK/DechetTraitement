#pragma once
#include<string>
#include "Materiel.h"
#include"Compteur.h"


using namespace std;



class Dechet
{
public:
	int getPoids()const { return poids; };
	 int getId() const { return id; };
	 string getDescription() const { return description; };
	 int getType() const { return type; };
	 string getCouleur()const { return couleur; };
	 Materiel getMateriel() const { return materiel; };
	 int getPurete() const { return purete; };
	 bool estEnStyromousse()const { return styromousse; }
	 bool estRigide()const { return rigide; };

	Dechet();
	void setPoids(int poids);
	void setDescription(string description);
	void setType(int type);
	void setCouleur(string couleur);
	void setPurete(int purete);
	friend ostream& operator<<(ostream& out, const Dechet& dechet);
private:
	int poids;
	int id;
	static int idcourant;
	string description;
	int type;
	string couleur;
	Materiel materiel;
	int purete;
	bool styromousse;
	bool rigide;
	int idCourant;

protected:
	Dechet(int poids, string description, int type, string couleur, Materiel materiel, int purete, bool estEnStyromousse, bool rigide);
	Dechet(int poids, string description);
};



