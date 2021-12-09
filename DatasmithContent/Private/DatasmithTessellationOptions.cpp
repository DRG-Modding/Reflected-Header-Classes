#include "DatasmithTessellationOptions.h"

FDatasmithTessellationOptions::FDatasmithTessellationOptions() {
    this->ChordTolerance = 0.00f;
    this->MaxEdgeLength = 0.00f;
    this->NormalTolerance = 0.00f;
    this->StitchingTechnique = EDatasmithCADStitchingTechnique::StitchingNone;
}

