#pragma once

/*
*	Classe de Voiture g�n�rique
*	Pour plus de lisibilit� du code, je pr�fixe les champs de la classe par "m" (pour membre), les param�tres des fonctions par "p" (pour parametre), les membres statique par "s".
	C'est un exemple de regle de codage...
*/
class Voiture
{
public:
	// Constructeur par defaut de la classe
	Voiture();

	// Constructeur de la classe Voiture � partir d'une vitesse max et d'une acceleration
	Voiture(int pVitesseMax, int pAcceleration);

	// Fonction permettant de faire accelerer la voiture jusqu'� la vitesse max
	// le mot cl� "virtual" permettra de surcharger cette fonction par les classes qui heritent de la classe Voiture
	virtual void accelerer();

	// Exercice 3 : ajout de la fonction virtuelle de lavage
	virtual void lavage();

protected:

	// Vitesse max de la voiture
	int mVitesseMax;

	// Vitesse courante de la voiture
	int mVitesse;

	// Acceleration de la voiture
	int mAcceleration;

	// fonction permettant d'initialiser l'objet Voiture
	void initObj(int pVitesseMax, int pAcceleration);

	// Membre static de la classe Voiture permettant de compter le nombre d'instance de la classe Voiture cr��
	// Un membre statique est un membre qui a une port� unique et qui "existe" une seule fois pour toutes les instances de classe Voiture
	static int sNbVoiture;

private:
	// les champs priv� ne sont pas accesibles par les classes qui h�ritent de la classe Voiture
};