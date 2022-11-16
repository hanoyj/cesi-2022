#include "CL_map_TBADRESSE.h"

using namespace NS_Composants;

CL_map_TBADRESSE::CL_map_TBADRESSE()
{
    this->id_adresse = -1;
    this->adresse = "RIEN";
    this->cp = "RIEN";
    this->ville = "RIEN";
    this->id_personne = -1;
}

String^ CL_map_TBADRESSE::SELECTByIdPersonne()
{
    return "SELECT id_adresse, adresse, ville, cp, id_personne " +
        "FROM TB_ADRESSE " +
        "WHERE(id_personne = " + this->id_personne + ");";
}

String^ CL_map_TBADRESSE::INSERT()
{
    return "INSERT INTO TB_ADRESSE(adresse, ville, cp, id_personne) " +
        "VALUES('" + this->adresse + "', '" + this->ville + "', '" + this->cp + "', " + this->id_personne + ");";
}

String^ CL_map_TBADRESSE::UPDATE()
{
    return "UPDATE TB_ADRESSE " +
        "SET adresse ='" + this->adresse + "', ville ='" + this->ville + "', cp ='" + this->cp + "' " +
        "WHERE(id_adresse =  " + this->id_adresse + "); ";
}

String^ CL_map_TBADRESSE::DELETE()
{
    return "DELETE FROM TB_ADRESSE " +
        "WHERE(id_adresse = " + this->id_adresse + ");";
}

void CL_map_TBADRESSE::setIdAdresse(int IdAdresse)
{
    if (IdAdresse > 0)this->id_adresse = IdAdresse;
}

void CL_map_TBADRESSE::setAdresse(String^ Adresse)
{
    if (Adresse != "")this->adresse = Adresse;
}

void CL_map_TBADRESSE::setCp(String^ Cp)
{
    if (Cp != "")this->cp = Cp;
}

void CL_map_TBADRESSE::setVille(String^ Ville)
{
    if (Ville != "")this->ville = Ville;
}

void CL_map_TBADRESSE::setIdPersonne(int IdPersonne)
{
    if (IdPersonne > 0)this->id_personne = IdPersonne;
}

int CL_map_TBADRESSE::getIdAdresse()
{
    return this->id_adresse;
}

String^ CL_map_TBADRESSE::getAdresse()
{
    return this->adresse;
}

String^ CL_map_TBADRESSE::getCp()
{
    return this->cp;
}

String^ CL_map_TBADRESSE::getVille()
{
    return this->ville;
}

int CL_map_TBADRESSE::getIdPersonne()
{
    return this->id_personne;
}