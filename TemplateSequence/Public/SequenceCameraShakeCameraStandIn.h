#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraFocusSettings -FallbackName=CameraFocusSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSceneComponentImpersonator -FallbackName=MovieSceneSceneComponentImpersonator
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraLensSettings -FallbackName=CameraLensSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraFilmbackSettings -FallbackName=CameraFilmbackSettings
#include "SequenceCameraShakeCameraStandIn.generated.h"

UCLASS(Blueprintable)
class USequenceCameraShakeCameraStandIn : public UObject, public IMovieSceneSceneComponentImpersonator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bConstrainAspectRatio: 1;
    
    UPROPERTY(EditAnywhere)
    float AspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(EditAnywhere)
    float PostProcessBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFilmbackSettings Filmback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraLensSettings LensSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFocusSettings FocusSettings;
    
    UPROPERTY(EditAnywhere)
    float CurrentFocalLength;
    
    UPROPERTY(EditAnywhere)
    float CurrentAperture;
    
    UPROPERTY(EditAnywhere)
    float CurrentFocusDistance;
    
    USequenceCameraShakeCameraStandIn();
    
    // Fix for true pure virtual functions not being implemented
};

