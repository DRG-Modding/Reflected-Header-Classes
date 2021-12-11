#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ARTrackedGeometry.h"
#include "EAREye.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "EARFaceBlendShape.h"
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetWorldSpaceEyeTransform(EAREye eye) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLocalSpaceEyeTransform(EAREye eye) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlendShapeValue(EARFaceBlendShape BlendShape) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EARFaceBlendShape, float> GetBlendShapes() const;
    
    UARFaceGeometry();
};

