#pragma once

#include "CL_cmp_A.h"
#include "CL_cmp_B.h"

// Il faudrait un destructeur pour libérer les ressources
class CL_svc_T1
{
private:
	CL_cmp_A* oA;
	CL_cmp_B* oB;

public:
    CL_svc_T1(void);

    void svc_T1_S1(void);
    void svc_T1_S2(void);
};

