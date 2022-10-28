#include "CLa.h"
#include <iostream>

using namespace std;

void CLa::ma1(void)
{
	// ma1 utilise un objet qui fait partie int�grante de la classe CLa. 
	// Si l�objet de type CLa est d�truit, l�objet de type CLb sera d�truit aussi.
	
	cout << "Je travaille pour CLa" << endl;
	this->b1.mb();
}
void CLa::ma2(void)
{
	// ma2 utilise un pointeur qu�elle alloue. Le type CLa peut d�truire l�objet de type CLb si besoin.
	// L�objet de type CLb ne fait pas partie du type CLa, juste son pointeur.
	// Si l�objet de type CLa est d�truit sans que l�objet de type CLb soit d�truit par le type CLa, la r�f�rence sera perdue; il y aura une fuite de m�moire.
	
	cout << "Je travaille pour CLa" << endl;
	this->p1 = new CLb();
	this->p1->mb();
}
void CLa::ma3(CLb ov)
{
	// m3 utilise une copie locale d�un objet de type CLb. Les deux objets sont ind�pendants.
	// m3 ne peut pas modifier l�objet de type CLb cr�� par le main.

	cout << "Je travaille pour CLa" << endl;
	ov.mb();
}
void CLa::ma4(CLb& oa)
{
	// m4 utilise la r�f�rence d'un objet de type CLb pour le manipuler.
	// m4 a la possibilit� de modifier directement l�objet d�origine. 
	// L�objet de type CLb n�est pas une copie locale utilis�e par m4.

	cout << "Je travaille pour CLa" << endl;
	oa.mb();
}
void CLa::ma5(CLb* op)
{
	// m5 utilise un pointeur de type CLb. Elle ne manipule pas directement 
	// l�objet de type CLb  mais son pointeur.

	cout << "Je travaille pour CLa" << endl;
	op->mb();
}
