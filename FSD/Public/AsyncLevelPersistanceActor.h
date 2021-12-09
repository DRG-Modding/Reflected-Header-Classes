#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
#include "AsyncLevelPersistanceActor.generated.h"

class UObject;

UCLASS()
class AAsyncLevelPersistanceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UObject*> References;
    
    AAsyncLevelPersistanceActor();
};

