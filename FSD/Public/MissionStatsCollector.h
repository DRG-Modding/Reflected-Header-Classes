#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "MissionStatsCollector.generated.h"

class APlayerCharacter;
class UCappedResource;

UCLASS()
class UMissionStatsCollector : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    APlayerCharacter* Character;
    
    UFUNCTION()
    void OnResourceIncremented(UCappedResource* Resource, float Amount);
    
public:
    UMissionStatsCollector();
};

