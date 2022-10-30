#include "ServiceCalcul.h"

using namespace NS_Services;

ServiceCalcul::ServiceCalcul()
{
	this->addition = new NS_Composants::CLaddition();
	this->tva = new NS_Composants::CLtva();
	this->grilleCouts[0] = 0;
	this->grilleCouts[1] = 0;
	this->grilleCouts[2] = 0;
}

ServiceCalcul::~ServiceCalcul()
{
	delete this->addition;
	delete this->tva;
}


double* ServiceCalcul::calculerMontantTTC(double* montantsHT, int taille)
{
	double montantTotalHT = this->addition->addition(montantsHT, taille);
	double montantTotalTTC = this->tva->calculTVA(montantTotalHT);
	double montantTVA = montantTotalTTC - montantTotalHT;

	this->grilleCouts[0] = montantTotalHT; 
	this->grilleCouts[1] = montantTVA; 
	this->grilleCouts[2] = montantTotalTTC;

	return this->grilleCouts;
}