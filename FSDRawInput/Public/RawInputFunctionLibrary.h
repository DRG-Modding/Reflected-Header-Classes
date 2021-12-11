#pragma once
#include "CoreMinimal.h"
#include "RegisteredDeviceInfo.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "RawInputFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class URawInputFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRegisteredDeviceInfo> GetRegisteredDevices();
    
    URawInputFunctionLibrary();
};

