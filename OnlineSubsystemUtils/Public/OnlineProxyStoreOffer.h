#pragma once
#include "CoreMinimal.h"
#include "EOnlineProxyStoreOfferDiscountType.h"
//CROSS-MODULE INCLUDE: CoreUObject DateTime
#include "OnlineProxyStoreOffer.generated.h"

USTRUCT(BlueprintType)
struct FOnlineProxyStoreOffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString OfferId;
    
    UPROPERTY(BlueprintReadOnly)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly)
    FText LongDescription;
    
    UPROPERTY(BlueprintReadOnly)
    FText RegularPriceText;
    
    UPROPERTY(BlueprintReadOnly)
    int32 RegularPrice;
    
    UPROPERTY(BlueprintReadOnly)
    FText PriceText;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumericPrice;
    
    UPROPERTY(BlueprintReadOnly)
    FString CurrencyCode;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime ReleaseDate;
    
    UPROPERTY(BlueprintReadOnly)
    FDateTime ExpirationDate;
    
    UPROPERTY(BlueprintReadOnly)
    EOnlineProxyStoreOfferDiscountType DiscountType;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FString> DynamicFields;
    
    ONLINESUBSYSTEMUTILS_API FOnlineProxyStoreOffer();
};

