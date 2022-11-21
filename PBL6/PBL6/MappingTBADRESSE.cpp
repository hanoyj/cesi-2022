#include "MappingTBADRESSE.h"

using namespace Composants;

MappingTBADRESSE::MappingTBADRESSE()
{
    this->idAdresse = -1;
    this->adresse = "RIEN";
    this->cp = "RIEN";
    this->ville = "RIEN";
    this->idPersonne = -1;
}

String^ MappingTBADRESSE::SELECTByIdPersonne()
{
    return "SELECT id_adresse, adresse, ville, cp, id_personne " +
        "FROM TB_ADRESSE " +
        "WHERE(id_personne = " + this->idPersonne + ");";
}

String^ MappingTBADRESSE::INSERT()
{
    return "INSERT INTO TB_ADRESSE(adresse, ville, cp, id_personne) " +
        "VALUES('" + this->adresse + "', '" + this->ville + "', '" + this->cp + "', " + this->idPersonne + ");";
}

String^ MappingTBADRESSE::UPDATE()
{
    return "UPDATE TB_ADRESSE " +
        "SET adresse ='" + this->adresse + "', ville ='" + this->ville + "', cp ='" + this->cp + "' " +
        "WHERE(id_adresse =  " + this->idAdresse + "); ";
}

String^ MappingTBADRESSE::DELETE()
{
    return "DELETE FROM TB_ADRESSE " +
        "WHERE(id_adresse = " + this->idAdresse + ");";
}

void MappingTBADRESSE::setIdAdresse(int id)
{
    if (id > 0) this->idAdresse = id;
}

void MappingTBADRESSE::setAdresse(String^ adresse)
{
    if (!String::IsNullOrEmpty(adresse)) {
        this->adresse = adresse;
    }
}

void MappingTBADRESSE::setCp(String^ cp)
{
    if (!String::IsNullOrEmpty(cp)) {
        this->cp = cp;
    }
}

void MappingTBADRESSE::setVille(String^ ville)
{
    if (!String::IsNullOrEmpty(ville)) {
        this->ville = ville;
    }
}

void MappingTBADRESSE::setIdPersonne(int id)
{
    if (id > 0) this->idPersonne = id;
}

int MappingTBADRESSE::getIdAdresse()
{
    return this->idAdresse;
}

String^ MappingTBADRESSE::getAdresse()
{
    return this->adresse;
}

String^ MappingTBADRESSE::getCp()
{
    return this->cp;
}

String^ MappingTBADRESSE::getVille()
{
    return this->ville;
}

int MappingTBADRESSE::getIdPersonne()
{
    return this->idPersonne;
}