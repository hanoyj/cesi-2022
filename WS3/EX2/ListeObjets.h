#pragma once

#include "Objet2D.h"

class ListeObjets
{
private:
	Objet2D** tab;
	int taille;
	int index;

public:
	ListeObjets(int taille);
	~ListeObjets();

	void add(Objet2D* obj);
	void add(Objet2D* obj, int index);
	void afficheInfos();
};

