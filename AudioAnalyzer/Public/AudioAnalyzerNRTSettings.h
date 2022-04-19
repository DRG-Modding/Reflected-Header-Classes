#pragma once
#include "CoreMinimal.h"
#include "AudioAnalyzerAsset.h"
#include "AudioAnalyzerNRTSettings.generated.h"

UCLASS(Abstract, EditInlineNew)
class AUDIOANALYZER_API UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset {
    GENERATED_BODY()
public:
    UAudioAnalyzerNRTSettings();
};

