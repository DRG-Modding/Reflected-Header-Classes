#pragma once
#include "CoreMinimal.h"
#include "ARTrackedGeometry.h"
#include "EARFaceBlendShape.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "EAREye.h"
#include "ARFaceGeometry.generated.h"

UCLASS()
class AUGMENTEDREALITY_API UARFaceGeometry : public UARTrackedGeometry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector LookAtTarget;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsTracked;
    
private:
    UPROPERTY()
    TMap<EARFaceBlendShape, float> BlendShapes;
    
public:
    UFUNCTION(BlueprintPure)
    FTransform GetWorldSpaceEyeTransform(EAREye eye) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetLocalSpaceEyeTransform(EAREye eye) const;
    
    UFUNCTION(BlueprintPure)
    float GetBlendShapeValue(EARFaceBlendShape BlendShape) const;
    
    UFUNCTION(BlueprintPure)
    TMap<EARFaceBlendShape, float> GetBlendShapes() const;
    
    UARFaceGeometry();
};

