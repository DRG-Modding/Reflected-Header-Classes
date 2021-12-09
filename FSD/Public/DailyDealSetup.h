#pragma once
#include "CoreMinimal.h"
#include "EDealType.h"
//CROSS-MODULE INCLUDE: CoreUObject IntPoint
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "DailyDealSetup.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FDailyDealSetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    EDealType DealType;
    
    UPROPERTY(EditAnywhere)
    FIntPoint UnitsRange;
    
    UPROPERTY(EditAnywhere)
    FVector2D DiscountRangePercent;
    
    UPROPERTY(EditAnywhere)
    FVector2D ExtraValueRangePercent;
    
    FSD_API FDailyDealSetup();
};

