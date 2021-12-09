#pragma once
#include "CoreMinimal.h"
#include "ClothCollisionPrim_SphereConnection.h"
#include "ClothCollisionPrim_Sphere.h"
#include "ClothCollisionPrim_Convex.h"
#include "ClothCollisionPrim_Box.h"
#include "ClothCollisionData.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothCollisionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FClothCollisionPrim_Sphere> Spheres;
    
    UPROPERTY(EditAnywhere)
    TArray<FClothCollisionPrim_SphereConnection> SphereConnections;
    
    UPROPERTY(EditAnywhere)
    TArray<FClothCollisionPrim_Convex> Convexes;
    
    UPROPERTY(EditAnywhere)
    TArray<FClothCollisionPrim_Box> Boxes;
    
    FClothCollisionData();
};

