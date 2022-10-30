#include "Etudiant.h"


Etudiant::Etudiant() 
{
	this->moyenne = 0;
}

Etudiant::Etudiant(string nom, int moyenne) {
	this->nom = nom;
	this->moyenne = moyenne;
}

Etudiant::Etudiant(const Etudiant& etudiant) 
{ 
	nom = etudiant.nom; 
	moyenne = etudiant.moyenne;
}


string Etudiant::getNom() { 
	return nom; 
}
void Etudiant::setNom(string nom)
{ 
	this->nom = nom;
}

int Etudiant::getMoyenne() 
{ 
	return moyenne; 
};
void Etudiant::setMoyenne(int moyenne) 
{ 
	this->moyenne = moyenne; 
}
