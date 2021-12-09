#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "SpawnReleasedActor.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class USpawnReleasedActor : public UInterface {
    GENERATED_BODY()
};

class ISpawnReleasedActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Released();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Attached(AActor* Parent);
    
};

