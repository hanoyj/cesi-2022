#pragma once

#include "ServiceCalcul.h"
#include "ServiceFichier.h"

namespace NS_Clients
{
	class Ihm
	{
	public:
		Ihm();
		~Ihm();

		void run();

	private:
		NS_Services::ServiceCalcul* calcul;
		NS_Services::ServiceFichier* fichier;
	};
}