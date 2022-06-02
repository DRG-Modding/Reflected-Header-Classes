#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "MissionStatsCollector.generated.h"

class APlayerCharacter;
class UCappedResource;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMissionStatsCollector : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
public:
    UMissionStatsCollector();
protected:
    UFUNCTION(BlueprintCallable)
    void OnResourceIncremented(UCappedResource* Resource, float Amount);
    
};

