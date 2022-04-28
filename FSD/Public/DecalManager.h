#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "DecalManager.generated.h"

class UFSDPhysicalMaterial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDecalManager : public UActorComponent {
    GENERATED_BODY()
public:
    UDecalManager();
    UFUNCTION(BlueprintCallable)
    void SpawnDecal(const FVector& Location, const FVector& Normal, UFSDPhysicalMaterial* PhysMat);
    
};

