#pragma once
class CLobjet
{
public:
	// Calcul de l��nergie cin�tique d�un objet
	void calculer(void);
	// Accesseurs lecture et �criture vitesse
	double getVitesse(void) const;
	void setVitesse(double vitesse);
	// Accesseurs lecture et �criture masse
	double getMasse(void) const;
	void setMasse(double masse);
	// Accesseurs lecture �nergie cin�tique
	// La m�thode est "const" car elle ne modifie pas l'objet (�galement valable pour tous les accesseurs en lecture)
	double getEc(void) const;

private:
	// Attributs
	double masse;
	double vitesse;
	double ec;
};

