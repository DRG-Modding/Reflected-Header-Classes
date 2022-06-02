#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EReflexMode.h"
#include "ReflexBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class REFLEX_API UReflexBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UReflexBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetReflexMode(const EReflexMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static void SetFlashIndicatorEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRenderLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EReflexMode GetReflexMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetReflexAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGameToRenderLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGameLatencyInMs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFlashIndicatorEnabled();
    
};

