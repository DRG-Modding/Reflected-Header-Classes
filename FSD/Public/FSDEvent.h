#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "ClaimableRewardView.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "FSDEvent.generated.h"

class UFSDEvent;
class ADebrisDataActor;
class UObject;
class UWorld;
class UCampaign;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDEventOnActiveChanged, const UFSDEvent*, InFsdEvent, bool, InIsActive);

UCLASS(BlueprintType)
class FSD_API UFSDEvent : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDEventOnActiveChanged OnActiveChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EventName;
    
    UPROPERTY(VisibleAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY()
    bool bHasClaimableRewards;
    
    UPROPERTY(EditAnywhere)
    bool bFreeBeerEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<ADebrisDataActor>> EventDebris;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> SpacerigSublevels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FClaimableRewardView ClaimableRewards;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UCampaign>> Campaigns;
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkClaimableRewardsSeen(UObject* WorldContext);
    
protected:
    UFUNCTION(BlueprintPure)
    static bool IsFsdEventActive(UObject* WorldContext, const UFSDEvent* FSDEvent);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasUnseenClaimableRewards(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    bool GiveRewards(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure)
    bool GetIsActive(UObject* WorldContext) const;
    
    UFSDEvent();
};

