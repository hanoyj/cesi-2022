#include "CL_svc_T2.h"

CL_svc_T2::CL_svc_T2(CL_cmp_C* oC) 
{ 
	this->oC = oC; 
}
	
void CL_svc_T2::svc_T2_S1(void) 
{ 
	this->oC->workC(); 
}