#pragma once
#include "CoreMinimal.h"
#include "InstancePointDamageSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HierarchicalInstancedStaticMeshComponent -FallbackName=HierarchicalInstancedStaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "InstanceRadialDamageSignatureDelegate.h"
#include "FoliageInstancedStaticMeshComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class FOLIAGE_API UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInstancePointDamageSignature OnInstanceTakePointDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInstanceRadialDamageSignature OnInstanceTakeRadialDamage;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid GenerationGuid;
    
public:
    UFoliageInstancedStaticMeshComponent();
};

