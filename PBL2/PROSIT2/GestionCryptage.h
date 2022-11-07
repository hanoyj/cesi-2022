#pragma once

#include "Cesar.h"
#include "Xor.h"
#include "GestionFichier.h"
#include <string>

using namespace std;

namespace CryptoServices
{
	// Classe de gestion de cryptographie
	class GestionCryptage
	{
	private:
		// Permet d'acceder aux fonctions de cryptage de niveau 1
		CryptoComponents::Cesar* cesarCryptage;
		// Permet d'acceder aux fonctions de cryptage de niveau 2
		CryptoComponents::Xor* xorCryptage;
		// Permet d'acceder aux fonctions de gestion de fichier
		CryptoComponents::GestionFichier* fichier;

	public:
		// Constructeur
		GestionCryptage();
		// Destructeur
		~GestionCryptage();

		// Méthode permettant de crypter en niveau 1
		string encryptN1(const string& pathSource, const string& pathDestination);
		// Méthode permettant de crypter en niveau 2
		string encryptN2(const string& pathSource, const string& pathDestination, const string& psw);
		// Méthode permettant de crypter en niveau 3
		string encryptN3(const string& pathSource, const string& pathDestination, const string& psw);

		// Méthode permettant de decrypter en niveau 1
		string decryptN1(const string& pathSource, const string& pathDestination);
		// Méthode permettant de decrypter en niveau 2
		string decryptN2(const string& pathSource, const string& pathDestination, const string& psw);
		// Méthode permettant de decrypter en niveau 3
		string decryptN3(const string& pathSource, const string& pathDestination, const string& psw);
	};
}