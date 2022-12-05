#pragma once

class CLa
{
// A.	Définir une classe CLa qui encapsule deux entiers nb1 et nb2 de visibilité privée.
private:
    int nb1;
    int nb2;

public:
    //B.	Définir un constructeur par défaut ; initialiser les attributs à 0.
    CLa();
    //C.	Surcharger le constructeur ; passer les valeurs des attributs en paramètre.
    CLa(int nb1, int nb2);

    //D.	Définir les accesseurs et mutateurs nécessaires.
    int getNb1();
    void setNb1(int nb1);
    int getNb2();
    void setNb2(int nb2);
    
    //E.	Définir une méthode retournant la somme des attributs ; utiliser les accesseurs.
    int somme();
};
