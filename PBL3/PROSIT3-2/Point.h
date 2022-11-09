#pragma once

/*
*	Classe CLPoint representant un point
*/
class Point
{
public:
	// Constructeur par defaut
	Point();

	// Constructeur prenant en parametre la valeur x et la valeur y du point
	Point(double x, double y);

	// Constructeur par recopie d'un autre point
	// le mot const permet de dire que le parametre p ne pourra pas �tre modifi� lors de l'appel de ce constructeur
	Point(const Point& p);

	// M�thode permettant de retourner la valeur x
	// le mot const permet de dire que cette fonction peut �tre appele par un objet d�clar� "const CLPoint". 
	double getX() const;
	// M�thode permettant d'affecter la valeur x
	void setX(double);

	// M�thode permettant de retourner la valeur y
	// le mot const permet de dire que cette fonction peut �tre appele par un objet d�clar� "const CLPoint". 
	double getY() const;
	// M�thode permettant d'affecter la valeur y
	void setY(double);

	// M�thode permettant d'afficher le point
	virtual void afficher() const;

	// M�thode de calcul de distance entre 2 points
	double distance(const Point& point) const;

protected:
	// Valeur de la composante x
	double x;
	// Valeur de la composante y
	double y;

	// M�thode d'initialisation de l'objet
	void initObj(double x, double y);
};

