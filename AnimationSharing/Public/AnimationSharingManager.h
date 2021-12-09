#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "AnimationSharingManager.generated.h"

class AActor;
class USkeleton;
class UAnimSharingInstance;
class UAnimationSharingManager;
class UAnimationSharingSetup;

UCLASS(BlueprintType, DefaultConfig)
class ANIMATIONSHARING_API UAnimationSharingManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<USkeleton*> Skeletons;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UAnimSharingInstance*> PerSkeletonData;
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterActorWithSkeletonBP(AActor* InActor, const USkeleton* SharingSkeleton);
    
    UFUNCTION(BlueprintCallable)
    static UAnimationSharingManager* GetAnimationSharingManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateAnimationSharingManager(UObject* WorldContextObject, const UAnimationSharingSetup* setup);
    
    UFUNCTION(BlueprintPure)
    static bool AnimationSharingEnabled();
    
    UAnimationSharingManager();
};

