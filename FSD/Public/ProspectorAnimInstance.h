#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "EProspectorRobotState.h"
#include "ProspectorAnimInstance.generated.h"

UCLASS(NonTransient)
class UProspectorAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector2D TiltResult;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector2D LookingResult;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EProspectorRobotState ProspectorState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float ArmBusyness;
    
public:
    UProspectorAnimInstance();
};

