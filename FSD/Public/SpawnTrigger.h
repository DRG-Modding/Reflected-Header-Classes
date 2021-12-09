#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "SpawnTrigger.generated.h"

UCLASS()
class ASpawnTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName Message;
    
    ASpawnTrigger();
};

