#pragma once
#include "CoreMinimal.h"
#include "ARTrackedGeometry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EARObjectClassification.h"
#include "ARMeshGeometry.generated.h"

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARMeshGeometry : public UARTrackedGeometry {
    GENERATED_BODY()
public:
    UARMeshGeometry();
    UFUNCTION(BlueprintCallable)
    bool GetObjectClassificationAtLocation(const FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff);
    
};

