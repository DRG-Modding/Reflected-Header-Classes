#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "ClothCollisionPrim_Box.generated.h"

USTRUCT(BlueprintType)
struct FClothCollisionPrim_Box {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector LocalPosition;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FQuat LocalRotation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector HalfExtents;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 BoneIndex;
    
    CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothCollisionPrim_Box();
};

