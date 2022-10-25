#pragma once

class CLPoint
{
public:
	// Constructeurs
	CLPoint();
	CLPoint(double x, double y);
	CLPoint(const CLPoint& point);

	// Accesseurs en lecture & �criture
	double getX() const;
	void setX(double);
	double getY() const;
	void setY(double);

	// M�thode d'affichage des coordonn�es du point
	void afficher();
	// M�thode de calcul de la distance avec un autre point
	double calculerDistance(const CLPoint& point);

private:
	// Attributs
	double y;
	double x;

	// M�thode d'initialisation
	void iniObj(double, double);
};

