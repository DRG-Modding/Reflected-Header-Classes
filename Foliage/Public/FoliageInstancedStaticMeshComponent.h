#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine HierarchicalInstancedStaticMeshComponent
//CROSS-MODULE INCLUDE: CoreUObject Guid
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "FoliageInstancedStaticMeshComponent.generated.h"

class AController;
class AActor;
class UDamageType;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FFoliageInstancedStaticMeshComponentOnInstanceTakePointDamage, int32, InstanceIndex, float, Damage, AController*, InstigatedBy, FVector, HitLocation, FVector, ShotFromDirection, const UDamageType*, DamageType, AActor*, DamageCauser);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FFoliageInstancedStaticMeshComponentOnInstanceTakeRadialDamage, const TArray<int32>&, Instances, const TArray<float>&, Damages, AController*, InstigatedBy, FVector, Origin, float, MaxRadius, const UDamageType*, DamageType, AActor*, DamageCauser);

UCLASS(EditInlineNew)
class FOLIAGE_API UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFoliageInstancedStaticMeshComponentOnInstanceTakePointDamage OnInstanceTakePointDamage;
    
    UPROPERTY(BlueprintAssignable)
    FFoliageInstancedStaticMeshComponentOnInstanceTakeRadialDamage OnInstanceTakeRadialDamage;
    
private:
    UPROPERTY()
    FGuid GenerationGuid;
    
public:
    UFoliageInstancedStaticMeshComponent();
};

