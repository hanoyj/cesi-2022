#pragma once

using namespace System;

// On cr�e un namespace specifique pour les composants, �a permet de regrouper les classes
// C'est purement cosm�tique mais permet d'avoir un code plus elegant
namespace NS_Composants
{
    // Cette classe permet de transiter les informations contenues dans la bdd dans une classe de donn�e
    ref class CL_map_TBPERSONNE
    {
    public:
        // Constructeur par defaut
        CL_map_TBPERSONNE();

        // retourne le commande pour selectionner une personne dans la bdd
        String^ SELECT();

        // retourne le commande pour ajouter une personne dans la bdd
        String^ INSERT();

        // retourne le commande pour mettre � jour une personne dans la bdd
        String^ UPDATE();

        // retourne le commande pour suppprimer une personne dans la bdd
        String^ DELETE();

        // Accesseurs et setters classique de donnees
        void setID(int);
        void setPrenom(String^);
        void setNom(String^);
        int getId();
        String^ getNom();
        String^ getPrenom();

    private:
        int id_personne;
        String^ nom;
        String^ prenom;
    };
}
