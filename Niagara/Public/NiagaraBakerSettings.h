#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraBakerTextureSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "ENiagaraBakerViewMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "NiagaraBakerSettings.generated.h"

UCLASS(Blueprintable)
class NIAGARA_API UNiagaraBakerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartSeconds;
    
    UPROPERTY(EditAnywhere)
    float DurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FramesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPreviewLooping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint FramesPerDimension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraBakerTextureSettings> OutputTextures;
    
    UPROPERTY(EditAnywhere)
    ENiagaraBakerViewMode CameraViewportMode;
    
    UPROPERTY(EditAnywhere)
    FVector CameraViewportLocation[7];
    
    UPROPERTY(EditAnywhere)
    FRotator CameraViewportRotation[7];
    
    UPROPERTY(EditAnywhere)
    float CameraOrbitDistance;
    
    UPROPERTY(EditAnywhere)
    float CameraFOV;
    
    UPROPERTY(EditAnywhere)
    float CameraOrthoWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseCameraAspectRatio: 1;
    
    UPROPERTY(EditAnywhere)
    float CameraAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRenderComponentOnly: 1;
    
    UNiagaraBakerSettings();
};

