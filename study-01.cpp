#include "sierrachart.h"

SCDLLName("SCVSTMPL")


SCSFExport scsf_Study01(SCStudyInterfaceRef sc)
{

    SCInputRef dummy01 = sc.Input[0];

    // Configuration
    if (sc.SetDefaults)
    {
        sc.GraphRegion = 0;

        dummy01.Name = "Dummy Parameter";
        dummy01.SetInt(4711);

        return;
    }


    return;
}

