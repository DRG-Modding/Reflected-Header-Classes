#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
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
    bool OnSpawnRelease_Released();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSpawnRelease_Attached(AActor* Parent);
    
};

