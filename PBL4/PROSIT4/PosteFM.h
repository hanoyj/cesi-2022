#pragma once
#include "Message.h"
#include "ListeChaine.h"

class PosteFM
{
private:
	// d�finition de la structure de la liste cha�n�e => globale � toutes les instances
	// les messages sont tous conserv�s en m�moire
	static ListeChainee<MSG> messages;

	int* multiplexeur;			// d�finit la liste des identifiants des stations radio � �couter
	int taille;					// nombre de station radio � �couter
	string nomUtilisateur;		// nom d'utilisateur
	int currentMessage;			// index du dernier message �cout� afin de ne pas relire l'ensemble des messages depuis le d�but

public:
	// contructeur
	PosteFM(int* multiplexeur, int taille, string nomUtilisateur);
	// destructeur
	~PosteFM(void);

	// m�thode d'�coute des messages �mis par les sations radio
	void ecouter(void);

	// utiliser pour le pointeur de fonction (membre statique)
	static void antennePhysique(MSG* signal);
};

