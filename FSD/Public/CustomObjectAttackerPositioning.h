#pragma once
#include "CoreMinimal.h"
#include "AttackerPositioningComponent.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "CustomObjectAttackerPositioning.generated.h"

class UHealthComponentBase;

UCLASS()
class UCustomObjectAttackerPositioning : public UAttackerPositioningComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UHealthComponentBase* Health;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> AttackerPositions;
    
public:
    UCustomObjectAttackerPositioning();
};

