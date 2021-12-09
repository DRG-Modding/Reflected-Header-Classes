#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseRestoreInfo.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseRestoreInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Identifier;
    
    UPROPERTY(BlueprintReadOnly)
    FString ReceiptData;
    
    UPROPERTY(BlueprintReadOnly)
    FString TransactionIdentifier;
    
    ONLINESUBSYSTEM_API FInAppPurchaseRestoreInfo();
};

