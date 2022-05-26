#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPhysicsType.h"
#include "ECollisionTraceFlag.h"
#include "EBodyCollisionResponse.h"
#include "BodySetupCore.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class PHYSICSCORE_API UBodySetupCore : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPhysicsType> PhysicsType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBodyCollisionResponse::Type> CollisionReponse;
    
    UBodySetupCore();
};

