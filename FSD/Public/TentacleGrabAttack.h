#pragma once
#include "CoreMinimal.h"
#include "AttackBaseComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "TentacleGrabAttack.generated.h"

class UMeshComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTentacleGrabAttack : public UAttackBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* HeadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TerrainCheckSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TerrainCheckBox;
    
public:
    UTentacleGrabAttack();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeadNearTerrain() const;
    
};

