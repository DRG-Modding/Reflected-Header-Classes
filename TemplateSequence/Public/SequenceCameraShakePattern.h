#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakePattern -FallbackName=CameraShakePattern
#include "SequenceCameraShakePattern.generated.h"

class UCameraAnimationSequence;
class USequenceCameraShakeSequencePlayer;
class USequenceCameraShakeCameraStandIn;

UCLASS(Blueprintable, EditInlineNew)
class TEMPLATESEQUENCE_API USequenceCameraShakePattern : public UCameraShakePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnimationSequence* Sequence;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float RandomSegmentDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomSegment;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USequenceCameraShakeSequencePlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USequenceCameraShakeCameraStandIn* CameraStandIn;
    
public:
    USequenceCameraShakePattern();
};

