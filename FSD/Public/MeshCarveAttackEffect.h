#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AttackEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "MeshCarveAttackEffect.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew)
class UMeshCarveAttackEffect : public UAttackEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CarveMesh;
    
    UPROPERTY(EditAnywhere)
    float CarverOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CarverOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CarverScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket;
    
public:
    UMeshCarveAttackEffect();
};

