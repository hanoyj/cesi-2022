#pragma once

class CLa
{
// A.	D�finir une classe CLa qui encapsule deux entiers nb1 et nb2 de visibilit� priv�e.
private:
    int nb1;
    int nb2;

public:
    //B.	D�finir un constructeur par d�faut ; initialiser les attributs � 0.
    CLa();
    //C.	Surcharger le constructeur ; passer les valeurs des attributs en param�tre.
    CLa(int nb1, int nb2);

    //D.	D�finir les accesseurs et mutateurs n�cessaires.
    int getNb1();
    void setNb1(int nb1);
    int getNb2();
    void setNb2(int nb2);
    
    //E.	D�finir une m�thode retournant la somme des attributs ; utiliser les accesseurs.
    int somme();
};
