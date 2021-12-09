#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Quat
#include "ProceduralFoliageInstance.generated.h"

class UFoliageType;

USTRUCT(BlueprintType)
struct FOLIAGE_API FProceduralFoliageInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Location;
    
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Age;
    
    UPROPERTY()
    float Scale;
    
    UPROPERTY()
    UFoliageType* Type;
    
    FProceduralFoliageInstance();
};

