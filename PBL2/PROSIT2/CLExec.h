#pragma once

namespace CryptoClients
{
	// Classe permettant l'interaction avec un utilisateur
	class CLExec
	{
	public:
		// M�thode principale de traitement
		static void run();
		// Affichage d'un entete
		static void enTete();
		// Affichage d'un menu
		static void menu();
	};
}