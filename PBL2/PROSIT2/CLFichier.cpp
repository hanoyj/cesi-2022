#include "CLFichier.h"
#include <iostream>
#include <fstream>

using namespace CryptoComponents;
using namespace std;

string CLFichier::read(const string& path) 
{
	string f;
	string x;
	ifstream flux(path);
	while (getline(flux, f))
	{
		x.append(f);
	}
	flux.close();
	return x;
}

void CLFichier::write(const string& text, const string& path)
{
	ofstream flux(path);
	flux << text;
	flux.close();
}

void CLFichier::writeBIN(const string& text, const string& path)
{
	const char* t = &text[0];
	int buffL = text.length();
	ofstream flux(path, ios::binary);
	for (int i = 0; i < buffL; i++)
	{
		flux << t[i];
	}
	flux.close();
}

string CLFichier::readBIN(const string& path)
{
	string f;
	string x;
	ifstream flux(path, ios::binary);
	while (getline(flux, f))
	{
		x.append(f);
	}
	flux.close();
	return x;
}
