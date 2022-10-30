#include "CLGestionCrypt.h"

using namespace CryptoServices;
using namespace CryptoComponents;

CLGestionCrypt::CLGestionCrypt()
{
	this->crypt1 = new CLCryptN1();
	this->crypt2 = new CLCryptN2();
	this->fichier = new CLFichier();
}

CLGestionCrypt::~CLGestionCrypt()
{
	delete this->crypt1;
	delete this->crypt2;
	delete this->fichier;
}


string CLGestionCrypt::cryptN1(const string& pathSource, const string& pathDestination)
{
	string message = this->fichier->read(pathSource);
	message = this->crypt1->getCrypt(message);
	this->fichier->write(message, pathDestination);

	return message;
}

string CLGestionCrypt::cryptN2(const string& pathSource, const string& pathDestination, const string& psw)
{
	string message = this->fichier->read(pathSource);
	message = this->crypt2->get(message, psw);
	this->fichier->writeBIN(message, pathDestination);
	
	return message;
}

string CLGestionCrypt::cryptN3(const string& pathSource, const string& pathDestination, const string& psw)
{
	string message = this->fichier->read(pathSource);
	message = this->crypt1->getCrypt(message);
	message = this->crypt2->get(message, psw);
	this->fichier->writeBIN(message, pathDestination);

	return message;
}

string CLGestionCrypt::deCryptN1(const string& pathSource, const string& pathDestination)
{
	string message = this->fichier->read(pathSource);
	message = this->crypt1->getClear(message);
	this->fichier->write(message, pathDestination);

	return message;
}

string CLGestionCrypt::deCryptN2(const string& pathSource, const string& pathDestination, const string& psw)
{
	string message = this->fichier->readBIN(pathSource);
	message = this->crypt2->get(message, psw);
	this->fichier->write(message, pathDestination);
	
	return message;
}

string CLGestionCrypt::deCryptN3(const string& pathSource, const string& pathDestination, const string& psw)
{
	string message = this->fichier->readBIN(pathSource);
	message = this->crypt2->get(message, psw);
	message = this->crypt1->getClear(message);
	this->fichier->write(message, pathDestination);

	return message;
}