// EX1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

#include "CLa.h"
#include "CLb.h"
#include <iostream>

using namespace std;


int main()
{
	int pause; 
	// Allocation statique
	CLa oa;
	// Allocation statique
	CLb ob;
	// Déclaration d'un pointeur CLb
	CLb* pb;
	// Affectation de ob au pointeur pb (@mémoire)
	pb = &ob; 
	
	oa.ma1(); 
	oa.ma2(); 
	oa.ma3(ob); 
	oa.ma4(*pb);
	oa.ma5(pb);
	cin >> pause;

	return 0;
}

