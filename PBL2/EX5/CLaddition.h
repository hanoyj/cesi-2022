#pragma once

// On utile un namespace pour ranger par catégorie nos classes
namespace NS_Composants
{
	// Cette classe est un composant pour les fonctions d'addition
	class CLaddition
	{
	public:
		// Retourne la somme d'un tableau de valeur
		double addition(double* prix, int taille);
	};
}