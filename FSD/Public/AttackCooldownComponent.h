#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "AttackCooldown.h"
#include "AttackCooldownComponent.generated.h"

UCLASS(BlueprintType)
class FSD_API UAttackCooldownComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FAttackCooldown> AttackCooldowns;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCooldown(const FName& AttackName, float cooldownSeconds);
    
    UFUNCTION(BlueprintPure)
    bool IsAttackOffCooldown(const FName& AttackName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyAttackOffCooldown() const;
    
    UFUNCTION()
    void AttackUsed(const FName& Name);
    
    UAttackCooldownComponent();
};

