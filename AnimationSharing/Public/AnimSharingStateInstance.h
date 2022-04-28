#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AnimSharingStateInstance.generated.h"

class UAnimSequence;
class UAnimSharingInstance;
class AActor;

UCLASS(Blueprintable, NonTransient)
class ANIMATIONSHARING_API UAnimSharingStateInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimationToPlay;
    
    UPROPERTY(EditAnywhere, Transient)
    float PermutationTimeOffset;
    
    UPROPERTY(EditAnywhere, Transient)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStateBool;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSharingInstance* instance;
    
public:
    UAnimSharingStateInstance();
protected:
    UFUNCTION(BlueprintCallable)
    void GetInstancedActors(TArray<AActor*>& Actors);
    
};

