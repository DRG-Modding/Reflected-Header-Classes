#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FSDCloudSaveHandler.generated.h"

UCLASS()
class UFSDCloudSaveHandler : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 NumFailedSaves;
    
public:
    UFSDCloudSaveHandler();
};

