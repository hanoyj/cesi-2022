#pragma once
#include <string>

class Message
{
public:
	// Constructeurs
	Message();
	Message(const std::string& message);

	void afficher();

private:
	// Message affich�
	std::string message;
};

