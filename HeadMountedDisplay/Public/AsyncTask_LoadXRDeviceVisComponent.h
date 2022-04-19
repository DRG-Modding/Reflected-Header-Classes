#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "XRDeviceId.h"
#include "DeviceModelLoadedDelegateDelegate.h"
#include "AsyncTask_LoadXRDeviceVisComponent.generated.h"

class AActor;
class UAsyncTask_LoadXRDeviceVisComponent;
class UPrimitiveComponent;

UCLASS()
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeviceModelLoadedDelegate OnModelLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeviceModelLoadedDelegate OnLoadFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SpawnedComponent;
    
public:
    UAsyncTask_LoadXRDeviceVisComponent();
    UFUNCTION(BlueprintCallable)
    static UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(AActor* Target, const FName SystemName, const FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, UPrimitiveComponent*& NewComponent);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform, UPrimitiveComponent*& NewComponent);
    
};

