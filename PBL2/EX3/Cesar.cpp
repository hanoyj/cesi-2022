#include "Cesar.h"

Cesar::Cesar()
{
	// Initialisation de l'alphabet en clair
	int i = 0;
	int c = 'a';
	for (i = 0; i < 26; i++)
	{
		this->alphabetCL[i] = c;
		c++;
	}

	// Initialisation de l'alphabet crypté
	c = 'a';
	for (i = 0; i < 26; i++)
	{
		c++;
		this->alphabetCR[i] = c;
	}
	
	this->alphabetCL[26] = ' ';
	this->alphabetCR[26] = '*';
	this->alphabetCR[25] = 'a';
}

char Cesar::getCL(char cCR)
{
	int i;
	int c;
	for (i = 0; i < 27; i++)
	{
		if (cCR == this->alphabetCR[i])
		{
			c = this->alphabetCL[i];
			i = 27;
		}
	}
	return c;
}
char Cesar::getCR(char cCL)
{
	int i;
	int c;
	for (i = 0; i < 27; i++)
	{
		if (cCL == this->alphabetCL[i])
		{
			c = this->alphabetCR[i];
			i = 27;
		}
	}
	return c;
}