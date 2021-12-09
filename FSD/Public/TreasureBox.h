#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TreasureContainer.h"
#include "EInputKeys.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "TreasureBox.generated.h"

class URepairableUsable;
class URepairableComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class USingleUsableComponent;
class UAnimSequenceBase;
class UTerrainPlacementComponent;
class AActor;
class UTreasureRewarder;
class AProceduralSetup;
class UDebrisPositioning;
class APlayerCharacter;
class UCurveFloat;

UCLASS()
class FSD_API ATreasureBox : public ATreasureContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    URepairableComponent* repairable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    URepairableUsable* RepairUsable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USingleUsableComponent* HammeringUsable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTerrainPlacementComponent* terrainPlacement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* MiddlePlane;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* BoxMesh;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CollectActivationDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimSequenceBase* OpenBoxAnim;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DelayToOpenAfterRepair;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> ResourceClass;
    
    UPROPERTY(Export, Transient)
    UTreasureRewarder* boxRewarder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HologramRotationSpeed;
    
    UPROPERTY(Replicated, Transient)
    int32 ItemsInserted;
    
    UPROPERTY(Replicated, Transient)
    bool IsTreasureAvailable;
    
public:
    UFUNCTION(BlueprintCallable)
    void PlaceResources(AProceduralSetup* setup, float Radius, UDebrisPositioning* DebrisPositioning, const TArray<FVector>& locationsToAvoid, UCurveFloat* AvoidCostCurve);
    
    UFUNCTION()
    void OnUsedEvent(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION()
    void OnRepairedEvent(URepairableComponent* repaired);
    
    UFUNCTION()
    void OnHammerProgress(float Progress);
    
    UFUNCTION()
    void OnHammered(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION()
    void OnFullyRepairedEvent(URepairableComponent* repaired);
    
    UFUNCTION()
    void OnAllResourcesCollectedEvent(URepairableComponent* repaired);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnCollectedTreasure(APlayerCharacter* collector);
    
    UFUNCTION()
    void AfterRepairDelay();
    
protected:
    UFUNCTION()
    void ActivateCollection();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATreasureBox();
};

