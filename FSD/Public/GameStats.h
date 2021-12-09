#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Info
#include "GameStats.generated.h"

class UCappedResource;

UCLASS()
class AGameStats : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    int32 NumberOfPlayersEscapedInPod;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    float TotalGoldMined;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    int32 TotalEnemiesKilled;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient)
    int32 MissionHaz;
    
    UFUNCTION()
    void OnPlayerMinedGold(UCappedResource* Resource, float Amount);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGameStats();
};

