#pragma once

using namespace System;

// On cr�e un namespace specifique pour les composants, �a permet de regrouper les classes
// C'est purement cosm�tique mais permet d'avoir un code plus elegant
namespace NS_Composants
{
    // Cette classe permet de transiter les informations contenues dans la bdd dans une classe de donn�e
    ref class CL_map_TBADRESSE
    {
    public:
        // Constructeur par defaut
        CL_map_TBADRESSE();

        // retourne le commande pour selectionner une adresse dans la bdd
        String^ SELECTByIdPersonne();

        // retourne le commande pour ajouter une adresse dans la bdd
        String^ INSERT();

        // retourne le commande pour mettre � jour une adresse dans la bdd
        String^ UPDATE();

        // retourne le commande pour suppprimer une adresse dans la bdd
        String^ DELETE();

        // Accesseurs et setters classique de donnees
        void setIdAdresse(int);
        void setAdresse(String^);
        void setCp(String^);
        void setVille(String^);
        void setIdPersonne(int);
        int getIdAdresse();
        String^ getAdresse();
        String^ getCp();
        String^ getVille();
        int getIdPersonne();

    private:
        int id_adresse;
        String^ adresse;
        String^ cp;
        String^ ville;
        int id_personne;
    };
}