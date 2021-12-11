#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "ELaserPointerTargetType.h"
#include "LaserPointerData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLaserPointerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ELaserPointerTargetType TargetType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGuid SaveGameID;
    
    FSD_API FLaserPointerData();
};

