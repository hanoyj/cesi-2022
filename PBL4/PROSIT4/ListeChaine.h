#pragma once
#include <iostream>

using namespace std;


// structure template d'un noeud de la liste chain�e
// permet d'avoir une liste chain�e non sp�cialis�e avec le type MSG d'un message radio
template <class T>
struct Noeud
{
public:
    Noeud<T>* next = NULL;      // noeud suivant
    T data;                     // donn�e du noeud
};

// classe template d'une liste chain�e
// objectif : l'impl�mentation de la liste chain�e est donc isol�e ici
template <class T>
class ListeChainee
{
private:
    int length;             // taille de la liste chain�e
    Noeud<T>* head;         // t�te de la liste chain�e (ie dernier �l�ment ajout�)
    Noeud<T>* first;         // premier �l�ment ajout�

public:
    // constructeur
    ListeChainee();
    // destructeur
    ~ListeChainee();

    // m�thode d'ajout d'un �l�ment dans la liste chain�e
    void add(const T& data);
    // m�thode d'affichage du contenu de la liste chain�e
    void print();

    // m�thode permettant de r�cup�rer l'�lement � la postion index
    T get(const int index);

    // m�thode retournant la taille de la liste (ie nombre d'�l�ments)
    inline int size() const { return this->length; }
};



// constructeur
template <class T>
ListeChainee<T>::ListeChainee() {
    this->length = 0;
    this->head = NULL;
    this->first = NULL;
}

// destructeur
template <class T>
ListeChainee<T>::~ListeChainee() {
    cout << "Destruction de la liste chainee" << endl;

    // d�truit l'ensemble des noeuds de la liste chain�e
    Noeud<T>* next = head;
    Noeud<T>* cur = NULL;
    while (next != NULL) {
        cur = next;
        next = next->next;
        delete cur;
    }
}

// m�thode d'ajout d'un �l�ment en t�te de liste
template <class T>
void ListeChainee<T>::add(const T& data) {
    Noeud<T>* node = new Noeud<T>();
    node->data = data;
    node->next = NULL;

    if (this->head == NULL)
    {
        // cas du premier �l�ment : affectation du la liste
        this->head = node;
        // stockage du premier �l�ment
        this->first = node;
    }
    else
    {
        // affectation du maillon suivant
        this->head->next = node;
        this->head = this->head->next;

    }
    this->head = node;
    this->length++;
}

// m�thode d'affichage du contenu de la liste
template <class T>
void ListeChainee<T>::print() {
    // on commence � partir du premier �l�ment
    Noeud<T>* head = this->first;
    int i = 1;
    // parcourt de l'ensemble des noeuds
    while (head) {
        cout << i << ": " << head->data << endl;
        head = head->next;
        i++;
    }
}

// m�thode permettant d'acc�der � l'�l�ment positionn� � un index particuler dans la liste
template <class T>
T ListeChainee<T>::get(int index) {
    Noeud<T>* curr = this->first;
    for (int i = 0; i < index; ++i) {
        curr = curr->next;
    }
    return curr->data;
}

