#pragma once
#include "CoreMinimal.h"
#include "EMovementCustomMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "MovementModeCombo.generated.h"

USTRUCT(BlueprintType)
struct FMovementModeCombo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> Mode;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementCustomMode> CustomMode;
    
    FSD_API FMovementModeCombo();
};

