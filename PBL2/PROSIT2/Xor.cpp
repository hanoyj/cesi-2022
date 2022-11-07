#include "Xor.h"

using namespace CryptoComponents;

string Xor::encryptDecrypt(const string& chaine, const string& psw)
{
	string s;
	char cX;
	string reponse;

	int tailleChaine = chaine.length();
	int taillePsw = psw.length();
	int ii = 0;
	for (int i = 0; i < tailleChaine; i++)
	{
		cX = chaine[i] ^ psw[ii];
		s = cX;
		reponse.append(s);
		if (ii == taillePsw - 1)
		{
			ii = 0;
		}
		else
		{
			ii++;
		}
	}
	return reponse;
}