#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "MeltOperationData.generated.h"

USTRUCT(BlueprintType)
struct FMeltOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 OperationNumber;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> Points;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    FSD_API FMeltOperationData();
};

