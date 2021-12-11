#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine AnimNotify
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "AnimNotify_PlayNiagaraEffect.generated.h"

class UNiagaraSystem;
class UFXSystemComponent;

UCLASS(CollapseCategories)
class NIAGARAANIMNOTIFIES_API UAnimNotify_PlayNiagaraEffect : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* Template;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 Attached: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SocketName;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UFXSystemComponent* GetSpawnedEffect() const;
    
    UAnimNotify_PlayNiagaraEffect();
};

