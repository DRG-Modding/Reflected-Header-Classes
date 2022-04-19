#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MissionFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class UMissionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMissionFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static int32 GetGlobalMissionSeed();
    
};

