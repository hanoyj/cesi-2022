#pragma once

#include "CLCryptN1.h"
#include "CLCryptN2.h"
#include "CLFichier.h"
#include <string>

using namespace std;

namespace CryptoServices
{
	// Classe de gestion de cryptographie
	class CLGestionCrypt
	{
	private:
		// Permet d'acceder aux fonctions de cryptage de niveau 1
		CryptoComponents::CLCryptN1* crypt1;
		// Permet d'acceder aux fonctions de cryptage de niveau 2
		CryptoComponents::CLCryptN2* crypt2;
		// Permet d'acceder aux fonctions de gestion de fichier
		CryptoComponents::CLFichier* fichier;

	public:
		// Constructeur
		CLGestionCrypt();
		// Destructeur
		~CLGestionCrypt();

		// M�thode permettant de crypter en niveau 1
		string cryptN1(const string& pathSource, const string& pathDestination);
		// M�thode permettant de crypter en niveau 2
		string cryptN2(const string& pathSource, const string& pathDestination, const string& psw);
		// M�thode permettant de crypter en niveau 3
		string cryptN3(const string& pathSource, const string& pathDestination, const string& psw);

		// M�thode permettant de decrypter en niveau 1
		string deCryptN1(const string& pathSource, const string& pathDestination);
		// M�thode permettant de decrypter en niveau 2
		string deCryptN2(const string& pathSource, const string& pathDestination, const string& psw);
		// M�thode permettant de decrypter en niveau 3
		string deCryptN3(const string& pathSource, const string& pathDestination, const string& psw);
	};
}