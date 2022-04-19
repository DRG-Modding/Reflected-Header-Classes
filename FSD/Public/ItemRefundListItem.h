#pragma once
#include "CoreMinimal.h"
#include "ItemRefundResourceItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ItemRefundListItem.generated.h"

USTRUCT(BlueprintType)
struct FItemRefundListItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FItemRefundResourceItem> Resources;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float CreditCost;
    
    FSD_API FItemRefundListItem();
};

