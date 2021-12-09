#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "FSDAnimationFunctionLibrary.generated.h"

class UAnimSequence;

UCLASS(BlueprintType)
class UFSDAnimationFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static float GetAnimSequenceLength(const UAnimSequence* AnimSequence);
    
    UFSDAnimationFunctionLibrary();
};

