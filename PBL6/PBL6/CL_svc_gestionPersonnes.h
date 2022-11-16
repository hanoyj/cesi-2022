#pragma once

#include "CL_CAD.h" 
#include "CL_map_TBPERSONNE.h" 
#include "CL_map_TBADRESSE.h"

// On crée un namespace specifique pour la gestion de service, ça permet de regrouper les classes
// C'est purement cosmétique mais permet d'avoir un code plus elegant
namespace NS_Svc
{
    ref class CL_svc_gestionPersonnes
    {
    public:
        // constructeur par defaut
        CL_svc_gestionPersonnes();

        // Permet de recuperer la liste des personnes presentes dans la bdd (identifiant de la liste)
        DataSet^ listeClients(String^);

        // Permet de recuperer la liste des adresses en fonction de la personne (identifiant de la liste)
        DataSet^ adressesClient(int, String^);

        // Permet d'ajouter une personne (nom, prenom, adresses)
        int ajouter(String^, String^, array<String^>^);

        // Permet de modifier une personne (indentifiant de la personne à modifier, nouveau nom, nouveau prenom, nouvelles adresses)
        void modifier(int, String^, String^, array<String^>^);

        // Permet de supprimer une personne (identifiant de la personne à supprimer)
        void supprimer(int);

    private:
        // Permet d'acceder à la donnee
        NS_Composants::CL_CAD^ cad;

        // Permet de mapper une donnee personne vers/depuis la bdd
        NS_Composants::CL_map_TBPERSONNE^ personne;

        // Permet de mapper une donne adresse vers/depuis la bdd
        NS_Composants::CL_map_TBADRESSE^ adresse;

        // Cache de donnée en memoire de la bdd
        DataSet^ ds;
    };
}