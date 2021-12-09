#pragma once
#include "CoreMinimal.h"
#include "UsableComponent.h"
#include "EInputKeys.h"
#include "SingleUsableComponent.generated.h"

class UDialogDataAsset;
class APlayerCharacter;
class USoundCue;
class UPawnStat;
class UTexture2D;
class UAudioComponent;

UDELEGATE(BlueprintAuthorityOnly) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSingleUsableComponentOnUseBegin, APlayerCharacter*, User, EInputKeys, Key);
UDELEGATE(BlueprintAuthorityOnly) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSingleUsableComponentOnUsedBy, APlayerCharacter*, User, EInputKeys, Key);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSingleUsableComponentOnProgress, float, Progress);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSingleUsableComponentOnUsableChanged, bool, CanUse);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSingleUsableComponentOnUserCountChanged, int32, userCount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSingleUsableComponentOnFailed);

UCLASS()
class USingleUsableComponent : public UUsableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSingleUsableComponentOnUsedBy OnUsedBy;
    
    UPROPERTY(BlueprintAssignable)
    FSingleUsableComponentOnUseBegin OnUseBegin;
    
    UPROPERTY(BlueprintAssignable)
    FSingleUsableComponentOnProgress OnProgress;
    
    UPROPERTY(BlueprintAssignable)
    FSingleUsableComponentOnUsableChanged OnUsableChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSingleUsableComponentOnUserCountChanged OnUserCountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSingleUsableComponentOnFailed OnFailed;
    
protected:
    UPROPERTY(EditAnywhere)
    USoundCue* AudioBeginUse;
    
    UPROPERTY(EditAnywhere)
    USoundCue* AudioFailedUse;
    
    UPROPERTY(EditAnywhere)
    USoundCue* AudioCompletedUse;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* BoscoLaserpointerShout;
    
    UPROPERTY(EditAnywhere)
    bool CoopUse;
    
    UPROPERTY(EditAnywhere)
    UPawnStat* UseSpeedStat;
    
    UPROPERTY(EditAnywhere)
    float CoopUseMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_Usable)
    bool Usable;
    
    UPROPERTY(EditAnywhere)
    bool TurnOffAfterUse;
    
    UPROPERTY(EditAnywhere)
    bool MultipleUse;
    
    UPROPERTY(EditAnywhere)
    bool CancelUseOnRestrictionChange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowUsingUI;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> UsableIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float useDuration;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Progress;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DesiredProgress)
    float DesiredProgress;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_UserCount)
    int32 userCount;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* AudioBeginUseInstance;
    
public:
    UFUNCTION(BlueprintCallable)
    void Use(APlayerCharacter* User, EInputKeys Key, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCanUse(bool CanUse);
    
protected:
    UFUNCTION()
    void OnRep_UserCount();
    
    UFUNCTION()
    void OnRep_Usable();
    
    UFUNCTION()
    void OnRep_DesiredProgress();
    
public:
    UFUNCTION(BlueprintCallable)
    void Cheat_Use(APlayerCharacter* User, EInputKeys Key);
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void All_PlayFailedAudio();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USingleUsableComponent();
};

