#pragma once

class A
{
private:
	int* t;

public:
	A(int tailleTab);

	// Il faut un destructeur pour lib�rer la m�moire allou�e dynamiquement dans le constructeur (attribut t)
	~A(void);
};

