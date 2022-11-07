#pragma once

#include <string>

using namespace std;

namespace CryptoClients
{
	// Classe permettant l'interaction avec un utilisateur
	class Ihm
	{
	private:
		// Affichage d'un entete
		static void header();
		// Affichage d'un menu
		static void menu();
		// Saisie des valeurs
		static void input(const string& pathSource, const string& pathDestination);

	public:
		// Méthode principale de traitement
		static void run();
	};
}