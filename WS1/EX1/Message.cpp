#include "Message.h"
#include <iostream>

using namespace std;

Message::Message() 
{
	// Par d�faut, le message affich� = "Bonjour"
	message = "Bonjour";
}

Message::Message(const string& msg) 
{
	message = msg;
}

void Message::afficher() 
{
	cout << this->message << endl;
}