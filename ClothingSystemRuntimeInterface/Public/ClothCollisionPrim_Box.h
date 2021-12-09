#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Quat
#include "ClothCollisionPrim_Box.generated.h"

USTRUCT(BlueprintType)
struct FClothCollisionPrim_Box {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector LocalPosition;
    
    UPROPERTY()
    FQuat LocalRotation;
    
    UPROPERTY()
    FVector HalfExtents;
    
    UPROPERTY()
    int32 BoneIndex;
    
    CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothCollisionPrim_Box();
};

