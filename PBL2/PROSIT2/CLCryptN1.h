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
		// L'alphabet crypt�
		char alphabetCrypt[27];
	public:
		// Constructeur permettant d'initialiser les alphabets
		CLCryptN1();

		// Retourne un message d�cod�
		string getClear(const string& chaineCryptN1);

		// Retourne un message cod�
		string getCrypt(const string& chaineClearN1);
	};
}