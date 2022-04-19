#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AnimSharingStateInstance.generated.h"

class AActor;
class UAnimSequence;
class UAnimSharingInstance;

UCLASS(NonTransient)
class ANIMATIONSHARING_API UAnimSharingStateInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimationToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient, meta=(AllowPrivateAccess=true))
    float PermutationTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bStateBool;
    
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UAnimSharingInstance* instance;
    
public:
    UAnimSharingStateInstance();
protected:
    UFUNCTION(BlueprintCallable)
    void GetInstancedActors(TArray<AActor*>& Actors);
    
};

