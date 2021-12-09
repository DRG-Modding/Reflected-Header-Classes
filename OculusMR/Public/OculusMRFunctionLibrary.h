#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "OculusMRFunctionLibrary.generated.h"

class USceneComponent;
class UOculusMR_Settings;

UCLASS(BlueprintType)
class OCULUSMR_API UOculusMRFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static bool SetTrackingReferenceComponent(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMrcScalingFactor(float ScalingFactor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsMrcEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMrcActive();
    
    UFUNCTION(BlueprintCallable)
    static USceneComponent* GetTrackingReferenceComponent();
    
    UFUNCTION(BlueprintCallable)
    static UOculusMR_Settings* GetOculusMRSettings();
    
    UFUNCTION(BlueprintCallable)
    static float GetMrcScalingFactor();
    
    UOculusMRFunctionLibrary();
};

