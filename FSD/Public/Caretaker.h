#pragma once
#include "CoreMinimal.h"
#include "FSDPawn.h"
#include "ECaretakerSpawnType.h"
#include "Caretaker.generated.h"

class UCaretakerActionComponent;
class UPassthroughSubHealthComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UHealthDamageTracker;
class UEnemyHealthComponent;
class UPawnStatsComponent;
class UAnimSequenceBase;

UCLASS()
class FSD_API ACaretaker : public AFSDPawn {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USkeletalMeshComponent* Body;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    TArray<USkeletalMeshComponent*> Eyes;
    
    UPROPERTY(Export, VisibleAnywhere)
    TArray<UPassthroughSubHealthComponent*> subHealth;
    
    UPROPERTY(Export, VisibleAnywhere)
    UHealthDamageTracker* DamageTracker;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEnemyHealthComponent* Health;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPawnStatsComponent* PawnStats;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    TArray<UCaretakerActionComponent*> Actions;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UCaretakerActionComponent* CurrentAction;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimSequenceBase*> HitReactions;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CurrentStage)
    int32 CurrentStage;
    
    UPROPERTY(EditAnywhere)
    TArray<float> RotationRates;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentRotation)
    float Server_Rotation;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsInStageCooldown;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsWeakpointAVisible;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsWeakpointBVisible;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsWeakpointCVisible;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsWeakpointDVisible;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ECaretakerSpawnType ActiveSpawnType;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 AoEStage;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_OpenEye)
    int8 OpenEye;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void WakeUp();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetRotationRate(int32 rateIndex);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OpenRandomEye(bool forbidLastEye);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartHideFromDamage();
    
protected:
    UFUNCTION()
    void OnRep_OpenEye();
    
private:
    UFUNCTION()
    void OnRep_CurrentStage();
    
    UFUNCTION()
    void OnRep_CurrentRotation();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewStage(int32 stageIndex);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEyeOpened(USkeletalMeshComponent* eye);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEyeClosed(USkeletalMeshComponent* eye);
    
protected:
    UFUNCTION()
    void OnDamageTaken(float Amount);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAwake() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnyEyeOpen() const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void InitiateNextStage();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitCaretakerActions(TArray<UCaretakerActionComponent*> carettakeractions);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CloseAllEyes();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ACaretaker();
};

