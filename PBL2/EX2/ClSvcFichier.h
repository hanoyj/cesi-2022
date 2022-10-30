#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
* Definition de la classe ClSvcFichier
*/
class ClSvcFichier
{
private:
	// Le message à lire
	string message;

	ifstream fIn;
	ofstream fOut;
	FILE* file;

public:
	// Fonction pour ecrire un message dans un fichier texte
	void ecrire(const string& text, const string& path);
	// Fonction pour lire un message à partir d'un fichier texte
	string lire(const string& path);

	// Fonction pour ecrire un message dans un fichier binaire
	void ecrireBIN(const string& text, const string& path, int buffLength);
	// Fonction pour ecrire un message à partir d'un fichier binaire
	string lireBIN(const string& path, int buffLength);
};
