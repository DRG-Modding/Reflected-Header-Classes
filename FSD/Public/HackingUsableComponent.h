#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "HackingUsableState.h"
#include "HackingUsableComponent.generated.h"

class APlayerCharacter;
class AHackingToolItem;
class UHackingToolWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHackingUsableComponentOnHacked, APlayerCharacter*, InHackedBy);

UCLASS()
class FSD_API UHackingUsableComponent : public UInstantUsable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHackingUsableComponentOnHacked OnHacked;
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AHackingToolItem> ItemType;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UHackingToolWidget> HackingWidgetType;
    
    UPROPERTY(ReplicatedUsing=OnRep_HackingState)
    FHackingUsableState HackingState;
    
    UFUNCTION()
    void OnRep_HackingState(const FHackingUsableState& oldState) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool GetIsHacked() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsBeingHacked() const;
    
    UFUNCTION(BlueprintPure)
    TSoftClassPtr<UHackingToolWidget> GetHackingWidgetType() const;
    
    UFUNCTION(BlueprintPure)
    APlayerCharacter* GetHackedBy() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UHackingUsableComponent();
};

