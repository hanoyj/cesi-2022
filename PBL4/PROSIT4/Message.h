#pragma once
#include <iostream>

using namespace std;


// d�claration du message �mis par une station radio
typedef struct Message
{
	int multiplexeur = 0;		// contient l'identifiant de la station radio � l'origine de l'�mission du message
	string data;				// le contenu du message

	// d�finition de l'op�rateur d'assignation =
	Message& operator=(Message other)
	{
		this->multiplexeur = other.multiplexeur;
		this->data = string(other.data);
		return *this;
	}

} MSG;

// d�claration du pointeur de fonction pour l'�mission d'un message
typedef void(*pf) (MSG*);

// d�claration uniquement du pointeur de fonction
extern pf espaceHertzien;