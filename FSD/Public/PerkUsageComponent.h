#pragma once
#include "CoreMinimal.h"
#include "PerkUsage.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "RejoinListener.h"
#include "PerkUsageComponent.generated.h"

class UPerkAsset;

UCLASS()
class FSD_API UPerkUsageComponent : public UActorComponent, public IRejoinListener {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PerkUsageReplicated)
    TArray<FPerkUsage> PerkUsageReplicated;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_MarkPerkUsed(UPerkAsset* Perk);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_CheatReset();
    
    UFUNCTION()
    void OnRep_PerkUsageReplicated();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPerkUsageComponent();
};

