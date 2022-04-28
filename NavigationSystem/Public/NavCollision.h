#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavCollisionBase -FallbackName=NavCollisionBase
#include "NavCollisionCylinder.h"
#include "NavCollisionBox.h"
#include "NavCollision.generated.h"

class UNavArea;

UCLASS(Blueprintable)
class NAVIGATIONSYSTEM_API UNavCollision : public UNavCollisionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavCollisionCylinder> CylinderCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavCollisionBox> BoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> AreaClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bGatherConvexGeometry: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCreateOnClient: 1;
    
    UNavCollision();
};

