#pragma once

class A
{
private:
	int* t;

public:
	A(int tailleTab);

	// Il faut un destructeur pour libérer la mémoire allouée dynamiquement dans le constructeur (attribut t)
	~A(void);
};

