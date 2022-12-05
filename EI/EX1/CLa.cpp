#include "CLa.h"

//B.	Définir un constructeur par défaut ; initialiser les attributs à 0.
CLa::CLa() 
{ 
    nb1 = nb2 = 0; 
}

//C.	Surcharger le constructeur ; passer les valeurs des attributs en paramètre.
CLa::CLa(int nb1, int nb2)
{
    this->nb1 = nb1;
    this->nb2 = nb2;
}

//D.	Définir les accesseurs et mutateurs nécessaires.
int CLa::getNb1() 
{ 
    return nb1; 
}
void CLa::setNb1(int nb1) 
{ 
    this->nb1 = nb1; 
}

int CLa::getNb2() 
{ 
    return nb2; 
}
void CLa::setNb2(int nb2) 
{ 
    this->nb2 = nb2; 
}

//E.	Définir une méthode retournant la somme des attributs ; utiliser les accesseurs.
int CLa::somme() 
{ 
    return getNb1() + getNb2(); 
}