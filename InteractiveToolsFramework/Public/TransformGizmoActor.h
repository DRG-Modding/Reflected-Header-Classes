#pragma once
#include "CoreMinimal.h"
#include "GizmoActor.h"
#include "TransformGizmoActor.generated.h"

class UPrimitiveComponent;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API ATransformGizmoActor : public AGizmoActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UPrimitiveComponent* TranslateX;
    
    UPROPERTY(Export)
    UPrimitiveComponent* TranslateY;
    
    UPROPERTY(Export)
    UPrimitiveComponent* TranslateZ;
    
    UPROPERTY(Export)
    UPrimitiveComponent* TranslateYZ;
    
    UPROPERTY(Export)
    UPrimitiveComponent* TranslateXZ;
    
    UPROPERTY(Export)
    UPrimitiveComponent* TranslateXY;
    
    UPROPERTY(Export)
    UPrimitiveComponent* RotateX;
    
    UPROPERTY(Export)
    UPrimitiveComponent* RotateY;
    
    UPROPERTY(Export)
    UPrimitiveComponent* RotateZ;
    
    UPROPERTY(Export)
    UPrimitiveComponent* UniformScale;
    
    UPROPERTY(Export)
    UPrimitiveComponent* AxisScaleX;
    
    UPROPERTY(Export)
    UPrimitiveComponent* AxisScaleY;
    
    UPROPERTY(Export)
    UPrimitiveComponent* AxisScaleZ;
    
    UPROPERTY(Export)
    UPrimitiveComponent* PlaneScaleYZ;
    
    UPROPERTY(Export)
    UPrimitiveComponent* PlaneScaleXZ;
    
    UPROPERTY(Export)
    UPrimitiveComponent* PlaneScaleXY;
    
    ATransformGizmoActor();
};

