#include "Ihm.h"

#include <iostream>

using namespace NS_Clients;
using namespace std;

Ihm::Ihm()
{
	this->calcul = new NS_Services::ServiceCalcul();
	this->fichier = new NS_Services::ServiceFichier();
}

Ihm::~Ihm()
{
	delete this->calcul;
	delete this->fichier;
}


void Ihm::run()
{
	int nbArticle;
	int prix;

	cout << "Combien d'article(s) dans la commande ?" << endl;
	cin >> nbArticle;

	double* prixDesArticles = new double[nbArticle];
	for (int i = 0; i < nbArticle; i++)
	{
		cout << "Quel est le prix HT de l'article " << i + 1 << " ?" << endl;
		cin >> prix;
		prixDesArticles[i] = prix;
	}

	cout << "Nous allons proceder au calcul h.t. de la commande..." << endl;
	double* grille = this->calcul->calculerMontantTTC(prixDesArticles, nbArticle);
	cout << "Le montant TTC de la facture est de : " << grille[2] << " E" << endl;

	cout << "Nous allons proceder a l'impression de votre facture" << endl;
	this->fichier->imprimerFacture(grille[0], grille[1], grille[2]);
	cout << "Le traitement est termine" << endl;
}
