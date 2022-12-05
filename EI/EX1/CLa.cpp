#include "CLa.h"

//B.	D�finir un constructeur par d�faut ; initialiser les attributs � 0.
CLa::CLa() 
{ 
    nb1 = nb2 = 0; 
}

//C.	Surcharger le constructeur ; passer les valeurs des attributs en param�tre.
CLa::CLa(int nb1, int nb2)
{
    this->nb1 = nb1;
    this->nb2 = nb2;
}

//D.	D�finir les accesseurs et mutateurs n�cessaires.
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

//E.	D�finir une m�thode retournant la somme des attributs ; utiliser les accesseurs.
int CLa::somme() 
{ 
    return getNb1() + getNb2(); 
}