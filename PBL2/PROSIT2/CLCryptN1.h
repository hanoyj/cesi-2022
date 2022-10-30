#pragma once

#include <string>

using namespace std;

namespace CryptoComponents
{
	// Classe permettant de crypter un message en utilisant cesar
	class CLCryptN1
	{
	private:
		// L'alphabet clair
		char alphabetClear[27];
		// L'alphabet crypté
		char alphabetCrypt[27];
	public:
		// Constructeur permettant d'initialiser les alphabets
		CLCryptN1();

		// Retourne un message décodé
		string getClear(const string& chaineCryptN1);

		// Retourne un message codé
		string getCrypt(const string& chaineClearN1);
	};
}