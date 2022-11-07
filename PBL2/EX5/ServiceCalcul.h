#pragma once

#include "CLaddition.h"
#include "CLtva.h"

namespace NS_Services
{
	class ServiceCalcul
	{
	private:
		NS_Composants::CLaddition* addition;
		NS_Composants::CLtva* tva;
		double grilleCouts[3];

	public:
		ServiceCalcul();
		~ServiceCalcul();

		double* calculerMontantTTC(double* montantsHT, int taille);
	};
}