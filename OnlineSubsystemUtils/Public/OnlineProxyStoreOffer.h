#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
#include "EOnlineProxyStoreOfferDiscountType.h"
#include "OnlineProxyStoreOffer.generated.h"

USTRUCT(BlueprintType)
struct FOnlineProxyStoreOffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString OfferId;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText LongDescription;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText RegularPriceText;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 RegularPrice;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText PriceText;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 NumericPrice;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString CurrencyCode;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDateTime ReleaseDate;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDateTime ExpirationDate;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EOnlineProxyStoreOfferDiscountType DiscountType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> DynamicFields;
    
    ONLINESUBSYSTEMUTILS_API FOnlineProxyStoreOffer();
};

