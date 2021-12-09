#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseRestoreInfo2.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseRestoreInfo2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ItemName;
    
    UPROPERTY(BlueprintReadOnly)
    FString ItemID;
    
    UPROPERTY(BlueprintReadOnly)
    FString ValidationInfo;
    
    ONLINESUBSYSTEMUTILS_API FInAppPurchaseRestoreInfo2();
};

