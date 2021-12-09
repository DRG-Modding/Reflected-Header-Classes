#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseProductRequest.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseProductRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString ProductIdentifier;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsConsumable;
    
    ONLINESUBSYSTEM_API FInAppPurchaseProductRequest();
};

