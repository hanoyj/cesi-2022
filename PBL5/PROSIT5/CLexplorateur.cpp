#include "CLexplorateur.h"

namespace NS_composants
{
	array<String^>^ CLfichier::explorerUnDossier(String^ dossier)
	{
		try {
			array<String^>^ file = Directory::GetFiles(dossier); // probl�me 9
			return file;
		}
		catch (ArgumentException^) {
			// Si le dossier n'est pas s�lectionn� (bouton Annuler) ou pas correct
			return gcnew array<String^>(0);
		}
	}

	void CLfichier::effacer(String^ fichier)
	{
		System::IO::File::Delete(fichier);
	}

	void CLfichier::copier(String^ fichierSource, String^ fichierDestination)
	{
		String^ nomDeFichierExtension = System::IO::Path::GetFileName(fichierSource);
		System::IO::File::Copy(fichierSource, fichierDestination + System::IO::Path::DirectorySeparatorChar + nomDeFichierExtension);
	}
}