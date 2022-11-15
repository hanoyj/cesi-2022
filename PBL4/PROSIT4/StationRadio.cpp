#include "StationRadio.h"
#include "Message.h"

// constructeur
StationRadio::StationRadio(int identifiant) 
{
	this->identifiant = identifiant;
}

// m�thode d'�mission d'un message
void StationRadio::emmettre(const string& message)
{
	// l'affectation de l'identifiant de la station radio pour routage est r�alis�e 
	// par l'instance de la station radio (d�finie lors de l'instanciation)
	MSG* msg = new MSG;
	msg->data = message;
	msg->multiplexeur = this->identifiant;

	cout << "----> Emmission d'un signal Hertzien[" << msg->multiplexeur << "] en cours: " << msg->data << endl;
	// appel du pointeur de fonction pour enregistrement du message
	espaceHertzien(msg);
}
