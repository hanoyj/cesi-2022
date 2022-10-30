#pragma once

#include "Etudiant.h"

class Promo
{
private:
	// Attributs priv�s
	// Liste des Etudiants
	Etudiant* etudiants;
	// Nombre d'�tudiants
	int nbEtudiants;

public:
	// Contructeur par d�faut
	Promo();
	// Destructeur
	~Promo();

	// Accesseur en lecture de l'attribut nbEtudiants
	int getNbEtudiants();

	// Insertion des donn�es saisies par l�utilisateur 
	void inputNotesUtilisateur();
	// Affichage de la liste des �tudiants et leurs noms
	void afficherEtudiants();

	// Enregistrement des donn�es dans un fichier (le nom du fichier passe comme param�tre)
	void inputNotesAUFichier(string fileName);
	// R�cup�ration des donn�es � partir d�un fichier (le nom du fichier passe comme param�tre)
	void outputNotesDUFichier(string fileName);
};
