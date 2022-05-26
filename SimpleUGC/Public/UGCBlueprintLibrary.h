#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "UGCBlueprintLibrary.generated.h"

class UUGCRegistry;
class UUGCSettings;
class UObject;
class UUGCLatentActionManager;

UCLASS(Blueprintable)
class SIMPLEUGC_API UUGCBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUGCBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUGCSettings* GetUGCSettings(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUGCRegistry* GetUGCRegistry(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUGCLatentActionManager* GetUGCLatentActionManager(UObject* WorldContextObject);
    
};

