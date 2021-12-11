#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: Engine BranchingPointNotifyPayload
#include "PlayMontageCallbackProxy.generated.h"

class UPlayMontageCallbackProxy;
class UAnimMontage;
class USkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayMontageCallbackProxyOnCompleted, FName, NotifyName);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayMontageCallbackProxyOnBlendOut, FName, NotifyName);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayMontageCallbackProxyOnInterrupted, FName, NotifyName);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayMontageCallbackProxyOnNotifyEnd, FName, NotifyName);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayMontageCallbackProxyOnNotifyBegin, FName, NotifyName);

UCLASS(BlueprintType, MinimalAPI)
class UPlayMontageCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayMontageCallbackProxyOnCompleted OnCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FPlayMontageCallbackProxyOnBlendOut OnBlendOut;
    
    UPROPERTY(BlueprintAssignable)
    FPlayMontageCallbackProxyOnInterrupted OnInterrupted;
    
    UPROPERTY(BlueprintAssignable)
    FPlayMontageCallbackProxyOnNotifyBegin OnNotifyBegin;
    
    UPROPERTY(BlueprintAssignable)
    FPlayMontageCallbackProxyOnNotifyEnd OnNotifyEnd;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    static UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection);
    
    UPlayMontageCallbackProxy();
};

