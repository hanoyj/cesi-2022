#pragma once

namespace CryptoClients
{
	// Classe permettant l'interaction avec un utilisateur
	class CLExec
	{
	private:
		// Affichage d'un entete
		static void enTete();
		// Affichage d'un menu
		static void menu();

	public:
		// Méthode principale de traitement
		static void run();
	};
}