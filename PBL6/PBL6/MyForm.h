#pragma once

#include "ServiceGestionPersonnes.h"

namespace PBL6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ idPersonneLabel;
	protected:


	private: System::Windows::Forms::TextBox^ idPersonneTxt;
	private: System::Windows::Forms::Label^ nomLabel;
	private: System::Windows::Forms::TextBox^ nomTxt;
	private: System::Windows::Forms::Label^ prenomLabel;
	private: System::Windows::Forms::TextBox^ prenomTxt;
	private: System::Windows::Forms::Label^ messageLabel;
	private: System::Windows::Forms::TextBox^ messageTxt;
	private: System::Windows::Forms::Button^ firstButton;
	private: System::Windows::Forms::Button^ previousButton;
	private: System::Windows::Forms::Button^ nextButton;
	private: System::Windows::Forms::Button^ endButton;
	private: System::Windows::Forms::Button^ newButton;
	private: System::Windows::Forms::Button^ modifyButton;
	private: System::Windows::Forms::Button^ deleteButton;
	private: System::Windows::Forms::Button^ saveButton;
	private: System::Windows::Forms::Label^ adresseLabel;
	private: System::Windows::Forms::DataGridView^ adressesTable;


		   // Le service qui gere les donnees des personnes
	private: Services::ServiceGestionPersonnes^ gestionClients;
		   // Un cache memoire sur la table des personnes
	private: Data::DataSet^ dsPersonne;
		   // Un cache memoire sur la table des adresses
	private: Data::DataSet^ dsAdresse;
		   // L'index courant de la personne affichee
	private: int index;
		   // Le mode 
	private: String^ mode;
	private: int rowsCount;
	private: int id;

	private:
		static String^ CREATION_MODE = "creation";
		static String^ UPDATE_MODE = "maj";
		static String^ DELETE_MODE = "suppression";

		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->idPersonneLabel = (gcnew System::Windows::Forms::Label());
			this->idPersonneTxt = (gcnew System::Windows::Forms::TextBox());
			this->nomLabel = (gcnew System::Windows::Forms::Label());
			this->nomTxt = (gcnew System::Windows::Forms::TextBox());
			this->prenomLabel = (gcnew System::Windows::Forms::Label());
			this->prenomTxt = (gcnew System::Windows::Forms::TextBox());
			this->messageLabel = (gcnew System::Windows::Forms::Label());
			this->messageTxt = (gcnew System::Windows::Forms::TextBox());
			this->firstButton = (gcnew System::Windows::Forms::Button());
			this->previousButton = (gcnew System::Windows::Forms::Button());
			this->nextButton = (gcnew System::Windows::Forms::Button());
			this->endButton = (gcnew System::Windows::Forms::Button());
			this->newButton = (gcnew System::Windows::Forms::Button());
			this->modifyButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->adresseLabel = (gcnew System::Windows::Forms::Label());
			this->adressesTable = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adressesTable))->BeginInit();
			this->SuspendLayout();
			// 
			// idPersonneLabel
			// 
			this->idPersonneLabel->AutoSize = true;
			this->idPersonneLabel->Location = System::Drawing::Point(13, 9);
			this->idPersonneLabel->Name = L"idPersonneLabel";
			this->idPersonneLabel->Size = System::Drawing::Size(66, 13);
			this->idPersonneLabel->TabIndex = 0;
			this->idPersonneLabel->Text = L"ID Personne";
			// 
			// idPersonneTxt
			// 
			this->idPersonneTxt->Location = System::Drawing::Point(16, 27);
			this->idPersonneTxt->Name = L"idPersonneTxt";
			this->idPersonneTxt->ReadOnly = true;
			this->idPersonneTxt->Size = System::Drawing::Size(307, 20);
			this->idPersonneTxt->TabIndex = 1;
			// 
			// nomLabel
			// 
			this->nomLabel->AutoSize = true;
			this->nomLabel->Location = System::Drawing::Point(13, 67);
			this->nomLabel->Name = L"nomLabel";
			this->nomLabel->Size = System::Drawing::Size(32, 13);
			this->nomLabel->TabIndex = 2;
			this->nomLabel->Text = L"Nom ";
			// 
			// nomTxt
			// 
			this->nomTxt->Location = System::Drawing::Point(16, 83);
			this->nomTxt->Name = L"nomTxt";
			this->nomTxt->Size = System::Drawing::Size(307, 20);
			this->nomTxt->TabIndex = 3;
			// 
			// prenomLabel
			// 
			this->prenomLabel->AutoSize = true;
			this->prenomLabel->Location = System::Drawing::Point(13, 124);
			this->prenomLabel->Name = L"prenomLabel";
			this->prenomLabel->Size = System::Drawing::Size(46, 13);
			this->prenomLabel->TabIndex = 4;
			this->prenomLabel->Text = L"Prenom ";
			// 
			// prenomTxt
			// 
			this->prenomTxt->Location = System::Drawing::Point(16, 148);
			this->prenomTxt->Name = L"prenomTxt";
			this->prenomTxt->Size = System::Drawing::Size(307, 20);
			this->prenomTxt->TabIndex = 5;
			// 
			// messageLabel
			// 
			this->messageLabel->AutoSize = true;
			this->messageLabel->Location = System::Drawing::Point(13, 371);
			this->messageLabel->Name = L"messageLabel";
			this->messageLabel->Size = System::Drawing::Size(50, 13);
			this->messageLabel->TabIndex = 6;
			this->messageLabel->Text = L"Message";
			// 
			// messageTxt
			// 
			this->messageTxt->Location = System::Drawing::Point(16, 396);
			this->messageTxt->Multiline = true;
			this->messageTxt->Name = L"messageTxt";
			this->messageTxt->ReadOnly = true;
			this->messageTxt->Size = System::Drawing::Size(806, 47);
			this->messageTxt->TabIndex = 7;
			// 
			// firstButton
			// 
			this->firstButton->Location = System::Drawing::Point(16, 210);
			this->firstButton->Name = L"firstButton";
			this->firstButton->Size = System::Drawing::Size(64, 23);
			this->firstButton->TabIndex = 8;
			this->firstButton->Text = L"<<";
			this->firstButton->UseVisualStyleBackColor = true;
			this->firstButton->Click += gcnew System::EventHandler(this, &MyForm::onFirstClick);
			// 
			// previousButton
			// 
			this->previousButton->Location = System::Drawing::Point(86, 210);
			this->previousButton->Name = L"previousButton";
			this->previousButton->Size = System::Drawing::Size(75, 23);
			this->previousButton->TabIndex = 9;
			this->previousButton->Text = L"<";
			this->previousButton->UseVisualStyleBackColor = true;
			this->previousButton->Click += gcnew System::EventHandler(this, &MyForm::onPreviousClick);
			// 
			// nextButton
			// 
			this->nextButton->Location = System::Drawing::Point(167, 210);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(75, 23);
			this->nextButton->TabIndex = 10;
			this->nextButton->Text = L">";
			this->nextButton->UseVisualStyleBackColor = true;
			this->nextButton->Click += gcnew System::EventHandler(this, &MyForm::onNextClick);
			// 
			// endButton
			// 
			this->endButton->Location = System::Drawing::Point(248, 210);
			this->endButton->Name = L"endButton";
			this->endButton->Size = System::Drawing::Size(75, 23);
			this->endButton->TabIndex = 11;
			this->endButton->Text = L">>";
			this->endButton->UseVisualStyleBackColor = true;
			this->endButton->Click += gcnew System::EventHandler(this, &MyForm::onEndClick);
			// 
			// newButton
			// 
			this->newButton->Location = System::Drawing::Point(16, 264);
			this->newButton->Name = L"newButton";
			this->newButton->Size = System::Drawing::Size(75, 23);
			this->newButton->TabIndex = 12;
			this->newButton->Text = L"Nouveau";
			this->newButton->UseVisualStyleBackColor = true;
			this->newButton->Click += gcnew System::EventHandler(this, &MyForm::onNewClick);
			// 
			// modifyButton
			// 
			this->modifyButton->Location = System::Drawing::Point(16, 293);
			this->modifyButton->Name = L"modifyButton";
			this->modifyButton->Size = System::Drawing::Size(75, 23);
			this->modifyButton->TabIndex = 13;
			this->modifyButton->Text = L"Modifier";
			this->modifyButton->UseVisualStyleBackColor = true;
			this->modifyButton->Click += gcnew System::EventHandler(this, &MyForm::onModifyClick);
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(16, 336);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(75, 23);
			this->deleteButton->TabIndex = 14;
			this->deleteButton->Text = L"Supprimer";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &MyForm::onDeleteClick);
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(131, 257);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(192, 95);
			this->saveButton->TabIndex = 15;
			this->saveButton->Text = L"Enregistrer";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &MyForm::onSaveClick);
			// 
			// adresseLabel
			// 
			this->adresseLabel->AutoSize = true;
			this->adresseLabel->Location = System::Drawing::Point(358, 9);
			this->adresseLabel->Name = L"adresseLabel";
			this->adresseLabel->Size = System::Drawing::Size(50, 13);
			this->adresseLabel->TabIndex = 16;
			this->adresseLabel->Text = L"Adresses";
			// 
			// adressesTable
			// 
			this->adressesTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->adressesTable->Location = System::Drawing::Point(361, 27);
			this->adressesTable->Name = L"adressesTable";
			this->adressesTable->Size = System::Drawing::Size(744, 332);
			this->adressesTable->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1128, 457);
			this->Controls->Add(this->adressesTable);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->adresseLabel);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->modifyButton);
			this->Controls->Add(this->newButton);
			this->Controls->Add(this->endButton);
			this->Controls->Add(this->nextButton);
			this->Controls->Add(this->previousButton);
			this->Controls->Add(this->firstButton);
			this->Controls->Add(this->messageTxt);
			this->Controls->Add(this->messageLabel);
			this->Controls->Add(this->prenomTxt);
			this->Controls->Add(this->prenomLabel);
			this->Controls->Add(this->nomTxt);
			this->Controls->Add(this->nomLabel);
			this->Controls->Add(this->idPersonneTxt);
			this->Controls->Add(this->idPersonneLabel);
			this->Name = L"MyForm";
			this->Text = L"Application BDD";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adressesTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		// Initialisation de l'interface graphique
		this->index = 0;
		this->mode = "";
		this->dsPersonne = gcnew Data::DataSet();
		this->dsAdresse = gcnew Data::DataSet();

		// Initialisation du gestionnaire de client
		this->gestionClients = gcnew Services::ServiceGestionPersonnes();

		// Mise à jour de l'interface graphique avec les donnees initiales de la bdd
		this->loadData(this->index);
	}

	private: void loadData(int index)
	{
		// Mise à jour du cache bdd de la table de personne
		this->dsPersonne->Clear();
		this->dsPersonne = this->gestionClients->listeClients("clients");
		this->rowsCount = this->dsPersonne->Tables["clients"]->Rows->Count;

		// Reset des champs graphiques de l'interface
		this->adressesTable->Columns->Clear();
		this->idPersonneTxt->Clear();
		this->nomTxt->Clear();
		this->prenomTxt->Clear();

		// On verifie que la liste retournée n'est pas vide
		if (rowsCount == 0)
			return;

		// On remplit l'interface avec les informations de la personne index de la bdd
		this->idPersonneTxt->Text = Convert::ToString(this->dsPersonne->Tables["clients"]->Rows[this->index]->ItemArray[0]);
		this->nomTxt->Text = Convert::ToString(this->dsPersonne->Tables["clients"]->Rows[this->index]->ItemArray[1]);
		this->prenomTxt->Text = Convert::ToString(this->dsPersonne->Tables["clients"]->Rows[this->index]->ItemArray[2]);

		// On remplit l'interface avec les informations des adresses de la personne
		this->dsAdresse = this->gestionClients->adressesClient(Convert::ToInt32(this->idPersonneTxt->Text), "adresses");
		this->adressesTable->DataSource = this->dsAdresse;
		this->adressesTable->DataMember = "adresses";
		// On ne rend pas visible les colonnes "techniques" à l'utilisateur
		this->adressesTable->Columns["id_personne"]->Visible = false;
		this->adressesTable->Columns["id_adresse"]->Visible = false;

		// Message pour l'utilisateur
		this->messageTxt->Text = "Enregistrement n° : " + (this->index + 1);
	}

	private: System::Void onFirstClick(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
		this->loadData(this->index);
	}

	private: System::Void onPreviousClick(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->index > 0)
		{
			this->index--;
			this->loadData(this->index);
		}
	}

	private: System::Void onNextClick(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->index < this->rowsCount - 1)
		{
			this->index++;
			this->loadData(this->index);
		}
	}

	private: System::Void onEndClick(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = this->rowsCount - 1;
		this->loadData(this->index);
	}

	private: System::Void onNewClick(System::Object^ sender, System::EventArgs^ e)
	{
		// On reset les informations de l'interface
		this->idPersonneTxt->Clear();
		this->nomTxt->Clear();
		this->prenomTxt->Clear();
		this->adressesTable->DataSource = nullptr;
		this->adressesTable->Columns->Add("Adresse", "Adresse");
		this->adressesTable->Columns->Add("Ville", "Ville");
		this->adressesTable->Columns->Add("Cp", "Cp");

		// Mode actuel de saisie
		this->mode = CREATION_MODE;

		// Message utilisateur
		this->messageTxt->Text = "Veuillez saisir les information de la nouvelle personne et enregistrer";
	}

	private: System::Void onModifyClick(System::Object^ sender, System::EventArgs^ e)
	{
		// Mode actuel de saisie
		this->mode = UPDATE_MODE;
		// Message utilisateur
		this->messageTxt->Text = "Veuillez modifier les information de la nouvelle courante et enregistrer.";
	}

	private: System::Void onDeleteClick(System::Object^ sender, System::EventArgs^ e)
	{
		// Mode actuel de saisie
		this->mode = DELETE_MODE;
		// Message utilisateur
		this->messageTxt->Text = "Veuillez confirmer la suppression de la personne en cours en enregistrant.";
	}

	private: System::Void onSaveClick(System::Object^ sender, System::EventArgs^ e)
	{
		// Suivant le mode de saisie
		if (this->mode == CREATION_MODE)
		{
			int i;
			int ii;

			// On cree la liste des adresses et on la remplit avec les informations saisies par l'utilisateur
			// Comme c'est une creation, on ne recupere pas l'id de l'adresse (sera cree automatiquement)
			int taille = (this->adressesTable->RowCount - 1) * 3;
			array<String^>^ lesAdresses = gcnew array<String^>(taille);

			ii = 0;
			for (i = 0; i < taille - 1; i++)
			{
				lesAdresses[i] = Convert::ToString(this->adressesTable[0, ii]->Value); i++;
				lesAdresses[i] = Convert::ToString(this->adressesTable[1, ii]->Value); i++;
				lesAdresses[i] = Convert::ToString(this->adressesTable[2, ii]->Value);
				ii++;
			}
			// On ajoute le client a la bdd
			this->gestionClients->ajouter(this->nomTxt->Text, this->prenomTxt->Text, lesAdresses);
		}
		else if (this->mode == UPDATE_MODE)
		{
			int i;
			int ii;

			// On cree la liste des adresses et on la remplit avec les informations saisies par l'utilisateur
			// Comme c'est une mise à jour, on a besoin l'id de l'adresse
			int taille = (this->adressesTable->RowCount - 1) * 4;
			array<String^>^ lesAdresses = gcnew array<String^>(taille);

			ii = 0;
			this->adressesTable->Columns["id_adresse"]->Visible = true;
			for (i = 0; i < taille - 1; i++)
			{
				String^ id = Convert::ToString(this->adressesTable[0, ii]->Value);
				String^ adresse = Convert::ToString(this->adressesTable[1, ii]->Value);
				String^ ville = Convert::ToString(this->adressesTable[2, ii]->Value);
				String^ cp = Convert::ToString(this->adressesTable[3, ii]->Value);

				lesAdresses[i++] = id;
				lesAdresses[i++] = adresse;
				lesAdresses[i++] = ville;
				lesAdresses[i++] = cp;
				ii++;
			}
			// On modifie le client dans la bdd
			this->gestionClients->modifier(Convert::ToInt32(this->idPersonneTxt->Text),
				this->nomTxt->Text, this->prenomTxt->Text, lesAdresses);

		}
		else if (this->mode == DELETE_MODE)
		{
			// On supprime le client de la bdd
			this->gestionClients->supprimer(Convert::ToInt32(this->idPersonneTxt->Text));
		}

		// On met à jour l'interface graphique avec les informations du premier client (s'il existe)
		this->index = 0;
		this->loadData(this->index);
		this->messageTxt->Text += "Traitement terminé.";
	}

};
}
