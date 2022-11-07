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
		// L'alphabet crypt�
		char alphabetCrypt[27];

	public:
		// Constructeur permettant d'initialiser les alphabets
		Cesar();

		// Retourne un message d�cod�
		string decrypt(const string& chaineCryptN1);

		// Retourne un message cod�
		string encrypt(const string& chaineClearN1);
	};
}