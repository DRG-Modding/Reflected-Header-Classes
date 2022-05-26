#pragma once
#include "CoreMinimal.h"
#include "ProgressUpdatedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PlayersInsideChangedDelegate.h"
#include "OnFinishedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "GuntowerActivationPlatform.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class UCapsuleComponent;
class AGuntowerModule;
class UHealthComponentBase;
class AFSDPlayerState;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class FSD_API AGuntowerActivationPlatform : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SKMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Trigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressUpdated OnProgressUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersInsideChanged OnPlayersInsideChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinished OnProgressFilled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AGuntowerModule* AssignedModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoneAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisabledTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayersInside, meta=(AllowPrivateAccess=true))
    int32 playersInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Disabled, meta=(AllowPrivateAccess=true))
    bool Disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsShutDown, meta=(AllowPrivateAccess=true))
    bool IsShutDown;
    
public:
    AGuntowerActivationPlatform();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ShutDown();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPlatformActive(bool IsActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReEnable();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerSteppedOn(int32 CurrentCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayerSteppedOff(int32 CurrentCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerInsideRevived();
    
    UFUNCTION(BlueprintCallable)
    void PlayerInsideDied(UHealthComponentBase* Health);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShutDown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersInside(int32 OldCount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsShutDown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Disabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayersInsideChanged(int32 NewPlayersInside);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerLeave(AFSDPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisabledChanged(bool IsDisabled);
    
    UFUNCTION(BlueprintCallable)
    void ModuleDestroyed(UHealthComponentBase* Health);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGuntowerModule* GetAssignedModule() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanWidgetAppear() const;
    
    UFUNCTION(BlueprintCallable)
    void AssignModule(AGuntowerModule* towerModule);
    
};

