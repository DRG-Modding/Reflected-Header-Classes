#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine PerPlatformInt
//CROSS-MODULE INCLUDE: Engine PerPlatformBool
#include "AnimationSetup.generated.h"

class UAnimSequence;
class UAnimSharingStateInstance;

USTRUCT(BlueprintType)
struct FAnimationSetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* AnimSequence;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TSubclassOf<UAnimSharingStateInstance> AnimBlueprint;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformInt NumRandomizedInstances;
    
    UPROPERTY(EditAnywhere)
    FPerPlatformBool Enabled;
    
    ANIMATIONSHARING_API FAnimationSetup();
};

