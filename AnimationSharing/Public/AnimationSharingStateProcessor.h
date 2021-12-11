#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AnimationSharingStateProcessor.generated.h"

class AActor;
class UEnum;

UCLASS(Blueprintable)
class ANIMATIONSHARING_API UAnimationSharingStateProcessor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UEnum> AnimationStateEnum;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessActorState(int32& OutState, AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool& bShouldProcess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UEnum* GetAnimationStateEnum();
    
    UAnimationSharingStateProcessor();
};

