#pragma once
#include "CoreMinimal.h"
#include "ClothCollisionPrim_SphereConnection.generated.h"

USTRUCT(BlueprintType)
struct FClothCollisionPrim_SphereConnection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 SphereIndices[2];
    
    CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothCollisionPrim_SphereConnection();
};

