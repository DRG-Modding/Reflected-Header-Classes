#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseProductRequest2.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseProductRequest2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ProductIdentifier;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsConsumable;
    
    ONLINESUBSYSTEMUTILS_API FInAppPurchaseProductRequest2();
};

