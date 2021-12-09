#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "UGCBlueprintLibrary.generated.h"

class UUGCRegistry;
class UObject;

UCLASS(BlueprintType)
class SIMPLEUGC_API UUGCBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintPure)
    static UUGCRegistry* GetUGCRegistry(UObject* WorldContextObject);
    
    UUGCBlueprintLibrary();
};

