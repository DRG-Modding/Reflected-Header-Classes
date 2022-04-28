#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "BeastMasterUseSphere.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBeastMasterUseSphere : public USphereComponent {
    GENERATED_BODY()
public:
    UBeastMasterUseSphere();
};

