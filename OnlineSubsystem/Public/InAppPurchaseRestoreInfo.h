#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseRestoreInfo.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseRestoreInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Identifier;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ReceiptData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString TransactionIdentifier;
    
    ONLINESUBSYSTEM_API FInAppPurchaseRestoreInfo();
};

