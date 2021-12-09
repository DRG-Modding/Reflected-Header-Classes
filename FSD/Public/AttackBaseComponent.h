#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject FloatInterval
#include "AttackBaseComponent.generated.h"

class UAttackBaseComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class UAttackBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName AttackName;
    
    UPROPERTY(EditAnywhere)
    float MaxSurfaceAngle;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval range;
    
    UPROPERTY(VisibleAnywhere)
    float MinRange;
    
    UPROPERTY(VisibleAnywhere)
    float MaxRange;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UAttackBaseComponent* ReplaceAttackComponent(UAttackBaseComponent* componentToReplace, TSubclassOf<UAttackBaseComponent> newComponentClass);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveCompleteAttack();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAttackTarget(AActor* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAbortAttack();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CompleteAttack(bool success);
    
public:
    UFUNCTION(BlueprintCallable)
    void AttackTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void AbortAttack();
    
    UAttackBaseComponent();
};
