#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DrinkableBarSlot.generated.h"

class ADrinkableActor;

USTRUCT(BlueprintType)
struct FDrinkableBarSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector WorldLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADrinkableActor> DrinkableActor;
    
    FSD_API FDrinkableBarSlot();
};

