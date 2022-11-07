#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
* D�finition de la classe Cesar
*/
class Cesar
{
private:
	// Alphabet en clair
	char alphabetCL[27];
	// Alphabet crypt�
	char alphabetCR[27];

public:
	// Constructeur de la classe
	Cesar();

	// Fonction permettant de r�cup�rer la lettre en clair
	char getCL(char cCR);
	// Fonction permettant de r�cup�rer la lettre crypt�e
	char getCR(char cCL);
};