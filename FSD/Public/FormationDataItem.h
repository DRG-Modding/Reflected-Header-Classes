#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FormationDataItem.generated.h"

USTRUCT(BlueprintType)
struct FFormationDataItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(EditAnywhere)
    float Distance;
    
    FSD_API FFormationDataItem();
};

