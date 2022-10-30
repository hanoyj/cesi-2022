#pragma once

#include "CLfacture.h"

namespace NS_Services
{
	class ServiceFichier
	{
	private:
		NS_Composants::CLfacture* facture;

	public:
		ServiceFichier();
		~ServiceFichier();

		void imprimerFacture(double montantHT, double montantTVA, double montantTTC);
	};
}