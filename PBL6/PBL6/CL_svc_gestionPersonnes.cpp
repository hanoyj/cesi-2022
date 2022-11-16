#include "CL_svc_gestionPersonnes.h" 

using namespace NS_Svc;

CL_svc_gestionPersonnes::CL_svc_gestionPersonnes()
{
    this->cad = gcnew NS_Composants::CL_CAD();
    this->personne = gcnew NS_Composants::CL_map_TBPERSONNE();
    this->adresse = gcnew NS_Composants::CL_map_TBADRESSE();
    this->ds = gcnew Data::DataSet();
}

DataSet^ CL_svc_gestionPersonnes::listeClients(String^ dataTableName)
{
    this->ds->Clear();
    this->ds = this->cad->getRows(this->personne->SELECT(), dataTableName);

    return this->ds;
}

DataSet^ CL_svc_gestionPersonnes::adressesClient(int id_personne, String^ dataTableName)
{
    this->ds->Clear();
    this->adresse->setIdPersonne(id_personne);
    this->ds = this->cad->getRows(this->adresse->SELECTByIdPersonne(), dataTableName);

    return this->ds;
}

int CL_svc_gestionPersonnes::ajouter(String^ nom, String^ prenom, array<String^>^ lesAdresses)
{
    int id_personne;
    int i;

    // On ajoute la personne � la bdd
    this->personne->setNom(nom);
    this->personne->setPrenom(prenom);
    id_personne = this->cad->actionRowsID(this->personne->INSERT());

    // Pour chaque adresse, on l'ajoute � la bdd
    for (i = 0; i < lesAdresses->Length - 1; i++)
    {
        this->adresse->setAdresse(lesAdresses[i]); i++;
        this->adresse->setVille(lesAdresses[i]); i++;
        this->adresse->setCp(lesAdresses[i]);
        this->adresse->setIdPersonne(id_personne);
        this->cad->actionRows(this->adresse->INSERT());
    }

    return id_personne;
}

void CL_svc_gestionPersonnes::modifier(int id_personne, String^ nom, String^ prenom, array<String^>^ lesAdresses)
{
    int i;

    // On met � jour la bdd
    this->personne->setID(id_personne);
    this->personne->setNom(nom);
    this->personne->setPrenom(prenom);
    this->cad->actionRows(this->personne->UPDATE());

    // On met � jour les adresses dans la bddd
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
                this->cad->actionRows(this->adresse->DELETE());
            }
            else {
                this->cad->actionRows(this->adresse->UPDATE());
            }
        }
        else {
            this->cad->actionRows(this->adresse->INSERT());
        }
    }
}

void CL_svc_gestionPersonnes::supprimer(int id_personne)
{
    this->personne->setID(id_personne);
    // suppression des adresses li�es au client
    DataSet^ adresses = this->adressesClient(id_personne, "adresses");
    for (int i = 0; i < adresses->Tables["adresses"]->Rows->Count; ++i) {
        this->adresse->setIdAdresse(Convert::ToInt32(adresses->Tables["adresses"]->Rows[i]->ItemArray[0]));
        this->cad->actionRows(this->adresse->DELETE());
    }
    // suppression de la personne de la BDD
    this->cad->actionRows(this->personne->DELETE());
}
