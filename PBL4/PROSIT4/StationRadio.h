#pragma once
#include "Message.h"

class StationRadio
{
private:
	int identifiant;		// identifiant de la station radio
public:
	// constructeur
	StationRadio(int identifiant);

	// m�thode d'�mission d'un message
	void emmettre(const string& message);
};

