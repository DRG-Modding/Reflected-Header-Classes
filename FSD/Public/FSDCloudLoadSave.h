#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SDCloudLoadDelegate.h"
#include "SDCloudFailedDelegate.h"
#include "FSDCloudLoadSave.generated.h"

class UFSDCloudSaveHandler;

UCLASS(BlueprintType)
class UFSDCloudLoadSave : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSDCloudLoad OnCloudLoadAll;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FSDCloudFailed OnCloudLoadAllFailed;
    
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UFSDCloudSaveHandler* CloudSaveHandler;
    
public:
    UFSDCloudLoadSave();
    UFUNCTION(BlueprintCallable)
    void StartCloudLoadAll(UObject* WorldContextObject, int32 Index, int32 Offset);
    
};

