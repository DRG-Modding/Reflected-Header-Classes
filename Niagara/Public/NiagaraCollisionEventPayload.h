#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "NiagaraCollisionEventPayload.generated.h"

USTRUCT()
struct FNiagaraCollisionEventPayload {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector CollisionPos;
    
    UPROPERTY()
    FVector CollisionNormal;
    
    UPROPERTY()
    FVector CollisionVelocity;
    
    UPROPERTY()
    int32 ParticleIndex;
    
    UPROPERTY()
    int32 PhysicalMaterialIndex;
    
    NIAGARA_API FNiagaraCollisionEventPayload();
};

