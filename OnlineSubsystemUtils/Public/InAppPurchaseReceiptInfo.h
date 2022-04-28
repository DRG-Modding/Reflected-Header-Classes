#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseReceiptInfo.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseReceiptInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ValidationInfo;
    
    ONLINESUBSYSTEMUTILS_API FInAppPurchaseReceiptInfo();
};

