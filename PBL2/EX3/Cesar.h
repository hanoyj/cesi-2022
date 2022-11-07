#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
* Définition de la classe Cesar
*/
class Cesar
{
private:
	// Alphabet en clair
	char alphabetCL[27];
	// Alphabet crypté
	char alphabetCR[27];

public:
	// Constructeur de la classe
	Cesar();

	// Fonction permettant de récupérer la lettre en clair
	char getCL(char cCR);
	// Fonction permettant de récupérer la lettre cryptée
	char getCR(char cCL);
};