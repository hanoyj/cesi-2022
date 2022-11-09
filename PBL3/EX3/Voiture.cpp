#include "Voiture.h"

#include <iostream>

// Initialisation du membre statique, l'initialisation est faite hors constructeur et fonction
// On voit bien le caract�re global et unique de ce membre
int Voiture::sNbVoiture = 0;

Voiture::Voiture()
{
    // par defaut toute voiture aura une vitesse max de 100 et une acceleration de 3
    // this est simplement le pointeur sur notre objet instancid�, ici la classe Voiture
    // equivalent � :
    // initObj(100, 3);
    this->initObj(100, 3);
}

Voiture::Voiture(int pVitesseMax, int pAcceleration)
{
    this->initObj(pVitesseMax, pAcceleration);
}

void Voiture::initObj(int pVitesseMax, int pAcceleration)
{
    std::cout << "Voiture::initObj" << std::endl;

    if (pVitesseMax > 100)
    {
        // si le vitesse demand�e est superieure � 100, je la borne � 100
        // on pourrait aussi ecrire : this->mVitesseMax = 100;
        mVitesseMax = 100;
    }
    else
    {
        mVitesseMax = pVitesseMax;
    }

    if (pAcceleration > 3)
    {
        this->mAcceleration = 3;
    }
    else
    {
        // si j'avais nomm� le champ acceleration au lieu de mAccceleration et pAcceleration, la seule facon que le compilateur sache de quelle variable on parle est d''utiliser this->
        this->mAcceleration = pAcceleration;
    }

    // J'incr�mente le nombre de voiture cr��. Comme c'est un membre statique, la prochaine fois que je passerai dans cette methode, meme si mon instance est supprim�e, la valeur 
    // sera encore � jour
    Voiture::sNbVoiture++;

    this->mVitesse = 0;

    // Comme je n'ai pas d�clar� la fonction "using namespace std" dans cette classe, je suis oblig� de sp�cifie le namespace � l'appel de la fonction
    std::cout << "Creation de l'objet : " << Voiture::sNbVoiture << std::endl;
}

void Voiture::accelerer()
{
    int i;
    for (i = 0; mVitesse < mVitesseMax; i++)
    {
        std::cout << "Vitesse : " << mVitesse << std::endl;
        mVitesse += mAcceleration;
    }
}

void Voiture::lavage()
{
    // on affiche egalement la valeur du pointeur de notre classe (this), c'est un entier en fait
    std::cout << "Voiture lavee : " << this << std::endl;
}