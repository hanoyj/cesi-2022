// EX3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "CL_svc_T1.h"
#include "CL_svc_T2.h"

int main()
{
	//1
	CL_svc_T1* svcT1 = new CL_svc_T1();
	//4
	CL_cmp_C* oC = new CL_cmp_C();
	//5
	CL_svc_T2* svcT2 = new CL_svc_T2(oC);

	//6
	svcT1->svc_T1_S1();
	//12
	svcT2->svc_T2_S1();

	// Libération des ressources
	delete svcT1;
	delete svcT2;
	delete oC;

	return 0;
}
