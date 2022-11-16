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

DataSet^ ServiceGestionPersonnes::adressesClient(int id_personne, String^ dataTableName)
{
    this->dataSet->Clear();
    this->adresse->setIdPersonne(id_personne);
    this->dataSet = this->databaseAccess->getRows(this->adresse->SELECTByIdPersonne(), dataTableName);
    return this->dataSet;
}

int ServiceGestionPersonnes::ajouter(String^ nom, String^ prenom, array<String^>^ lesAdresses)
{
    int id_personne;
    int i;

    // On ajoute la personne à la bdd
    this->personne->setNom(nom);
    this->personne->setPrenom(prenom);
    id_personne = this->databaseAccess->actionRowsID(this->personne->INSERT());

    // Pour chaque adresse, on l'ajoute à la bdd
    for (i = 0; i < lesAdresses->Length - 1; i++)
    {
        this->adresse->setAdresse(lesAdresses[i]); i++;
        this->adresse->setVille(lesAdresses[i]); i++;
        this->adresse->setCp(lesAdresses[i]);
        this->adresse->setIdPersonne(id_personne);
        this->databaseAccess->actionRows(this->adresse->INSERT());
    }

    return id_personne;
}

void ServiceGestionPersonnes::modifier(int id_personne, String^ nom, String^ prenom, array<String^>^ lesAdresses)
{
    int i;

    // On met à jour la bdd
    this->personne->setID(id_personne);
    this->personne->setNom(nom);
    this->personne->setPrenom(prenom);
    this->databaseAccess->actionRows(this->personne->UPDATE());

    // On met à jour les adresses dans la bddd
    for (i = 0; i < lesAdresses->Length - 1; i++)
    {
        String^ id = lesAdresses[i++];
        String^ adresse = lesAdresses[i++];
        String^ ville = lesAdresses[i++];
        String^ cp = lesAdresses[i++];

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

void ServiceGestionPersonnes::supprimer(int id_personne)
{
    this->personne->setID(id_personne);
    // suppression des adresses liées au client
    DataSet^ adresses = this->adressesClient(id_personne, "adresses");
    for (int i = 0; i < adresses->Tables["adresses"]->Rows->Count; ++i) {
        this->adresse->setIdAdresse(Convert::ToInt32(adresses->Tables["adresses"]->Rows[i]->ItemArray[0]));
        this->databaseAccess->actionRows(this->adresse->DELETE());
    }
    // suppression de la personne de la BDD
    this->databaseAccess->actionRows(this->personne->DELETE());
}
