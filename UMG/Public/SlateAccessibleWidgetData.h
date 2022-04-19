#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ESlateAccessibleBehavior.h"
#include "SlateAccessibleWidgetData.generated.h"

UCLASS(DefaultToInstanced)
class USlateAccessibleWidgetData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bCanChildrenBeAccessible;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ESlateAccessibleBehavior AccessibleBehavior;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ESlateAccessibleBehavior AccessibleSummaryBehavior;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText AccessibleText;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetText AccessibleTextDelegate;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText AccessibleSummaryText;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGetText AccessibleSummaryTextDelegate;
    
    USlateAccessibleWidgetData();
};

