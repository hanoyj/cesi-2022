#pragma once

// On utile un namespace pour ranger par categorie nos classes
namespace NS_Composants
{
	// Cette classe est un composant reponsable des calculs de TVA
	class CLtva
	{
	private:
		// Valeur constante de la TVA appliqu�e
		const double TVA = 1.20;
	public:
		// Retourne la TVA d'un prix
		double calculTVA(double);
	};
}