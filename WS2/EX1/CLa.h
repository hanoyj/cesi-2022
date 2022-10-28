#pragma once

#include "CLb.h"

class CLa
{
private:
	// Partie intégrate de CLa (donc responsable de la vie de l'objet CLb par nature)
	CLb b1; 
	// Pointeur
	CLb* p1;

public:
	void ma1(void); 
	void ma2(void); 
	void ma3(CLb); 
	void ma4(CLb&); 
	void ma5(CLb*);
};
