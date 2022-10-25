#pragma once

class ListData
{
public:
	// Constructeur par d�faut
	ListData();
	// Constructeur avec premier valeur de la liste
	ListData(int premiereDonnee);
	// Destructeur
	~ListData();

	// Methodes
	// 
	// Ajout d'une donn�e dans la liste
	void ajouter(int data);
	// Calcul de la somme des donn�es
	int somme();
	// Calcul de la moyenne des donn�es
	double moyenne();
	// Calcul du min des donn�es
	int min();
	// Calcul du max des donn�es
	int max();
	// Calcul de l'espace de variation max
	int variationMax();
	// Lecture de la taille de la liste (nombre de donn�es)
	int taille();
	// Affichage des donn�es de la liste
	void afficher();

private:
	// Attributs
	int* liste;
	// Nombre d'�l�ments dans la liste
	int nombreDonnee;
};
