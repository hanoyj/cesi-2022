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
		void imprimerFacture(double, double, double);
	};
}