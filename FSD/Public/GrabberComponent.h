#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagQuery
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "EUseRestriction.h"
#include "EOutline.h"
#include "EGrabbedStateCameraMode.h"
#include "GrabberComponent.generated.h"

class UDialogDataAsset;
class ADeepPathfinderCharacter;
class AActor;
class USkeletalMeshComponent;
class UPrimitiveComponent;
class USoundCue;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrabberComponentOnReleasedActor, AActor*, aGrabbedActor);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrabberComponentOnGrabbedActor, AActor*, aGrabbedActor);

UCLASS(BlueprintType)
class UGrabberComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGrabberComponentOnGrabbedActor OnGrabbedActor;
    
    UPROPERTY(BlueprintAssignable)
    FGrabberComponentOnReleasedActor OnReleasedActor;
    
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery TagFilter;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> GrabbedActor;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ADeepPathfinderCharacter> PathfinderOwner;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USkeletalMeshComponent> OwnerMesh;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> TargetClippingWith;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* BeginGrabedSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* GrabedLoopSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* EndGrabedSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* BeginGrabbedShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* EndGrabbedShout;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* AttentionGrabbedShout;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentlyGrabbed)
    AActor* CurrentlyGrabbed;
    
    UPROPERTY(EditAnywhere)
    EUseRestriction UseRestriction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName GrabAttachName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GrabTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarryCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EOutline PlayerOutlineOnGrab;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EGrabbedStateCameraMode CameraMode;
    
    UPROPERTY(EditAnywhere)
    bool TrackPlayerCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ManualGrabTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanPlayerShoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool NeedsPathToTarget;
    
    UFUNCTION()
    void SetPlayerReleased();
    
    UFUNCTION()
    bool SetPlayerGrabbed();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReleaseTarget();
    
protected:
    UFUNCTION()
    void OnRep_CurrentlyGrabbed();
    
    UFUNCTION()
    void OnPrimWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
public:
    UFUNCTION()
    void OnParentDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    bool IsGrabbedTargetValid() const;
    
    UFUNCTION(BlueprintPure)
    bool HasGrabbed() const;
    
    UFUNCTION(BlueprintCallable)
    bool GrabTarget(AActor* aGrabTarget);
    
    UFUNCTION(BlueprintPure)
    bool CanGrabTarget(AActor* aTarget) const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UGrabberComponent();
};

