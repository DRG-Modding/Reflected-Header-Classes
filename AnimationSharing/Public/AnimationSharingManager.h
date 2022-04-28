#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AnimationSharingManager.generated.h"

class USkeleton;
class UAnimSharingInstance;
class UAnimationSharingSetup;
class AActor;
class UAnimationSharingManager;

UCLASS(Blueprintable, DefaultConfig)
class ANIMATIONSHARING_API UAnimationSharingManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeleton*> Skeletons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAnimSharingInstance*> PerSkeletonData;
    
public:
    UAnimationSharingManager();
    UFUNCTION(BlueprintCallable)
    void RegisterActorWithSkeletonBP(AActor* InActor, const USkeleton* SharingSkeleton);
    
    UFUNCTION(BlueprintCallable)
    static UAnimationSharingManager* GetAnimationSharingManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateAnimationSharingManager(UObject* WorldContextObject, const UAnimationSharingSetup* setup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AnimationSharingEnabled();
    
};

