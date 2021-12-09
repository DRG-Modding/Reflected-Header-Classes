#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: InputCore Key
#include "ActionIconMapping.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FActionIconMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FKey ActionKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DoNotTint;
    
    FSD_API FActionIconMapping();
};

