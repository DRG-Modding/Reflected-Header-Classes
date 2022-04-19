#pragma once
#include "CoreMinimal.h"
#include "GizmoActor.h"
#include "TransformGizmoActor.generated.h"

class UPrimitiveComponent;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API ATransformGizmoActor : public AGizmoActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TranslateX;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TranslateY;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TranslateZ;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TranslateYZ;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TranslateXZ;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TranslateXY;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* RotateX;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* RotateY;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* RotateZ;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* UniformScale;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* AxisScaleX;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* AxisScaleY;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* AxisScaleZ;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PlaneScaleYZ;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PlaneScaleXZ;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PlaneScaleXY;
    
    ATransformGizmoActor();
};

