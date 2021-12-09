#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "TreasureWeight.h"
#include "EInputKeys.h"
#include "TreasureContainer.generated.h"

class USceneComponent;
class APlayerCharacter;
class UOncePerPlayerUsableComponent;
class UItemAquisitionSource;
class UTreasureRewarder;

UCLASS()
class FSD_API ATreasureContainer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOncePerPlayerUsableComponent* CollectUsable;
    
protected:
    UPROPERTY(EditAnywhere)
    UItemAquisitionSource* AquisitionSource;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Collectors)
    TArray<APlayerCharacter*> Collectors;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_LastJoiner)
    APlayerCharacter* LastJoiner;
    
    UPROPERTY(EditAnywhere)
    TArray<FTreasureWeight> PossibleRewarders;
    
    UPROPERTY(Export, Transient)
    UTreasureRewarder* TreasureRewarder;
    
private:
    UPROPERTY()
    bool PreventLatejoiners;
    
public:
    UFUNCTION(BlueprintCallable)
    void TestAwardTreasure();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPreventFurtherLatejoiners(bool prevent);
    
    UFUNCTION(BlueprintCallable)
    void SetCanCollectTreasure(bool canCollect);
    
protected:
    UFUNCTION()
    void OnRep_LastJoiner();
    
    UFUNCTION()
    void OnRep_Collectors();
    
public:
    UFUNCTION()
    void OnPlayerLatejoined(APlayerCharacter* joiner);
    
protected:
    UFUNCTION()
    void OnPlayerCollectedTreasure(APlayerCharacter* collector, EInputKeys Key);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLocalPlayerCollectedTreasure(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDisableChestLocally();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnContainerActivated();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    bool GetPreventFurtherLatejoiners() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATreasureContainer();
};

