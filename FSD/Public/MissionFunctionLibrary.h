#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "MissionFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class UMissionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static int32 GetGlobalMissionSeed();
    
    UMissionFunctionLibrary();
};

