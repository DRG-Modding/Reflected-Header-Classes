#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagAssetInterface
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "MiningPodDialogs.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "EMiningPodMission.h"
#include "EMiningPodState.h"
#include "EMiningPodRampState.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "MiningPod.generated.h"

class UAutoCarverComponent;
class UBoxComponent;
class UCurveFloat;
class UOutlineComponent;
class UObject;
class UObjectivesManager;
class AMiningPod;
class AMolly;

UCLASS()
class AMiningPod : public AActor, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DropHeight;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Replicated)
    FVector TargetLocation;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAutoCarverComponent* AutoCarver;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DropCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* DepartCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* CarverDropCurve;
    
    UPROPERTY(EditAnywhere)
    float CarverRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    FVector CarverScale;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* DwarfCheckerBox;
    
    UPROPERTY(EditAnywhere)
    float DepartureTime;
    
    UPROPERTY(EditAnywhere)
    FText DepartueCountdownName;
    
    UPROPERTY(EditAnywhere)
    FMiningPodDialogs Dialogs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EMiningPodMission MissionType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool HasLanded;
    
    UPROPERTY(Export, Transient)
    UOutlineComponent* PodOutline;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    EMiningPodState State;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_RampState)
    EMiningPodRampState rampState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetDropTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TargetDepartureTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeToDrop;
    
    UPROPERTY(Export, Transient)
    UObjectivesManager* ObjectivesManager;
    
public:
    UFUNCTION(BlueprintCallable)
    static AMiningPod* SpawnPodAtLocation(UObject* WorldContextObject, TSubclassOf<AMiningPod> podClass, const FTransform& Transform);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRampState(EMiningPodRampState NewRampState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMuleInstance(AMolly* Donkey);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void RecieveReturnTimerFifteenSecondWarning();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void RecieveReturnTimerExpired();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PrepForTakeOff();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PowerUp();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PoweredUp();
    
protected:
    UFUNCTION()
    void OnRep_State();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRep_RampState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPrepForTakeOff();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPoweringUp();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPoweredUp();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHostInsidePod(bool isInside);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDropStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDroppodImpact();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDrillingStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeparting();
    
    UFUNCTION()
    void OnCountdownFinished();
    
    UFUNCTION()
    void OnCountdownChanged(int32 newTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAllDwavesInsidePod(bool AllInside);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetTimeToDeparture() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHasLanded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetDonkeyReturnPickupLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceTakeoff();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ExitSpacerig();
    
    UFUNCTION(BlueprintCallable)
    static void DropToTarget(UObject* WorldContextObject, TSubclassOf<AMiningPod> podClass, const FTransform& dropLocation, int32 DropDelay);
    
    UFUNCTION(BlueprintCallable)
    static AMiningPod* DropToMission(UObject* WorldContextObject, TSubclassOf<AMiningPod> podClass, const FVector& Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DepositAllPlayersMaterials();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Depart();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CorrectLocationsForSpawnedOnLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    static FVector AdjustLandingLocationToGround(UObject* WorldContextObjet, const FVector& initialLocation);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AMiningPod();
};

