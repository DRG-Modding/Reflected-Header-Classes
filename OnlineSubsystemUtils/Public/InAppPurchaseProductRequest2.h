#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseProductRequest2.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseProductRequest2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FString ProductIdentifier;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsConsumable;
    
    ONLINESUBSYSTEMUTILS_API FInAppPurchaseProductRequest2();
};

