#include "CLcorbeille2.h"

void CLcorbeille2::ecrire(string text, string path)
{
	// on ouvre le stream en ecriture
	f_out.open(path, std::ofstream::out);
	// on ajoute le texte
	f_out << text;
	// on ferme le stream
	f_out.close();
}

string CLcorbeille2::lire(string path)
{
	string line;
	this->message.clear();
	// on ouvre le stream de lecture
	f_in.open(path);
	while (getline(f_in, line))
	{
		this->message.append(line);
	}
	f_in.close();
	return this->message;
}

void CLcorbeille2::ecrireBIN(string text, string path, int buffLenght)
{
	int i;
	const char* t = &text[0];
	const char* p = &path[0];
	this->file = fopen(p, "w+b");
	for (i = 0; i < buffLenght; i++)
	{
		fprintf(file, "%c", t[i]);
	}
	fclose(file);
}

string CLcorbeille2::lireBIN(string path, int buffLenght)
{
	int i;
	string s1;
	string s2;
	const char* p = &path[0];
	i = 0;
	file = fopen(p, "r+b");
	fseek(file, i, SEEK_SET);
	for (i = 0; i < buffLenght; i++)
	{
		s1 = (char)fgetc(file);
		s2.append(s1);
	}
	fclose(file);
	return s2;
}