#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "GameStats.generated.h"

class UCappedResource;
class USeamlessTravelEventKey;

UCLASS(Blueprintable)
class AGameStats : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 NumberOfPlayersEscapedInPod;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    float TotalGoldMined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalEnemiesKilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 MissionHaz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<USeamlessTravelEventKey*> EventKeys;
    
    AGameStats();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnPlayerMinedGold(UCappedResource* Resource, float Amount);
    
};

