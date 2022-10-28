#include "CLa.h"
#include <iostream>

using namespace std;

void CLa::ma1(void)
{
	// ma1 utilise un objet qui fait partie intégrante de la classe CLa. 
	// Si l’objet de type CLa est détruit, l’objet de type CLb sera détruit aussi.
	
	cout << "Je travaille pour CLa" << endl;
	this->b1.mb();
}
void CLa::ma2(void)
{
	// ma2 utilise un pointeur qu’elle alloue. Le type CLa peut détruire l’objet de type CLb si besoin.
	// L’objet de type CLb ne fait pas partie du type CLa, juste son pointeur.
	// Si l’objet de type CLa est détruit sans que l’objet de type CLb soit détruit par le type CLa, la référence sera perdue; il y aura une fuite de mémoire.
	
	cout << "Je travaille pour CLa" << endl;
	this->p1 = new CLb();
	this->p1->mb();
}
void CLa::ma3(CLb ov)
{
	// m3 utilise une copie locale d’un objet de type CLb. Les deux objets sont indépendants.
	// m3 ne peut pas modifier l’objet de type CLb créé par le main.

	cout << "Je travaille pour CLa" << endl;
	ov.mb();
}
void CLa::ma4(CLb& oa)
{
	// m4 utilise la référence d'un objet de type CLb pour le manipuler.
	// m4 a la possibilité de modifier directement l’objet d’origine. 
	// L’objet de type CLb n’est pas une copie locale utilisée par m4.

	cout << "Je travaille pour CLa" << endl;
	oa.mb();
}
void CLa::ma5(CLb* op)
{
	// m5 utilise un pointeur de type CLb. Elle ne manipule pas directement 
	// l’objet de type CLb  mais son pointeur.

	cout << "Je travaille pour CLa" << endl;
	op->mb();
}
