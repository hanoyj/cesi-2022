#include "CLExec.h"
#include "CLGestionCrypt.h"
#include <iostream>

using namespace CryptoClients;
using namespace std;

void CLExec::run()
{
	int choix;
	string pathSource;
	string pathDestination;
	string message;
	CryptoServices::CLGestionCrypt* cryptProcess = new CryptoServices::CLGestionCrypt();
	choix = 0;

	CLExec::enTete();
	do {
		CLExec::menu();

		cout << "Votre choix :" << endl;
		cin >> choix;

		if (choix == 1)
		{
			cout << "\nQuel est le fichier source ?" << endl;
			pathSource = "cryptN1.txt";
			//cin >> pathSource;

			cout << "Quel est le fichier de destination ?" << endl;
			pathDestination = "cryptN1-result.txt";
			//cin >> pathDestination;

			message = cryptProcess->cryptN1(pathSource, pathDestination);
			cout << "\nFin du traitement" << endl;
		}
		else if(choix == 2)
		{
			string psw;

			cout << "\nQuel est le fichier source ?" << endl;
			pathSource = "cryptN2.txt";
			//cin >> pathSource;

			cout << "Quel est le fichier de destination ?" << endl;
			pathDestination = "cryptN2-result.txt";
			//cin >> pathDestination;

			cout << "Quel est le mot de passe ?" << endl;
			cin >> psw;

			message = cryptProcess->cryptN2(pathSource, pathDestination, psw);
			cout << "\nFin du traitement" << endl;
		}
		else if (choix == 3)
		{
			string psw;

			cout << "\nQuel est le fichier source ?" << endl;
			pathSource = "cryptN3.txt";
			//cin >> pathSource;

			cout << "Quel est le fichier de destination ?" << endl;
			pathDestination = "cryptN3-result.txt";
			//cin >> pathDestination;

			cout << "Quel est le mot de passe ?" << endl;
			cin >> psw;

			message = cryptProcess->cryptN3(pathSource, pathDestination, psw);
			cout << "\nFin du traitement" << endl;
		}
		else if (choix == 4)
		{
			cout << "\nQuel est le fichier source ?" << endl;
			pathSource = "cryptN1-result.txt";
			//cin >> pathSource;
			
			cout << "Quel est le fichier de destination ?" << endl;
			pathDestination = "decryptN1.txt";
			//cin >> pathDestination;

			message = cryptProcess->deCryptN1(pathSource, pathDestination);
			cout << "\nFin du traitement" << endl;
		}
		else if (choix == 5)
		{
			string psw;

			cout << "\nQuel est le fichier source ?" << endl;
			pathSource = "cryptN2-result.txt";
			//cin >> pathSource;

			cout << "Quel est le fichier de destination ?" << endl;
			pathDestination = "decryptN2.txt";
			//cin >> pathDestination;

			cout << "Quel est le mot de passe ?" << endl;
			cin >> psw;

			message = cryptProcess->deCryptN2(pathSource, pathDestination, psw);
			cout << "\nFin du traitement" << endl;
		}
		else if (choix == 6)
		{
			string psw;
			
			cout << "\nQuel est le fichier source ?" << endl;
			pathSource = "cryptN3-result.txt";
			//cin >> pathSource;

			cout << "Quel est le fichier de destination ?" << endl;
			pathDestination = "decryptN3.txt";
			//cin >> pathDestination;

			cout << "Quel est le mot de passe ?" << endl;
			cin >> psw;

			message = cryptProcess->deCryptN3(pathSource, pathDestination, psw);
			cout << "\nFin du traitement" << endl;
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

void CLExec::enTete()
{
	cout << "********************************************" << endl;
	cout << "** **" << endl;
	cout << "** CRYPTO PROGRAMME **" << endl;
	cout << "** **" << endl;
	cout << "***************** v1.0 *********************" << endl;
	cout << endl;
}

void CLExec::menu()
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