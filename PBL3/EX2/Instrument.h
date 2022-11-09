#pragma once

/*
* Ma classe instrument est une interface (d'ou le I en pr�fixe)
* Elle contient une methode virtuelle pure permettant de jouer un son car on considere ici que tout instrument doit jouer un son
* Toute classe derivant (ou implementant cette interface) doit obligatoirement redefinir la methode virtuelle pure
*/
class IInstrument
{
public:
	// methode virtuelle pure
	virtual void jouer() = 0;
};

/*
* La classe piano impl�mente l'interface IInstrument, elle doit jouer un son
*/
class Piano : public IInstrument
{
public:
	// Constructeur par defaut (pas forcement utile ici, je n'ai pas de membre de classe)
	Piano();

	// La methode virtuelle d�riv�e, sp�cifique � la classe Piano
	void jouer();
};

/*
* La classe saxo impl�mente l'interface IInstrument, elle doit jouer un son
*/
class Saxo : public IInstrument
{
public:
	// Constructeur par defaut (pas forcement utile ici, je n'ai pas de membre de classe)
	Saxo();

	// La methode virtuelle d�riv�e, sp�cifique � la classe Saxo
	void jouer();
};