#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "DrillOperationData.generated.h"

USTRUCT(BlueprintType)
struct FDrillOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 OperationNumber;
    
    UPROPERTY(EditAnywhere)
    FVector HitPos;
    
    UPROPERTY(EditAnywhere)
    FVector Dir;
    
    UPROPERTY(EditAnywhere)
    FVector CarveSize;
    
    UPROPERTY(EditAnywhere)
    float CarveNoise;
    
    FSD_API FDrillOperationData();
};

