#pragma once

#include <string>

using namespace std;

namespace CryptoComponents
{
	// Classe permettant de crypter un message en utilisant cesar
	class Cesar
	{
	private:
		// L'alphabet clair
		char alphabetClear[27];
		// L'alphabet crypté
		char alphabetCrypt[27];

	public:
		// Constructeur permettant d'initialiser les alphabets
		Cesar();

		// Retourne un message décodé
		string decrypt(const string& chaineCryptN1);

		// Retourne un message codé
		string encrypt(const string& chaineClearN1);
	};
}