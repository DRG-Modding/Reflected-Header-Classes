#pragma once
#include "CoreMinimal.h"
#include "AttackEffect.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "MeshCarveAttackEffect.generated.h"

class UStaticMesh;

UCLASS(EditInlineNew)
class UMeshCarveAttackEffect : public UAttackEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* CarveMesh;
    
    UPROPERTY(EditAnywhere)
    float CarverOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator CarverOrientation;
    
    UPROPERTY(EditAnywhere)
    FVector CarverScale;
    
    UPROPERTY(EditAnywhere)
    FName Socket;
    
public:
    UMeshCarveAttackEffect();
};

