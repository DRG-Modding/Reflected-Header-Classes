#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ESlateAccessibleBehavior.h"
#include "SlateAccessibleWidgetData.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FText, FSlateAccessibleWidgetDataAccessibleTextDelegate);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal(FText, FSlateAccessibleWidgetDataAccessibleSummaryTextDelegate);

UCLASS(DefaultToInstanced)
class USlateAccessibleWidgetData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bCanChildrenBeAccessible;
    
    UPROPERTY()
    ESlateAccessibleBehavior AccessibleBehavior;
    
    UPROPERTY()
    ESlateAccessibleBehavior AccessibleSummaryBehavior;
    
    UPROPERTY()
    FText AccessibleText;
    
    UPROPERTY()
    FSlateAccessibleWidgetDataAccessibleTextDelegate AccessibleTextDelegate;
    
    UPROPERTY()
    FText AccessibleSummaryText;
    
    UPROPERTY()
    FSlateAccessibleWidgetDataAccessibleSummaryTextDelegate AccessibleSummaryTextDelegate;
    
    USlateAccessibleWidgetData();
};

