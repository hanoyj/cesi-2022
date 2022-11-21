#include "ServiceGestionPersonnes.h" 

using namespace Services;

ServiceGestionPersonnes::ServiceGestionPersonnes()
{
    this->databaseAccess = gcnew Composants::DatabaseAccess();
    this->personne = gcnew Composants::MappingTBPERSONNE();
    this->adresse = gcnew Composants::MappingTBADRESSE();
    this->dataSet = gcnew Data::DataSet();
}

DataSet^ ServiceGestionPersonnes::listeClients(String^ dataTableName)
{
    this->dataSet->Clear();
    this->dataSet = this->databaseAccess->getRows(this->personne->SELECT(), dataTableName);
    return this->dataSet;
}

DataSet^ ServiceGestionPersonnes::adressesClient(int iPersonne, String^ dataTableName)
{
    this->dataSet->Clear();
    this->adresse->setIdPersonne(iPersonne);
    this->dataSet = this->databaseAccess->getRows(this->adresse->SELECTByIdPersonne(), dataTableName);
    return this->dataSet;
}

int ServiceGestionPersonnes::ajouter(String^ nom, String^ prenom, array<String^>^ adresses)
{
    int id_personne;
    int i;

    // On ajoute la personne à la bdd
    this->personne->setNom(nom);
    this->personne->setPrenom(prenom);
    id_personne = this->databaseAccess->actionRowsID(this->personne->INSERT());

    // Pour chaque adresse, on l'ajoute à la bdd
    for (i = 0; i < adresses->Length - 1; i++)
    {
        this->adresse->setAdresse(adresses[i]); i++;
        this->adresse->setVille(adresses[i]); i++;
        this->adresse->setCp(adresses[i]);
        this->adresse->setIdPersonne(id_personne);
        this->databaseAccess->actionRows(this->adresse->INSERT());
    }

    return id_personne;
}

void ServiceGestionPersonnes::modifier(int idPersonne, String^ nom, String^ prenom, array<String^>^ adresses)
{
    int i;

    // On met à jour la bdd
    this->personne->setID(idPersonne);
    this->personne->setNom(nom);
    this->personne->setPrenom(prenom);
    this->databaseAccess->actionRows(this->personne->UPDATE());

    // On met à jour les adresses dans la bddd
    for (i = 0; i < adresses->Length - 1; i++)
    {
        String^ id = adresses[i++];
        String^ adresse = adresses[i++];
        String^ ville = adresses[i++];
        String^ cp = adresses[i++];

        this->adresse->setAdresse(adresse); i++;
        this->adresse->setVille(ville); i++;
        this->adresse->setCp(cp);
        if (!String::IsNullOrEmpty(id)) {
            this->adresse->setIdAdresse(Convert::ToInt32(id));
            if (String::IsNullOrEmpty(adresse) && String::IsNullOrEmpty(ville) && String::IsNullOrEmpty(cp)) {
                this->databaseAccess->actionRows(this->adresse->DELETE());
            }
            else {
                this->databaseAccess->actionRows(this->adresse->UPDATE());
            }
        }
        else {
            this->databaseAccess->actionRows(this->adresse->INSERT());
        }
    }
}

void ServiceGestionPersonnes::supprimer(int idPersonne)
{
    this->personne->setID(idPersonne);
    // suppression des adresses liées au client
    DataSet^ adresses = this->adressesClient(idPersonne, "adresses");
    for (int i = 0; i < adresses->Tables["adresses"]->Rows->Count; ++i) {
        this->adresse->setIdAdresse(Convert::ToInt32(adresses->Tables["adresses"]->Rows[i]->ItemArray[0]));
        this->databaseAccess->actionRows(this->adresse->DELETE());
    }
    // suppression de la personne de la BDD
    this->databaseAccess->actionRows(this->personne->DELETE());
}
