#pragma once

class CLcalcul
{
private:
	int n;
	void ini(int);

	// Compteur du nombre d'instance d'object CLcalcul
	static int cpteObj;

public:
	// Constructeurs
	CLcalcul(void);
	CLcalcul(int);

	// M�thode calculant le carr�
	void carre();

	// Accesseurs
	void setN(int);
	int getN(void);
};

