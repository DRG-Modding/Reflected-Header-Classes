#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore EUINavigationRule
//CROSS-MODULE INCLUDE: SlateCore EUINavigation
#include "WidgetNavigationData.generated.h"

class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FWidgetNavigationDataCustomDelegate, EUINavigation, Navigation);

USTRUCT(BlueprintType)
struct UMG_API FWidgetNavigationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EUINavigationRule Rule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName WidgetToFocus;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UWidget> Widget;
    
    UPROPERTY()
    FWidgetNavigationDataCustomDelegate CustomDelegate;
    
    FWidgetNavigationData();
};

