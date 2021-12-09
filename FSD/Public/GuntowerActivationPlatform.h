#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: Engine HitResult
#include "GuntowerActivationPlatform.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class UCapsuleComponent;
class AGuntowerModule;
class APlayerCharacter;
class UPrimitiveComponent;
class UHealthComponentBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGuntowerActivationPlatformOnProgressUpdatedDelegate, float, Progress);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGuntowerActivationPlatformOnPlayersInsideChangedDelegate, int32, playerCount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGuntowerActivationPlatformOnProgressFilled);

UCLASS()
class FSD_API AGuntowerActivationPlatform : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* SKMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* Trigger;
    
    UPROPERTY(BlueprintAssignable)
    FGuntowerActivationPlatformOnProgressUpdatedDelegate OnProgressUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGuntowerActivationPlatformOnPlayersInsideChangedDelegate OnPlayersInsideChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGuntowerActivationPlatformOnProgressFilled OnProgressFilled;
    
protected:
    UPROPERTY(Replicated, Transient)
    AGuntowerModule* AssignedModule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DoneAt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DisabledTime;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PlayersInside)
    int32 PlayersInside;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Disabled)
    bool Disabled;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsShutDown)
    bool IsShutDown;
    
    UFUNCTION()
    void UpdatePlayersInside(APlayerCharacter* Character);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ShutDown();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPlatformActive(bool IsActive);
    
protected:
    UFUNCTION()
    void ReEnable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShutDown();
    
    UFUNCTION()
    void OnRep_PlayersInside();
    
    UFUNCTION()
    void OnRep_IsShutDown();
    
    UFUNCTION()
    void OnRep_Disabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayersInsideChanged(int32 NewPlayersInside);
    
    UFUNCTION()
    void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDisabledChanged(bool IsDisabled);
    
    UFUNCTION(BlueprintCallable)
    void ModuleDestroyed(UHealthComponentBase* Health);
    
public:
    UFUNCTION(BlueprintPure)
    AGuntowerModule* GetAssignedModule() const;
    
protected:
    UFUNCTION()
    void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanWidgetAppear() const;
    
    UFUNCTION(BlueprintCallable)
    void AssignModule(AGuntowerModule* towerModule);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGuntowerActivationPlatform();
};

