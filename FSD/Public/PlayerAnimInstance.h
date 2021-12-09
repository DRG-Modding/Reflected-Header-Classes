#pragma once
#include "CoreMinimal.h"
#include "GliderAnimSync.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
#include "FootStepNotifyTarget.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ECharacterState.h"
#include "ECharacterMoveDirection.h"
#include "PlayerAnimInstance.generated.h"

class UParticleSystem;
class USoundCue;
class APlayerCharacter;
class UItemCharacterAnimationSet;
class UAnimMontage;
class UUseAnimationSetting;

UCLASS(NonTransient)
class UPlayerAnimInstance : public UAnimInstance, public IFootStepNotifyTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool IsFirstPerson;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WalkTreshhold;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* DefaultFootstepParticle;
    
    UPROPERTY(EditAnywhere)
    USoundCue* DefaultFootStepSound;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UItemCharacterAnimationSet* AnimationSetA;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UItemCharacterAnimationSet* AnimationSetB;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool AnimationSetAIsPrimary;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    ECharacterState CharacterState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    float WalkAnimationSpeed;
    
    UPROPERTY(EditAnywhere)
    float RunAnimationSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float WalkRate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float RunRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Direction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator AimRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsInitialized;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float Pitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsStandingDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsInAir;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsMoving;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsWalking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsSprinting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsAiming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsAlive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsLyingDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool OnZipline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsGrinding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsParalyzed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsGrabbed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsAttached;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool BeingRevived;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsLookingAtMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsControllingEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector ControllingEnemyRootOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector ControllingEnemyDirectionAlpha;
    
    UPROPERTY(BlueprintReadWrite)
    float GliderAnimationLength;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGliderAnimSync GliderAnimSync;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsAllowedToPlayMovementAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CropBeard;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    UAnimMontage* ActiveUseMontage;
    
    UPROPERTY(Transient)
    UUseAnimationSetting* CurrentUseSetting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    UAnimMontage* EndUseMontageToPlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AimDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReviveProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReviveExplicitTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IdleTimeForInspect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RepeatDealayForInspect;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    ECharacterMoveDirection CharacterMoveDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float MoveAdjustmentAngle;
    
    UPROPERTY(EditAnywhere)
    UItemCharacterAnimationSet* CarryAnimationSet;
    
    UPROPERTY(EditAnywhere)
    UItemCharacterAnimationSet* DefaultAnimationSet;
    
public:
    UFUNCTION(BlueprintCallable)
    bool StopUseMontage(bool stopImmediately);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StopInspectWeapon();
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartInspectWeapon();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAiming();
    
    UFUNCTION(BlueprintCallable)
    void PlayUseMontages(UUseAnimationSetting* useSetting);
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingMontageInGroup(FName GroupName) const;
    
    UFUNCTION(BlueprintPure)
    UItemCharacterAnimationSet* GetAnimationSet() const;
    
    UPlayerAnimInstance();
};

