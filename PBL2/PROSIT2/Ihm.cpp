#include "Ihm.h"
#include "GestionCryptage.h"
#include <iostream>

using namespace CryptoClients;
using namespace std;

void Ihm::run()
{
	int choix;
	string pathSource;
	string pathDestination;
	string message;
	CryptoServices::GestionCryptage* cryptProcess = new CryptoServices::GestionCryptage();
	choix = 0;

	Ihm::header();
	do {
		Ihm::menu();

		cout << "Votre choix :" << endl;
		cin >> choix;

		if (choix == 9) {
			// On sort de la boucle au plus tôt
			break;
		}

		if (choix == 1)
		{
			input(pathSource, pathDestination);
			pathSource = "cryptN1.txt";
			pathDestination = "cryptN1-result.txt";
			
			message = cryptProcess->encryptN1(pathSource, pathDestination);
		}
		else if(choix == 2)
		{
			input(pathSource, pathDestination);
			pathSource = "cryptN2.txt";
			pathDestination = "cryptN2-result.txt";

			string psw;
			cout << "Quel est le mot de passe ?" << endl;
			cin >> psw;

			message = cryptProcess->encryptN2(pathSource, pathDestination, psw);
		}
		else if (choix == 3)
		{
			input(pathSource, pathDestination);
			pathSource = "cryptN3.txt";
			pathDestination = "cryptN3-result.txt";

			string psw;
			cout << "Quel est le mot de passe ?" << endl;
			cin >> psw;

			message = cryptProcess->encryptN3(pathSource, pathDestination, psw);
		}
		else if (choix == 4)
		{
			input(pathSource, pathDestination);
			pathSource = "cryptN1-result.txt";
			pathDestination = "decryptN1.txt";

			message = cryptProcess->decryptN1(pathSource, pathDestination);
		}
		else if (choix == 5)
		{
			input(pathSource, pathDestination);
			pathSource = "cryptN2-result.txt";
			pathDestination = "decryptN2.txt";

			string psw;
			cout << "Quel est le mot de passe ?" << endl;
			cin >> psw;

			message = cryptProcess->decryptN2(pathSource, pathDestination, psw);
		}
		else if (choix == 6)
		{
			input(pathSource, pathDestination);
			pathSource = "cryptN3-result.txt";
			pathDestination = "decryptN3.txt";
			
			string psw;
			cout << "Quel est le mot de passe ?" << endl;
			cin >> psw;

			message = cryptProcess->decryptN3(pathSource, pathDestination, psw);
		}

		if (choix != 9) 
		{ 
			cout << "Resultat de sortie de traitement : " << message << endl; 
			system("PAUSE"); 
			system("CLS"); 
		}
	} while (choix != 9);

	delete cryptProcess;
}


void Ihm::input(const string& pathSource, const string& pathDestination) 
{
	cout << "\nQuel est le fichier source ?" << endl;
	//cin >> pathSource;

	cout << "Quel est le fichier de destination ?" << endl;
	//cin >> pathDestination;
}

void Ihm::header()
{
	cout << "********************************************" << endl;
	cout << "** **" << endl;
	cout << "** CRYPTO PROGRAMME **" << endl;
	cout << "** **" << endl;
	cout << "***************** v1.0 *********************" << endl;
	cout << endl;
}

void Ihm::menu()
{
	cout << "(1) Crypter un fichier en niveau 1" << endl;
	cout << "(2) Crypter un fichier en niveau 2" << endl;
	cout << "(3) Crypter un fichier en niveau 3" << endl;
	cout << "(4) Derypter un fichier en niveau 1" << endl;
	cout << "(5) Derypter un fichier en niveau 2" << endl;
	cout << "(6) Derypter un fichier en niveau 3" << endl;
	cout << "(9) Quitter" << endl;
	cout << endl;
}