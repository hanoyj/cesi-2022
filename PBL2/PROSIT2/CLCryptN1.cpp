#include "CLCryptN1.h"

using namespace CryptoComponents;

CLCryptN1::CLCryptN1()
{
	char c;
	c = 'a';
	for (int i = 0; i < 26; i++)
	{
		// On remplit le tableau avec l'alphabet classique
		this->alphabetClear[i] = c;
		c++;
	}
	c = 'a';
	for (int i = 0; i < 26; i++)
	{
		// On remplit le tableau avec l'alphabet decale
		c++;
		this->alphabetCrypt[i] = c;
	}
	this->alphabetClear[26] = ' ';
	this->alphabetCrypt[26] = '*';
	this->alphabetCrypt[25] = 'a';
}

string CLCryptN1::getClear(const string& chaineCryptN1)
{
	string reponse;
	string s;

	int tailleChaineCrypt = chaineCryptN1.length();
	int tailleAlphabetCrypt = 27;

	for (int i = 0; i < tailleChaineCrypt; i++)
	{
		for (int ii = 0; ii < tailleAlphabetCrypt; ii++)
		{
			if (chaineCryptN1[i] == this->alphabetCrypt[ii])
			{
				s = this->alphabetClear[ii];
				reponse.append(s);
			}
		}
	}
	return reponse;
}

string CLCryptN1::getCrypt(const string& chaineClearN1)
{
	string reponse;
	string s;

	int tailleChaineClearN1 = chaineClearN1.length();
	int tailleAlphabet = 27;
	for (int i = 0; i < tailleChaineClearN1; i++)
	{
		for (int ii = 0; ii < tailleAlphabet; ii++)
		{
			if (chaineClearN1[i] == this->alphabetClear[ii])
			{
				s = this->alphabetCrypt[ii];
				reponse.append(s);
			}
		}
	}
	return reponse;
}