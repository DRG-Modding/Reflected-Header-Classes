#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FirstPersonSkeletalMeshComponent.generated.h"

class APlayerController;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFirstPersonSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UFirstPersonSkeletalMeshComponent();
    UFUNCTION(BlueprintCallable)
    static FVector CalcFirstPersonFOVPositionCorrection(APlayerController* PlayerController, const FVector& origPos);
    
};

