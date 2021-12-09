#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Plane
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ClothCollisionPrim_Convex.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothCollisionPrim_Convex {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPlane> Planes;
    
    UPROPERTY()
    TArray<FVector> SurfacePoints;
    
    UPROPERTY()
    int32 BoneIndex;
    
    FClothCollisionPrim_Convex();
};

