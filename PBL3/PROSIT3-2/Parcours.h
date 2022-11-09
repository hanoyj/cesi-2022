#pragma once

#include <vector>

/*
* Classe abstraite d'un parcours. Elle contient des fonctions virtuelles avec une implementation de base, elle peut etre derviee
* 
* D�finition : une classe abstraite est une classe dont l'impl�mentation n'est pas compl�te et qui n'est pas instanciable. Elle sert de base � d'autres classes d�riv�es. 
* 
* Ici, je la nomme Abstract mais ce n'est pas totalement vrai, puisque la classe peut �tre instanci�e (aucune methode virtuelle pure restante)
*/
template <class P>
class Parcours
{
public:
	// Constructeur de parcours prenant en parametre la taille du parcours
	Parcours();

	// Permet d'ajouter un point au parcours
	void ajouterPoint(P* p);

	// Calcul la distance du parcours
	double calculDistance();

protected:
	// Liste des points r�alisant le parcours, c'est un tableau de pointeur de Point
	std::vector<P*> points;
};


template <class P>
Parcours<P>::Parcours()
{
}

template <class P>
void Parcours<P>::ajouterPoint(P* p)
{
	this->points.push_back(p);
}

template <class P>
double Parcours<P>::calculDistance()
{
	double distance = 0;
	int size = (int) points.size();
	for (int i = 0; i < size - 1; i++)
	{
		P* p1 = points[i + 1];
		P* p2 = points[i];
		distance += p1->distance(*p2);
	}
	return distance;
}
