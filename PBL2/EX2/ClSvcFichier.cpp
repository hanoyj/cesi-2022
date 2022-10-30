#include "ClSvcFichier.h"

void ClSvcFichier::ecrire(const string& text, const string& path)
{
	// on ouvre le stream en ecriture
	fOut.open(path, std::ofstream::out);
	// on ajoute le texte
	fOut << text;
	// on ferme le stream
	fOut.close();
}

string ClSvcFichier::lire(const string& path)
{
	string line;
	this->message.clear();
	// on ouvre le stream de lecture
	fIn.open(path);
	while (getline(fIn, line))
	{
		this->message.append(line);
	}
	fIn.close();
	return this->message;
}

void ClSvcFichier::ecrireBIN(const string& text, const string& path, int buffLength)
{
	int i;
	const char* t = &text[0];
	const char* p = &path[0];
	// Ouverture du fichier en écriture binaire
	this->file = fopen(p, "w+b");
	for (i = 0; i < buffLength; i++)
	{
		fprintf(file, "%c", t[i]);
	}
	fclose(file);
}

string ClSvcFichier::lireBIN(const string& path, int buffLength)
{
	string s1;
	string s2;
	const char* p = &path[0];
	int i = 0;
	// Ouverture du fichier en lecture binaire
	file = fopen(p, "r+b");
	fseek(file, i, SEEK_SET);
	for (i = 0; i < buffLength; i++)
	{
		s1 = (char) fgetc(file);
		s2.append(s1);
	}
	fclose(file);
	return s2;
}