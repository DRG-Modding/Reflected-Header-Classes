#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantizeNormal
#include "ProjectileImpact.generated.h"

class AActor;
class UPrimitiveComponent;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FProjectileImpact {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector_NetQuantize Location;
    
    UPROPERTY()
    FVector_NetQuantizeNormal Normal;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UPrimitiveComponent> Component;
    
    UPROPERTY()
    UPhysicalMaterial* PhysMat;
    
    UPROPERTY()
    int32 BoneIndex;
    
    FSD_API FProjectileImpact();
};

