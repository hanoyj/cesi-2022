// Virtual.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;
class A
{
public:
    virtual void print() {
        cout << "print class A" << endl;
    }
    void display() {
        cout << "display class A" << endl;
    }
};

class B : public A
{
public:
    void print() {
        cout << "print class B" << endl;
    }
    void display() {
        cout << "display class B" << endl;
    }
};

int main()
{
    A* a;
    B b;
    a = &b;

    // Fonction virtuelle, liée au moment de l'exécution
    a->print();
    // Fonction non virtuelle, liée à la compilation
    a->display();
}