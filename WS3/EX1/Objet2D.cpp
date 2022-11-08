#include "Objet2D.h"

Objet2D::Objet2D() {
	dim1 = 0;
	dim2 = 0;
}

Objet2D::Objet2D(int dim1, int dim2) {
	this->dim1 = dim1;
	this->dim2 = dim2;
}

int Objet2D::getPerimetre() {
	return 0;
}

int Objet2D::getAire() {
	return 0;
}

string Objet2D::afficheInfo() {
	return "Objet2D";
}
