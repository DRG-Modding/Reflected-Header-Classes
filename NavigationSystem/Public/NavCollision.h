#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine NavCollisionBase
#include "NavCollisionCylinder.h"
#include "NavCollisionBox.h"
#include "NavCollision.generated.h"

class UNavArea;

UCLASS()
class NAVIGATIONSYSTEM_API UNavCollision : public UNavCollisionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FNavCollisionCylinder> CylinderCollision;
    
    UPROPERTY(EditAnywhere)
    TArray<FNavCollisionBox> BoxCollision;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> AreaClass;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bGatherConvexGeometry: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bCreateOnClient: 1;
    
    UNavCollision();
};

