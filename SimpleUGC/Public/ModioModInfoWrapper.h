#pragma once
#include "CoreMinimal.h"
#include "EUGCApprovalStatus.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ModioModInfoWrapper.generated.h"

UCLASS(BlueprintType)
class SIMPLEUGC_API UModioModInfoWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ModId;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModName;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModURL;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModAuthor;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModVersion;
    
    UPROPERTY(BlueprintReadOnly)
    FString ModDescription;
    
    UPROPERTY(BlueprintReadOnly)
    EUGCApprovalStatus Status;
    
    UFUNCTION(BlueprintPure)
    bool IsModIdInvalid();
    
    UModioModInfoWrapper();
};

