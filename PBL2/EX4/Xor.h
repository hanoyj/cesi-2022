#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
* Definition de la classe Xor
*/
class Xor
{
private:

public:
	// Constructeur de la classe
	Xor();

	// M�thode de chiffrement de type xOR
	char applyXOR(char c, char k);
};