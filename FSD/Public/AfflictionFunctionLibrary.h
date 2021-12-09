#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "AfflictionFunctionLibrary.generated.h"

class AFSDPawn;

UCLASS(BlueprintType)
class UAfflictionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void PlayEnemyExplosionEffects(AFSDPawn* enemy);
    
    UAfflictionFunctionLibrary();
};

