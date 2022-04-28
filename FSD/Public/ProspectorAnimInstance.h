#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EProspectorRobotState.h"
#include "ProspectorAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UProspectorAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D TiltResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D LookingResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EProspectorRobotState ProspectorState;
    
    UPROPERTY(EditAnywhere, Transient)
    float ArmBusyness;
    
public:
    UProspectorAnimInstance();
};

