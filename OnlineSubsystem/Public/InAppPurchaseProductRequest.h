#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseProductRequest.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseProductRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString ProductIdentifier;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsConsumable;
    
    ONLINESUBSYSTEM_API FInAppPurchaseProductRequest();
};

