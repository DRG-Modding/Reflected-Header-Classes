#pragma once
#include "CoreMinimal.h"
#include "ESystemGestureBehavior.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseableMeshComponent -FallbackName=PoseableMeshComponent
#include "EOculusHandType.h"
#include "EBone.h"
#include "EConfidenceBehavior.h"
#include "OculusCapsuleCollider.h"
#include "OculusHandComponent.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class OCULUSINPUT_API UOculusHandComponent : public UPoseableMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EOculusHandType SkeletonType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EOculusHandType MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EConfidenceBehavior ConfidenceBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    ESystemGestureBehavior SystemGestureBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SystemGestureMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool bInitializePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool bUpdateHandScale;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBone, FName> BoneNameMappings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FOculusCapsuleCollider> CollisionCapsules;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bSkeletalMeshInitialized;
    
    UOculusHandComponent();
};

