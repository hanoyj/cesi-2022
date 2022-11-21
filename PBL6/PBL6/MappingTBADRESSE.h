#pragma once

using namespace System;

// On cr�e un namespace specifique pour les composants, �a permet de regrouper les classes
// C'est purement cosm�tique mais permet d'avoir un code plus elegant
namespace Composants
{
    // Cette classe permet de transiter les informations contenues dans la bdd dans une classe de donn�e
    ref class MappingTBADRESSE
    {
    public:
        // Constructeur par defaut
        MappingTBADRESSE();

        // retourne le commande pour selectionner une adresse dans la bdd
        String^ SELECTByIdPersonne();

        // retourne le commande pour ajouter une adresse dans la bdd
        String^ INSERT();

        // retourne le commande pour mettre � jour une adresse dans la bdd
        String^ UPDATE();

        // retourne le commande pour suppprimer une adresse dans la bdd
        String^ DELETE();

        // Accesseurs et setters classique de donnees
        void setIdAdresse(int idA);
        void setAdresse(String^ adresse);
        void setCp(String^ cp);
        void setVille(String^ ville);
        void setIdPersonne(int id);
        int getIdAdresse();
        String^ getAdresse();
        String^ getCp();
        String^ getVille();
        int getIdPersonne();

    private:
        int idAdresse;
        String^ adresse;
        String^ cp;
        String^ ville;
        int idPersonne;
    };
}