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
	// le mot const permet de dire que le parametre p ne pourra pas être modifié lors de l'appel de ce constructeur
	Point(const Point& p);

	// Méthode permettant de déplacer le point à gauche
	void gauche();
	// Méthode permettant de déplacer le point à droite
	void droite();
	// Méthode permettant de déplacer le point en haut
	void haut();
	// Méthode permettant de déplacer le point en bas
	void bas();

	// Méthode permettant de retourner la valeur x
	// le mot const permet de dire que cette fonction peut être appele par un objet déclaré "const CLPoint". 
	double getX() const;
	// Méthode permettant d'affecter la valeur x
	void setX(double);

	// Méthode permettant de retourner la valeur y
	// le mot const permet de dire que cette fonction peut être appele par un objet déclaré "const CLPoint". 
	double getY() const;
	// Méthode permettant d'affecter la valeur y
	void setY(double);

	// Méthode permettant de retourner la valeur z
	double getZ() const;
	// Méthode permettant d'affecter la valeur z
	void setZ(double);

	// Méthode permettant d'afficher le point
	virtual void afficher() const;

	// Méthode de calcul de distance entre 2 points
	virtual double distance(const Point& point) const;

protected:
	// Valeur de la composante x
	double x;
	// Valeur de la composante y
	double y;
	// Valeur de la composante en z
	double z;

	// Méthode d'initialisation de l'objet
	void initObj(double x, double y);
};

