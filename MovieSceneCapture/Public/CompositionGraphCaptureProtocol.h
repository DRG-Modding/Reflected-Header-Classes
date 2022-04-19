#pragma once
#include "CoreMinimal.h"
#include "MovieSceneImageCaptureProtocolBase.h"
#include "EHDRCaptureGamut.h"
#include "CompositionGraphCapturePasses.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "CompositionGraphCaptureProtocol.generated.h"

class UMaterialInterface;

UCLASS()
class MOVIESCENECAPTURE_API UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompositionGraphCapturePasses IncludeRenderPasses;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCaptureFramesInHDR;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HDRCompressionQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHDRCaptureGamut> CaptureGamut;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath PostProcessingMaterial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableScreenPercentage;
    
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PostProcessingMaterialPtr;
    
public:
    UCompositionGraphCaptureProtocol();
};

