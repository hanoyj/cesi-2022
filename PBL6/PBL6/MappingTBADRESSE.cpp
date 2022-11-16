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

void MappingTBADRESSE::setIdAdresse(int idAdresse)
{
    if (idAdresse > 0) this->idAdresse = idAdresse;
}

void MappingTBADRESSE::setAdresse(String^ Adresse)
{
    if (!String::IsNullOrEmpty(Adresse)) {
        this->adresse = Adresse;
    }
}

void MappingTBADRESSE::setCp(String^ Cp)
{
    if (!String::IsNullOrEmpty(Cp)) {
        this->cp = Cp;
    }
}

void MappingTBADRESSE::setVille(String^ Ville)
{
    if (!String::IsNullOrEmpty(Ville)) {
        this->ville = Ville;
    }
}

void MappingTBADRESSE::setIdPersonne(int IdPersonne)
{
    if (IdPersonne > 0) this->idPersonne = IdPersonne;
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