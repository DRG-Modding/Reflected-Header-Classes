#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "SpaceRigNotification.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSpaceRigNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor IconColor;
    
    FSD_API FSpaceRigNotification();
};

