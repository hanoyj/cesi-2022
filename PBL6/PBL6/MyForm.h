#pragma once

#include "CL_svc_gestionPersonnes.h"

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
	private: System::Windows::Forms::Label^ lbl_id;
	private: System::Windows::Forms::TextBox^ txt_idPersonne;
	private: System::Windows::Forms::Label^ lbl_nom;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::Label^ lbl_prenom;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::Label^ lbl_message;
	private: System::Windows::Forms::TextBox^ txt_message;
	private: System::Windows::Forms::Button^ btn_first;
	private: System::Windows::Forms::Button^ btn_previous;
	private: System::Windows::Forms::Button^ btn_next;
	private: System::Windows::Forms::Button^ btn_end;
	private: System::Windows::Forms::Button^ btn_nouveau;
	private: System::Windows::Forms::Button^ btn_modifier;
	private: System::Windows::Forms::Button^ btn_supprimer;
	private: System::Windows::Forms::Button^ btn_enregistrer;

		   // Le service qui gere les donnees des personnes
	private: NS_Svc::CL_svc_gestionPersonnes^ gestionClients;
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
	private: System::Windows::Forms::Label^ lbl_adresse;
	private: System::Windows::Forms::DataGridView^ dgv_adresses;














	private:
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
			this->lbl_id = (gcnew System::Windows::Forms::Label());
			this->txt_idPersonne = (gcnew System::Windows::Forms::TextBox());
			this->lbl_nom = (gcnew System::Windows::Forms::Label());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->lbl_prenom = (gcnew System::Windows::Forms::Label());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->lbl_message = (gcnew System::Windows::Forms::Label());
			this->txt_message = (gcnew System::Windows::Forms::TextBox());
			this->btn_first = (gcnew System::Windows::Forms::Button());
			this->btn_previous = (gcnew System::Windows::Forms::Button());
			this->btn_next = (gcnew System::Windows::Forms::Button());
			this->btn_end = (gcnew System::Windows::Forms::Button());
			this->btn_nouveau = (gcnew System::Windows::Forms::Button());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->btn_supprimer = (gcnew System::Windows::Forms::Button());
			this->btn_enregistrer = (gcnew System::Windows::Forms::Button());
			this->lbl_adresse = (gcnew System::Windows::Forms::Label());
			this->dgv_adresses = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_adresses))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_id
			// 
			this->lbl_id->AutoSize = true;
			this->lbl_id->Location = System::Drawing::Point(13, 9);
			this->lbl_id->Name = L"lbl_id";
			this->lbl_id->Size = System::Drawing::Size(66, 13);
			this->lbl_id->TabIndex = 0;
			this->lbl_id->Text = L"ID Personne";
			// 
			// txt_idPersonne
			// 
			this->txt_idPersonne->Location = System::Drawing::Point(16, 27);
			this->txt_idPersonne->Name = L"txt_idPersonne";
			this->txt_idPersonne->ReadOnly = true;
			this->txt_idPersonne->Size = System::Drawing::Size(307, 20);
			this->txt_idPersonne->TabIndex = 1;
			// 
			// lbl_nom
			// 
			this->lbl_nom->AutoSize = true;
			this->lbl_nom->Location = System::Drawing::Point(13, 67);
			this->lbl_nom->Name = L"lbl_nom";
			this->lbl_nom->Size = System::Drawing::Size(32, 13);
			this->lbl_nom->TabIndex = 2;
			this->lbl_nom->Text = L"Nom ";
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(16, 83);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(307, 20);
			this->txt_nom->TabIndex = 3;
			// 
			// lbl_prenom
			// 
			this->lbl_prenom->AutoSize = true;
			this->lbl_prenom->Location = System::Drawing::Point(13, 124);
			this->lbl_prenom->Name = L"lbl_prenom";
			this->lbl_prenom->Size = System::Drawing::Size(46, 13);
			this->lbl_prenom->TabIndex = 4;
			this->lbl_prenom->Text = L"Prenom ";
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(16, 148);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(307, 20);
			this->txt_prenom->TabIndex = 5;
			// 
			// lbl_message
			// 
			this->lbl_message->AutoSize = true;
			this->lbl_message->Location = System::Drawing::Point(13, 371);
			this->lbl_message->Name = L"lbl_message";
			this->lbl_message->Size = System::Drawing::Size(50, 13);
			this->lbl_message->TabIndex = 6;
			this->lbl_message->Text = L"Message";
			// 
			// txt_message
			// 
			this->txt_message->Location = System::Drawing::Point(16, 396);
			this->txt_message->Multiline = true;
			this->txt_message->Name = L"txt_message";
			this->txt_message->ReadOnly = true;
			this->txt_message->Size = System::Drawing::Size(806, 47);
			this->txt_message->TabIndex = 7;
			// 
			// btn_first
			// 
			this->btn_first->Location = System::Drawing::Point(16, 210);
			this->btn_first->Name = L"btn_first";
			this->btn_first->Size = System::Drawing::Size(64, 23);
			this->btn_first->TabIndex = 8;
			this->btn_first->Text = L"<<";
			this->btn_first->UseVisualStyleBackColor = true;
			this->btn_first->Click += gcnew System::EventHandler(this, &MyForm::btn_first_Click);
			// 
			// btn_previous
			// 
			this->btn_previous->Location = System::Drawing::Point(86, 210);
			this->btn_previous->Name = L"btn_previous";
			this->btn_previous->Size = System::Drawing::Size(75, 23);
			this->btn_previous->TabIndex = 9;
			this->btn_previous->Text = L"<";
			this->btn_previous->UseVisualStyleBackColor = true;
			this->btn_previous->Click += gcnew System::EventHandler(this, &MyForm::btn_previous_Click);
			// 
			// btn_next
			// 
			this->btn_next->Location = System::Drawing::Point(167, 210);
			this->btn_next->Name = L"btn_next";
			this->btn_next->Size = System::Drawing::Size(75, 23);
			this->btn_next->TabIndex = 10;
			this->btn_next->Text = L">";
			this->btn_next->UseVisualStyleBackColor = true;
			this->btn_next->Click += gcnew System::EventHandler(this, &MyForm::btn_next_Click);
			// 
			// btn_end
			// 
			this->btn_end->Location = System::Drawing::Point(248, 210);
			this->btn_end->Name = L"btn_end";
			this->btn_end->Size = System::Drawing::Size(75, 23);
			this->btn_end->TabIndex = 11;
			this->btn_end->Text = L">>";
			this->btn_end->UseVisualStyleBackColor = true;
			this->btn_end->Click += gcnew System::EventHandler(this, &MyForm::btn_end_Click);
			// 
			// btn_nouveau
			// 
			this->btn_nouveau->Location = System::Drawing::Point(16, 264);
			this->btn_nouveau->Name = L"btn_nouveau";
			this->btn_nouveau->Size = System::Drawing::Size(75, 23);
			this->btn_nouveau->TabIndex = 12;
			this->btn_nouveau->Text = L"Nouveau";
			this->btn_nouveau->UseVisualStyleBackColor = true;
			this->btn_nouveau->Click += gcnew System::EventHandler(this, &MyForm::btn_nouveau_Click);
			// 
			// btn_modifier
			// 
			this->btn_modifier->Location = System::Drawing::Point(16, 293);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(75, 23);
			this->btn_modifier->TabIndex = 13;
			this->btn_modifier->Text = L"Modifier";
			this->btn_modifier->UseVisualStyleBackColor = true;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &MyForm::btn_modifier_Click);
			// 
			// btn_supprimer
			// 
			this->btn_supprimer->Location = System::Drawing::Point(16, 336);
			this->btn_supprimer->Name = L"btn_supprimer";
			this->btn_supprimer->Size = System::Drawing::Size(75, 23);
			this->btn_supprimer->TabIndex = 14;
			this->btn_supprimer->Text = L"Supprimer";
			this->btn_supprimer->UseVisualStyleBackColor = true;
			this->btn_supprimer->Click += gcnew System::EventHandler(this, &MyForm::btn_supprimer_Click);
			// 
			// btn_enregistrer
			// 
			this->btn_enregistrer->Location = System::Drawing::Point(131, 257);
			this->btn_enregistrer->Name = L"btn_enregistrer";
			this->btn_enregistrer->Size = System::Drawing::Size(192, 95);
			this->btn_enregistrer->TabIndex = 15;
			this->btn_enregistrer->Text = L"Enregistrer";
			this->btn_enregistrer->UseVisualStyleBackColor = true;
			this->btn_enregistrer->Click += gcnew System::EventHandler(this, &MyForm::btn_enregistrer_Click);
			// 
			// lbl_adresse
			// 
			this->lbl_adresse->AutoSize = true;
			this->lbl_adresse->Location = System::Drawing::Point(358, 9);
			this->lbl_adresse->Name = L"lbl_adresse";
			this->lbl_adresse->Size = System::Drawing::Size(50, 13);
			this->lbl_adresse->TabIndex = 16;
			this->lbl_adresse->Text = L"Adresses";
			// 
			// dgv_adresses
			// 
			this->dgv_adresses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_adresses->Location = System::Drawing::Point(361, 27);
			this->dgv_adresses->Name = L"dgv_adresses";
			this->dgv_adresses->Size = System::Drawing::Size(744, 332);
			this->dgv_adresses->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1128, 457);
			this->Controls->Add(this->dgv_adresses);
			this->Controls->Add(this->btn_enregistrer);
			this->Controls->Add(this->lbl_adresse);
			this->Controls->Add(this->btn_supprimer);
			this->Controls->Add(this->btn_modifier);
			this->Controls->Add(this->btn_nouveau);
			this->Controls->Add(this->btn_end);
			this->Controls->Add(this->btn_next);
			this->Controls->Add(this->btn_previous);
			this->Controls->Add(this->btn_first);
			this->Controls->Add(this->txt_message);
			this->Controls->Add(this->lbl_message);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->lbl_prenom);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->lbl_nom);
			this->Controls->Add(this->txt_idPersonne);
			this->Controls->Add(this->lbl_id);
			this->Name = L"MyForm";
			this->Text = L"Application BDD";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_adresses))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		// Initialisation de l'interface graphique
		this->index = 0;
		this->mode = "RIEN";
		this->dsPersonne = gcnew Data::DataSet();
		this->dsAdresse = gcnew Data::DataSet();

		// Initialisation du gestionnaire de client
		this->gestionClients = gcnew NS_Svc::CL_svc_gestionPersonnes();

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
		this->dgv_adresses->Columns->Clear();
		this->txt_idPersonne->Clear();
		this->txt_nom->Clear();
		this->txt_prenom->Clear();

		// On verifie que la liste retournée n'est pas vide
		if (rowsCount == 0)
			return;

		// On remplit l'interface avec les informations de la personne index de la bdd
		this->txt_idPersonne->Text = Convert::ToString(this->dsPersonne->Tables["clients"]->Rows[this->index]->ItemArray[0]);
		this->txt_nom->Text = Convert::ToString(this->dsPersonne->Tables["clients"]->Rows[this->index]->ItemArray[1]);
		this->txt_prenom->Text = Convert::ToString(this->dsPersonne->Tables["clients"]->Rows[this->index]->ItemArray[2]);

		// On remplit l'interface avec les informations des adresses de la personne
		this->dsAdresse = this->gestionClients->adressesClient(Convert::ToInt32(this->txt_idPersonne->Text), "adresses");
		this->dgv_adresses->DataSource = this->dsAdresse;
		this->dgv_adresses->DataMember = "adresses";
		// On ne rend pas visible les colonnes "techniques" à l'utilisateur
		this->dgv_adresses->Columns["id_personne"]->Visible = false;
		this->dgv_adresses->Columns["id_adresse"]->Visible = false;

		// Message pour l'utilisateur
		this->txt_message->Text = "Enregistrement n° : " + (this->index + 1);
	}

	private: System::Void btn_first_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
		this->loadData(this->index);
	}

	private: System::Void btn_previous_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->index > 0)
		{
			this->index--;
			this->loadData(this->index);
		}
	}

	private: System::Void btn_next_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->index < this->rowsCount - 1)
		{
			this->index++;
			this->loadData(this->index);
		}
	}

	private: System::Void btn_end_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = this->rowsCount - 1;
		this->loadData(this->index);
	}

	private: System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// On reset les informations de l'interface
		this->txt_idPersonne->Clear();
		this->txt_nom->Clear();
		this->txt_prenom->Clear();
		this->dgv_adresses->DataSource = nullptr;
		this->dgv_adresses->Columns->Add("Adresse", "Adresse");
		this->dgv_adresses->Columns->Add("Ville", "Ville");
		this->dgv_adresses->Columns->Add("Cp", "Cp");

		// Mode actuel de saisie
		this->mode = "nouv";

		// Message utilisateur
		this->txt_message->Text = "Veuillez saisir les information de la nouvelle personne et enregistrer";
	}

	private: System::Void btn_modifier_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Mode actuel de saisie
		this->mode = "maj";
		// Message utilisateur
		this->txt_message->Text = "Veuillez modifier les information de la nouvelle courante et enregistrer.";
	}

	private: System::Void btn_supprimer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Mode actuel de saisie
		this->mode = "sup";
		// Message utilisateur
		this->txt_message->Text = "Veuillez confirmer la suppression de la personne en cours en enregistrant.";
	}

	private: System::Void btn_enregistrer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Suivant le mode de saisie
		if (this->mode == "nouv")
		{
			int i;
			int ii;

			// On cree la liste des adresses et on la remplit avec les informations saisies par l'utilisateur
			// Comme c'est une creation, on ne recupere pas l'id de l'adresse (sera cree automatiquement)
			int taille = (this->dgv_adresses->RowCount - 1) * 3;
			array<String^>^ lesAdresses = gcnew array<String^>(taille);

			ii = 0;
			for (i = 0; i < taille - 1; i++)
			{
				lesAdresses[i] = Convert::ToString(this->dgv_adresses[0, ii]->Value); i++;
				lesAdresses[i] = Convert::ToString(this->dgv_adresses[1, ii]->Value); i++;
				lesAdresses[i] = Convert::ToString(this->dgv_adresses[2, ii]->Value);
				ii++;
			}
			// On ajoute le client a la bdd
			this->gestionClients->ajouter(this->txt_nom->Text, this->txt_prenom->Text, lesAdresses);
		}
		else if (this->mode == "maj")
		{
			int i;
			int ii;

			// On cree la liste des adresses et on la remplit avec les informations saisies par l'utilisateur
			// Comme c'est une mise à jour, on a besoin l'id de l'adresse
			int taille = (this->dgv_adresses->RowCount - 1) * 4;
			array<String^>^ lesAdresses = gcnew array<String^>(taille);

			ii = 0;
			this->dgv_adresses->Columns["id_adresse"]->Visible = true;
			for (i = 0; i < taille - 1; i++)
			{
				String^ id = Convert::ToString(this->dgv_adresses[0, ii]->Value);
				String^ adresse = Convert::ToString(this->dgv_adresses[1, ii]->Value);
				String^ ville = Convert::ToString(this->dgv_adresses[2, ii]->Value);
				String^ cp = Convert::ToString(this->dgv_adresses[3, ii]->Value);

				lesAdresses[i++] = id;
				lesAdresses[i++] = adresse;
				lesAdresses[i++] = ville;
				lesAdresses[i++] = cp;
				ii++;
			}
			// On modifie le client dans la bdd
			this->gestionClients->modifier(Convert::ToInt32(this->txt_idPersonne->Text),
				this->txt_nom->Text, this->txt_prenom->Text, lesAdresses);

		}
		else if (this->mode == "sup")
		{
			// On supprime le client de la bdd
			this->gestionClients->supprimer(Convert::ToInt32(this->txt_idPersonne->Text));
		}

		// On met à jour l'interface graphique avec les informations du premier client (s'il existe)
		this->index = 0;
		this->loadData(this->index);
		this->txt_message->Text += "Traitement terminé.";
	}

};
}
