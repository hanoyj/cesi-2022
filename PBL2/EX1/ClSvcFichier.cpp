#include "ClSvcFichier.h"

void ClSvcFichier::ecrire(const string& text, const string& path)
{
	// Ouverture du fichier
	fOut.open(path, std::ofstream::out);
	fOut << text;
	fOut.close();
}

string ClSvcFichier::lire(const string& path)
{
	string line;
	this->message.clear();
	fIn.open(path);
	while (getline(fIn, line))
	{
		this->message.append(line);
	}
	fIn.close();
	return this->message;
}