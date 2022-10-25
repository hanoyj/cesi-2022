#pragma once
class CLobjet
{
public:
	// Constructeur par d�faut
	CLobjet(void);
	// Constructeur param�tr� (vitesse et masse)
	CLobjet(double vitesse, double masse);
	// Constructeur par recopie
	CLobjet(const CLobjet&);

	// Calcul de l��nergie cin�tique d�un objet
	void calculer(void);
	// Accesseurs lecture et �criture vitesse
	double getVitesse(void) const;
	void setVitesse(double vitesse);
	// Accesseurs lecture et �criture masse
	double getMasse(void) const;
	void setMasse(double masse);
	// Accesseurs lecture �nergie cin�tique
	double getEc(void) const;

private:
	// Attributs
	double masse;
	double vitesse;
	double ec;

	// M�thode d'initialisation
	void ini_obj(double vitesse, double masse);
};

