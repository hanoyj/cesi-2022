#pragma once

#include "Etudiant.h"

class Promo
{
private:
	// Attributs privés
	// Liste des Etudiants
	Etudiant* etudiants;
	// Nombre d'étudiants
	int nbEtudiants;

public:
	// Contructeur par défaut
	Promo();
	// Destructeur
	~Promo();

	// Accesseur en lecture de l'attribut nbEtudiants
	int getNbEtudiants();

	// Insertion des données saisies par l’utilisateur 
	void inputNotesUtilisateur();
	// Affichage de la liste des étudiants et leurs noms
	void afficherEtudiants();

	// Enregistrement des données dans un fichier (le nom du fichier passe comme paramètre)
	void inputNotesAUFichier(string fileName);
	// Récupération des données à partir d’un fichier (le nom du fichier passe comme paramètre)
	void outputNotesDUFichier(string fileName);
};
