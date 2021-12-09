#pragma once
#include "CoreMinimal.h"
#include "AttackerInfo.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AttackerPositioningComponent.generated.h"

class UHealthComponentBase;
class AActor;

UCLASS(Abstract, BlueprintType)
class UAttackerPositioningComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool DebugPositions;
    
    UPROPERTY(EditAnywhere)
    int32 MaxAttackers;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FAttackerInfo> Attackers;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<int32> FreePositions;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FAttackerInfo> FlyingAttackers;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<int32> FlyingFreePositions;
    
    UPROPERTY(EditAnywhere)
    float CharacterPersonalSphere;
    
    UPROPERTY(EditAnywhere)
    float CharacterHalfHeight;
    
    UPROPERTY(EditAnywhere)
    float CostModifier;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnregisterAttacker(AActor* Attacker, bool IsFlying);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAttacker(AActor* Attacker, bool IsFlying);
    
protected:
    UFUNCTION()
    void OnFlyingAttackerDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION()
    void OnAttackerDeath(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetFlyingAttackerPosition(AActor* Attacker, float AttackerRadius);
    
    UFUNCTION(BlueprintCallable)
    FVector GetAttackerPosition(AActor* Attacker, float AttackerRadius);
    
    UAttackerPositioningComponent();
};

