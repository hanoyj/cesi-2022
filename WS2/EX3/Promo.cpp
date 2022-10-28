#include "promo.h"
#include <iostream>
#include <fstream>

Promo::Promo() 
{ 
    nbEtudiants = 0;
    etudiants = NULL;
}

int Promo::getNbEtudiants() 
{ 
    return nbEtudiants;
}

void Promo::InputNotesUtilisateur() 
{
    cout << "Entrez le nombre d'Etudinants" << endl;
    int n; cin >> n;
    etudiants = new Etudiant[n];
    nbEtudiants = n;
    string tnom;
    int tmoyenne;
    for (int i = 0; i < n; i++)
    {
        cout << "Nom de l'etudiant numero " << i + 1 << endl;
        cin >> tnom;
        etudiants[i].setNom(tnom);
        cout << "Moyenne de l'etudiant numero " << i + 1 << endl;
        cin >> tmoyenne;
        etudiants[i].setMoyenne(tmoyenne);
    }
    cout << n << " Etudiants info sont ajoutees avec succes" << endl;
}

void Promo::afficherEtudiants() 
{
    for (int i = 0; i < nbEtudiants; i++)
    {
        cout << "Etudiant " << i + 1 << " - Nom : " << etudiants[i].getNom() << " - Moyenne : " << etudiants[i].getMoyenne() << endl;
    }
};

void Promo::InputNotesAUFichier(string fileName) 
{
    ofstream file_obj;
    file_obj.open(fileName, ios::app);
    for (int i = 0; i < nbEtudiants; i++)
    {
        file_obj.write((char*)&etudiants[i], sizeof(etudiants[i]));
    }
    cout << "la liste des infos sont ajoutees au fichier " << fileName << " avec succes" << endl;
}

void Promo::OutputNotesDUFichier(string fileName) {
    cout << "Entrez le nombre d'Etudinants" << endl;
    cin >> nbEtudiants;
    etudiants = new Etudiant[nbEtudiants];
    ifstream file_obj;
    file_obj.open(fileName, ios::app);
    int i = 0;
    do {
        file_obj.read((char*)&etudiants[i], sizeof(etudiants[i]));
        if (++i > nbEtudiants)
            break;
    } while (!file_obj.eof());
    cout << "la liste des infos sont lu avec succes a partir du fichier " << fileName << endl;
}