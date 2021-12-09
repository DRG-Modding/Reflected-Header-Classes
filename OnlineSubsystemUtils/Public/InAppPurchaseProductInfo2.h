#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseProductInfo2.generated.h"

USTRUCT(BlueprintType)
struct FInAppPurchaseProductInfo2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Identifier;
    
    UPROPERTY(BlueprintReadOnly)
    FString TransactionIdentifier;
    
    UPROPERTY(BlueprintReadOnly)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadOnly)
    FString DisplayDescription;
    
    UPROPERTY(BlueprintReadOnly)
    FString DisplayPrice;
    
    UPROPERTY(BlueprintReadOnly)
    float RawPrice;
    
    UPROPERTY(BlueprintReadOnly)
    FString CurrencyCode;
    
    UPROPERTY(BlueprintReadOnly)
    FString CurrencySymbol;
    
    UPROPERTY(BlueprintReadOnly)
    FString DecimalSeparator;
    
    UPROPERTY(BlueprintReadOnly)
    FString GroupingSeparator;
    
    UPROPERTY(BlueprintReadOnly)
    FString ReceiptData;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FString> DynamicFields;
    
    ONLINESUBSYSTEMUTILS_API FInAppPurchaseProductInfo2();
};

