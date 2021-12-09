#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseReceiptInfo2.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseReceiptInfo2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString ItemName;
    
    UPROPERTY(BlueprintReadOnly)
    FString ItemID;
    
    UPROPERTY(BlueprintReadOnly)
    FString ValidationInfo;
    
    ONLINESUBSYSTEMUTILS_API FInAppPurchaseReceiptInfo2();
};

