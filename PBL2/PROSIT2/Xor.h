#pragma once

#include <string>

using namespace std;

namespace CryptoComponents
{
	// Classe permettant de crypter un message en utilisant xOR
	class Xor
	{
	public:
		// Retourne un message crypter/decrypter en fonction d'un mot de passe
		string encryptDecrypt(const string& chaine, const string& psw);
	};
}