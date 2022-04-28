#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseReceiptInfo2.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseReceiptInfo2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ValidationInfo;
    
    ONLINESUBSYSTEMUTILS_API FInAppPurchaseReceiptInfo2();
};

