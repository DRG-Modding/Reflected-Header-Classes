#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "XRDeviceId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "XRAssetFunctionLibrary.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UXRAssetFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId);
    
    UFUNCTION(BlueprintCallable)
    static UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform);
    
};

