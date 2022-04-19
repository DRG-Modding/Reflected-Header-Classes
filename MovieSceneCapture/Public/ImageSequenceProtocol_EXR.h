#pragma once
#include "CoreMinimal.h"
#include "ImageSequenceProtocol.h"
#include "EHDRCaptureGamut.h"
#include "ImageSequenceProtocol_EXR.generated.h"

UCLASS()
class MOVIESCENECAPTURE_API UImageSequenceProtocol_EXR : public UImageSequenceProtocol {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompressed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHDRCaptureGamut> CaptureGamut;
    
    UImageSequenceProtocol_EXR();
};

