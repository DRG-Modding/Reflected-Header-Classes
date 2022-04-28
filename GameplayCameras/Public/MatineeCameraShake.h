#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakeBase -FallbackName=CameraShakeBase
#include "ROscillator.h"
#include "VOscillator.h"
#include "FOscillator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECameraShakePlaySpace -FallbackName=ECameraShakePlaySpace
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MinimalViewInfo -FallbackName=MinimalViewInfo
#include "MatineeCameraShake.generated.h"

class UCameraAnim;
class UCameraAnimationSequence;
class UMatineeCameraShake;
class USequenceCameraShakePattern;
class UCameraAnimInst;
class APlayerCameraManager;
class UCameraShakeSourceComponent;

UCLASS(Blueprintable, EditInlineNew)
class GAMEPLAYCAMERAS_API UMatineeCameraShake : public UCameraShakeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float OscillationDuration;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FROscillator RotOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVOscillator LocOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFOscillator FOVOscillation;
    
    UPROPERTY(EditAnywhere)
    float AnimPlayRate;
    
    UPROPERTY(EditAnywhere)
    float AnimScale;
    
    UPROPERTY(EditAnywhere)
    float AnimBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float AnimBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float RandomAnimSegmentDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnimationSequence* AnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRandomAnimSegment: 1;
    
    UPROPERTY(EditAnywhere, Transient)
    float OscillatorTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraAnimInst* AnimInst;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USequenceCameraShakePattern* SequenceShakePattern;
    
public:
    UMatineeCameraShake();
    UFUNCTION(BlueprintCallable)
    static UMatineeCameraShake* StartMatineeCameraShakeFromSource(APlayerCameraManager* PlayerCameraManager, TSubclassOf<UMatineeCameraShake> ShakeClass, UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable)
    static UMatineeCameraShake* StartMatineeCameraShake(APlayerCameraManager* PlayerCameraManager, TSubclassOf<UMatineeCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveStopShake(bool bImmediately);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceivePlayShake(float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReceiveIsFinished() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintUpdateCameraShake(float DeltaTime, float alpha, const FMinimalViewInfo& POV, FMinimalViewInfo& ModifiedPOV);
    
};

