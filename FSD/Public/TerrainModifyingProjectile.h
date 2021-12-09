#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "TerrainModifyingProjectile.generated.h"

class UTerrainMaterial;
class UStaticMesh;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTerrainModifyingProjectileOnRevertToNormal);

UCLASS()
class ATerrainModifyingProjectile : public AProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTerrainModifyingProjectileOnRevertToNormal OnRevertToNormal;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTerrainMaterial* Terrain;
    
    UPROPERTY(Transient)
    UTerrainMaterial* OriginalGroundMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* CarveMesh;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector CarveMeshScale;
    
    UPROPERTY(Transient)
    FVector LastHitLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Radius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool Revert;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TimeOnGround;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ExpensiveCarveNoise;
    
public:
    UFUNCTION()
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION()
    void BeginPlay();
    
    ATerrainModifyingProjectile();
};

