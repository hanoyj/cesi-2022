#include "ListeObjets.h"

ListeObjets::ListeObjets(int size) :
	taille(size)
{
	index = 0;
	tab = new Objet2D*[size];
}

ListeObjets::~ListeObjets()
{
	delete* tab;
	delete tab;
}

void ListeObjets::add(Objet2D* obj)
{
	this->add(obj, this->index);
	this->index++;
}

void ListeObjets::add(Objet2D* obj, int index)
{
	tab[index] = obj;
}

void ListeObjets::afficheInfos()
{
	for (int i = 0; i < taille; ++i)
	{
		cout << "Objet[" << i << "] " << tab[i]->afficheInfo() << endl;
	}
}
