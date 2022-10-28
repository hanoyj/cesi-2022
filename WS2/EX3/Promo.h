#pragma once

#include "Etudiant.h"

class Promo
{
private:
	Etudiant* etudiants;
	int nbEtudiants;

public:
	Promo();

	int getNbEtudiants();
	void InputNotesUtilisateur();
	void afficherEtudiants();
	void InputNotesAUFichier(string fileName);
	void OutputNotesDUFichier(string fileName);
};
