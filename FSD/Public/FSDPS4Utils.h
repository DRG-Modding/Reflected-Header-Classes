#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "FSDPS4Utils.generated.h"

UCLASS(BlueprintType)
class UFSDPS4Utils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void SetUGCAllowed(bool bAllowed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUGCAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPS4SystemLoaded();
    
    UFSDPS4Utils();
};

