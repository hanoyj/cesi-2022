#pragma once

#include <string>

using namespace std;

namespace CryptoComponents
{
	// Classe de gestion de lecture/ecriture de fichier
	class CLFichier
	{
	public:
		// Fonction permettant de lire un fichier texte
		string read(const string& path);
		// Fonction permettant d'ecrire dans un fichier texte
		void write(const string& text, const string& path);

		// Fonction permettant de lire un fichier binaire
		string readBIN(const string& path);
		// Fonction permettant d'ecrire dans un fichier binaire
		void writeBIN(const string& text, const string& path);
	};
}