#include "PosteFM.h"

// affectation du pointeur de fonction (doit �tre fait une seule fois)
pf espaceHertzien = &PosteFM::antennePhysique;

// initialisation de la liste chain�e des messages
ListeChainee<MSG> PosteFM::messages;


// constructeur
PosteFM::PosteFM(int* multiplexeur, int taille, string nomUtilisateur)
{
	this->multiplexeur = multiplexeur;
	this->nomUtilisateur = nomUtilisateur;
	this->taille = taille;
	this->currentMessage = 0;
}

// destructeur
PosteFM::~PosteFM(void)
{
	cout << "liberation de canaux d'ecoutes" << endl;
	delete[] multiplexeur;
}

// m�thode d'�coute des messages radios re�us
void PosteFM::ecouter(void)
{
	// nombre de message de la liste chain�e
	int nbMessage = PosteFM::messages.size();
	// parcourt des messages � partir de l'indice courant du poste FM (ie derni�re lecture des messages)
	for (int i = this->currentMessage; i < nbMessage; ++i) {
		const MSG msg = PosteFM::messages.get(i);
		// parcourt la liste des �metteur radio
		for (int j = 0; j < this->taille; ++j)
		{
			// test si l'�metteur radio fait parti de ceux que l'on �coute
			if (msg.multiplexeur == this->multiplexeur[j])
			{
				cout << "Je suis le poste de : " << this->nomUtilisateur << endl;
				cout << "\tstation= " << msg.multiplexeur << ", message= " << msg.data << endl;
			}
		}
	}

	// stockage de l'index courant de la liste chain�e
	// ceci afin de ne pas relire tous les messages depuis le d�but
	// -> propre � une instance de PosteFM
	this->currentMessage = nbMessage;
}

// r�ception des messages physiques => stockage dans une liste cha�n�e
void PosteFM::antennePhysique(MSG* signal)
{
	// ajout du message dans la liste chain�e
	PosteFM::messages.add(*signal);
	// lib�ration du message hertzien (il est stock� par valeur dans les noeuds de la liste chain�es)
	delete signal;
}