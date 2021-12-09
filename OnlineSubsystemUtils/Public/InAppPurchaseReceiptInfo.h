#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseReceiptInfo.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseReceiptInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ItemName;
    
    UPROPERTY(BlueprintReadOnly)
    FString ItemID;
    
    UPROPERTY(BlueprintReadOnly)
    FString ValidationInfo;
    
    ONLINESUBSYSTEMUTILS_API FInAppPurchaseReceiptInfo();
};

