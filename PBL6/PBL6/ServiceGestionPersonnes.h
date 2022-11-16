#pragma once

#include "DatabaseAccess.h" 
#include "MappingTBPERSONNE.h" 
#include "MappingTBADRESSE.h"

// On cr�e un namespace specifique pour la gestion de service, �a permet de regrouper les classes
// C'est purement cosm�tique mais permet d'avoir un code plus elegant
namespace Services
{
    ref class ServiceGestionPersonnes
    {
    public:
        // constructeur par defaut
        ServiceGestionPersonnes();

        // Permet de recuperer la liste des personnes presentes dans la bdd (identifiant de la liste)
        DataSet^ listeClients(String^);

        // Permet de recuperer la liste des adresses en fonction de la personne (identifiant de la liste)
        DataSet^ adressesClient(int, String^);

        // Permet d'ajouter une personne (nom, prenom, adresses)
        int ajouter(String^, String^, array<String^>^);

        // Permet de modifier une personne (indentifiant de la personne � modifier, nouveau nom, nouveau prenom, nouvelles adresses)
        void modifier(int, String^, String^, array<String^>^);

        // Permet de supprimer une personne (identifiant de la personne � supprimer)
        void supprimer(int);

    private:
        // Permet d'acceder � la donnee
        Composants::DatabaseAccess^ databaseAccess;

        // Permet de mapper une donnee personne vers/depuis la bdd
        Composants::MappingTBPERSONNE^ personne;

        // Permet de mapper une donne adresse vers/depuis la bdd
        Composants::MappingTBADRESSE^ adresse;

        // Cache de donn�e en memoire de la bdd
        DataSet^ dataSet;
    };
}