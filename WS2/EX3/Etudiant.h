#pragma once

#include <iostream>

using namespace std;

class Etudiant
{
private:
    // Attributs privés de la classe
    string nom;
    int moyenne;
public:
    // Constructeur par défaut
    Etudiant();
    // Constructeur avec nom et moyenne
    Etudiant(string nom, int moyenne);
    // Constructeur par recopie
    Etudiant(const Etudiant& etudiant);

    // Accesseurs de l'attribut nom
    string getNom();
    void setNom(string nom);
    // Accesseurs de l'attribut moyenne
    int getMoyenne();
    void setMoyenne(int moyenne);
};

