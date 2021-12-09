#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SkeletalMeshComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "FirstPersonSkeletalMeshComponent.generated.h"

class APlayerController;

UCLASS(EditInlineNew)
class UFirstPersonSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static FVector CalcFirstPersonFOVPositionCorrection(APlayerController* PlayerController, const FVector& origPos);
    
    UFirstPersonSkeletalMeshComponent();
};

