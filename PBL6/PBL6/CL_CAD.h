#pragma once

#include <string>

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

// On crée un namespace specifique pour les composants, ça permet de regrouper les classes
// C'est purement cosmétique mais permet d'avoir un code plus elegant
namespace NS_Composants
{
    // Classe de Composant Acces à la Donnees
    ref class CL_CAD
    {
    public:
        // Constructeur par defaut
        CL_CAD();

        // Utiliser pour ajouter un element à la base en retournant l'id de l'element
        int actionRowsID(String^);

        // Utiliser pour modifier ou supprimer une element de la base
        void actionRows(String^);

        // Utiliser pour recuperer de la donnees de la base
        DataSet^ getRows(String^, String^);

    private:
        // Contient les informations de connexion
        String^ cnx;

        // Le nom de la requete SQL en cours
        String^ rq_sql;

        // La connxion SQL
        SqlConnection^ CNX;

        // La commande SQL
        SqlCommand^ CMD;
        SqlDataAdapter^ DA;

        // Les donnees renvoyees par les requetes
        DataSet^ DS;

        // Affecte la requete SQL
        void setSQL(String^);
    };
}
