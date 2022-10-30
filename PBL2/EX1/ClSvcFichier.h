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
	string message;
	ifstream fIn;
	ofstream fOut;

public:
	// Fonction pour ecrire un message dans un fichier
	void ecrire(const string& text, const string& path);
	// Fonction pour lire un message à partir d'un fichier
	string lire(const string& path);
};