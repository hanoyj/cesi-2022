#pragma once
class CLvoiture
{
public:
	// ID commun pour unicit�
	static int idVoiture;
	
	// Constructeur par d�faut
	CLvoiture(void);
	CLvoiture(int vitesseMax, int acceleration);
	CLvoiture(const CLvoiture&);

	// M�thode d'acc�l�ration
	void accelerer(void);

	// Accesseur en lecture � l'ID
	int getID() const;
	// Accesseurs en lecture et �criture vitesse max
	int getVitesseMax() const;
	void setVitesseMax(int vitesseMax);
	// Accesseurs en lecture et �criture acc�l�ration
	int getAcceleration() const;
	void setAcceleration(int acceleration);

private:
	// Attributs
	int idV;
	int vitesseMax;
	int acceleration;
	int vitesse;

	// M�thode d'initialisation
	void ini_obj(int, int);
};

