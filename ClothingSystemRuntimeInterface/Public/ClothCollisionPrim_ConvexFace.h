#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
#include "ClothCollisionPrim_ConvexFace.generated.h"

USTRUCT(BlueprintType)
struct FClothCollisionPrim_ConvexFace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPlane Plane;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<int32> Indices;
    
    CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothCollisionPrim_ConvexFace();
};

