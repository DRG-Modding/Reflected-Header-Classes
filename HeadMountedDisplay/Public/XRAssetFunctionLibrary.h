#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "XRDeviceId.h"
#include "XRAssetFunctionLibrary.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(BlueprintType)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId);
    
    UFUNCTION(BlueprintCallable)
    static UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform);
    
    UXRAssetFunctionLibrary();
};

