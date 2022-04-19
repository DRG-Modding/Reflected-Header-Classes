#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "FSDSkeletalMeshComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UFSDSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UFSDSkeletalMeshComponent();
};

