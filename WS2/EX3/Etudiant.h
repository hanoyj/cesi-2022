#pragma once

#include <iostream>
#include <fstream>

using namespace std;

class Etudiant
{
private:
    string nom;
    int moyenne;
public:
    Etudiant();
    Etudiant(string nom, int moyenne);
    Etudiant(const Etudiant& etudiant);

    string getNom();
    void setNom(string nom);
    int getMoyenne();
    void setMoyenne(int moyenne);
};

