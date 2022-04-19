#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AfflictionFunctionLibrary.generated.h"

class AFSDPawn;

UCLASS(BlueprintType)
class UAfflictionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAfflictionFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void PlayEnemyExplosionEffects(AFSDPawn* enemy);
    
};

