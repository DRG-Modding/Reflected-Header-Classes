#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioAnalyzer -ObjectName=AudioAnalyzerNRT -FallbackName=AudioAnalyzerNRT
#include "AudioSynesthesiaNRT.generated.h"

UCLASS(Abstract, EditInlineNew)
class AUDIOSYNESTHESIA_API UAudioSynesthesiaNRT : public UAudioAnalyzerNRT {
    GENERATED_BODY()
public:
    UAudioSynesthesiaNRT();
};

