#pragma once
#include "CoreMinimal.h"
#include "WidgetNavigationData.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "WidgetNavigation.generated.h"

UCLASS(BlueprintType)
class UMG_API UWidgetNavigation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWidgetNavigationData Up;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWidgetNavigationData Down;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWidgetNavigationData Left;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWidgetNavigationData Right;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWidgetNavigationData Next;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWidgetNavigationData Previous;
    
    UWidgetNavigation();
};

