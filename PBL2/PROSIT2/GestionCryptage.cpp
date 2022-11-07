#include "GestionCryptage.h"

using namespace CryptoServices;
using namespace CryptoComponents;

GestionCryptage::GestionCryptage()
{
	this->cesarCryptage = new Cesar();
	this->xorCryptage = new Xor();
	this->fichier = new GestionFichier();
}

GestionCryptage::~GestionCryptage()
{
	delete this->cesarCryptage;
	delete this->xorCryptage;
	delete this->fichier;
}


string GestionCryptage::encryptN1(const string& pathSource, const string& pathDestination)
{
	string message = this->fichier->read(pathSource);
	message = this->cesarCryptage->encrypt(message);
	this->fichier->write(message, pathDestination);

	return message;
}

string GestionCryptage::encryptN2(const string& pathSource, const string& pathDestination, const string& psw)
{
	string message = this->fichier->read(pathSource);
	message = this->xorCryptage->encryptDecrypt(message, psw);
	this->fichier->writeBIN(message, pathDestination);
	
	return message;
}

string GestionCryptage::encryptN3(const string& pathSource, const string& pathDestination, const string& psw)
{
	string message = this->fichier->read(pathSource);
	message = this->cesarCryptage->encrypt(message);
	message = this->xorCryptage->encryptDecrypt(message, psw);
	this->fichier->writeBIN(message, pathDestination);

	return message;
}

string GestionCryptage::decryptN1(const string& pathSource, const string& pathDestination)
{
	string message = this->fichier->read(pathSource);
	message = this->cesarCryptage->decrypt(message);
	this->fichier->write(message, pathDestination);

	return message;
}

string GestionCryptage::decryptN2(const string& pathSource, const string& pathDestination, const string& psw)
{
	string message = this->fichier->readBIN(pathSource);
	message = this->xorCryptage->encryptDecrypt(message, psw);
	this->fichier->write(message, pathDestination);
	
	return message;
}

string GestionCryptage::decryptN3(const string& pathSource, const string& pathDestination, const string& psw)
{
	string message = this->fichier->readBIN(pathSource);
	message = this->xorCryptage->encryptDecrypt(message, psw);
	message = this->cesarCryptage->decrypt(message);
	this->fichier->write(message, pathDestination);

	return message;
}