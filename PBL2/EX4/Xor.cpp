#include "Xor.h"

Xor::Xor()
{
}

char Xor::applyXOR(char c, char k)
{
	char cX;
	cX = c ^ k;
	return cX;
}