#include "promo.h"
#include <iostream>
#include <fstream>

Promo::Promo() 
{ 
    nbEtudiants = 0;
    etudiants = nullptr;
}

Promo::~Promo()
{
    if (etudiants != nullptr)
    {
        delete[] etudiants;
        etudiants = nullptr;
    }
}

int Promo::getNbEtudiants() 
{ 
    return nbEtudiants;
}

void Promo::afficherEtudiants()
{
    if (nbEtudiants == 0) {
        cout << "Aucun etudiant" << endl;
    }
    else {
        // Boucle sur tous les étudiants
        for (int i = 0; i < nbEtudiants; i++)
        {
            cout << "Etudiant [" << i + 1 << "] - Nom : " << etudiants[i].getNom() << " - Moyenne : " << etudiants[i].getMoyenne() << endl;
        }
    }
};


void Promo::inputNotesUtilisateur() 
{
    int n;
    // Saisie du nombre d'étudiants
    cout << "Entrez le nombre d'etudiants" << endl;
    cin >> n;

    // Si la liste actuelle n'est pas vide alors on la nettoie
    if (nbEtudiants > 0) 
    {
        delete[] etudiants;
    }

    // Construction de la liste
    etudiants = new Etudiant[n];
    nbEtudiants = n;

    string tnom;
    int tmoyenne;
    // Initialisation des étudiants
    for (int i = 0; i < n; i++)
    {
        // Le nom de l'étudiant courant
        cout << "Nom de l'etudiant numero " << i + 1 << endl;
        cin >> tnom;
        etudiants[i].setNom(tnom);
        // La moyenne de l'étudiant courant
        cout << "Moyenne de l'etudiant numero " << i + 1 << endl;
        cin >> tmoyenne;
        etudiants[i].setMoyenne(tmoyenne);
    }
    cout << n << " etudiants info sont ajoutees avec succes" << endl;
}


void Promo::inputNotesAUFichier(string fileName) 
{
    ofstream fileObj;
    // Ouverture du fichier (mode append)
    fileObj.open(fileName, ios::trunc);

    // Enregistrement du nombre d'étudiants
    fileObj << nbEtudiants;
    for (int i = 0; i < nbEtudiants; i++)
    {
        // Ecriture des étudiants dans le fichier
        fileObj.write((char*) &etudiants[i], sizeof(etudiants[i]));
    }
    cout << "la liste des infos sont ajoutees au fichier " << fileName << " avec succes" << endl;
}

void Promo::outputNotesDUFichier(string fileName)
{
    // Ouverture du fichier en lecture
    ifstream fileObj;
    fileObj.open(fileName, ios::in);

    // Lecture du nombre d'étudiant
    fileObj >> nbEtudiants;
    etudiants = new Etudiant[nbEtudiants];
    
    int i = 0;
    do {
        fileObj.read((char*) &etudiants[i], sizeof(etudiants[i]));
        if (++i > nbEtudiants)
            break;
    } while (!fileObj.eof());
    cout << "la liste des infos sont lu avec succes a partir du fichier " << fileName << endl;
}