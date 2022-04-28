#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CrossbowProjectileRecallable.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UCrossbowProjectileRecallable : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SetRecallTarget, meta=(AllowPrivateAccess=true))
    APlayerCharacter* RecallTarget;
    
    UPROPERTY(EditAnywhere)
    float RecallStartTime;
    
    UPROPERTY(EditAnywhere)
    float RecallSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FTransform StartTransform;
    
public:
    UCrossbowProjectileRecallable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetRecallTarget(APlayerCharacter* Player, const FTransform& startTrans);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetRecallTarget();
    
};

