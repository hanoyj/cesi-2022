#pragma once

// On utile un namespace pour ranger par cat�gorie nos classes
namespace NS_Composants
{
	// Cette classe est un composant pour l'impression d'une facture
	class CLfacture
	{
	public:
		// Stocke dans un fichier les �l�ments d'une facture
		void imprimerFacture(double montantHT, double montantTVA, double montantTTC);
	};
}