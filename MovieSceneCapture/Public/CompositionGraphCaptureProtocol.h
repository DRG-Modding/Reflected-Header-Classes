#pragma once
#include "CoreMinimal.h"
#include "MovieSceneImageCaptureProtocolBase.h"
#include "CompositionGraphCapturePasses.h"
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
#include "EHDRCaptureGamut.h"
#include "CompositionGraphCaptureProtocol.generated.h"

class UMaterialInterface;

UCLASS()
class MOVIESCENECAPTURE_API UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FCompositionGraphCapturePasses IncludeRenderPasses;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bCaptureFramesInHDR;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 HDRCompressionQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TEnumAsByte<EHDRCaptureGamut> CaptureGamut;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FSoftObjectPath PostProcessingMaterial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bDisableScreenPercentage;
    
private:
    UPROPERTY(Transient)
    UMaterialInterface* PostProcessingMaterialPtr;
    
public:
    UCompositionGraphCaptureProtocol();
};

