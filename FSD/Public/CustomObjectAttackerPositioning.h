#pragma once
#include "CoreMinimal.h"
#include "AttackerPositioningComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CustomObjectAttackerPositioning.generated.h"

class UHealthComponentBase;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCustomObjectAttackerPositioning : public UAttackerPositioningComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponentBase* Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> AttackerPositions;
    
public:
    UCustomObjectAttackerPositioning();
};

