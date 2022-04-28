#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoRectangleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTERACTIVETOOLSFRAMEWORK_API UGizmoRectangleComponent : public UGizmoBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DirectionX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DirectionY;
    
    UPROPERTY(EditAnywhere)
    float OffsetX;
    
    UPROPERTY(EditAnywhere)
    float OffsetY;
    
    UPROPERTY(EditAnywhere)
    float LengthX;
    
    UPROPERTY(EditAnywhere)
    float LengthY;
    
    UPROPERTY(EditAnywhere)
    float Thickness;
    
    UPROPERTY(EditAnywhere)
    uint8 SegmentFlags;
    
    UGizmoRectangleComponent();
};

