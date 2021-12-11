#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine FXSystemComponent
#include "ENiagaraTickBehavior.h"
#include "NiagaraUserRedirectionParameterStore.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector4
//CROSS-MODULE INCLUDE: Engine EAttachmentRule
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject Quat
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "ENiagaraAgeUpdateMode.h"
#include "NiagaraComponent.generated.h"

class UNiagaraSystem;
class UNiagaraComponent;
class USceneComponent;
class UObject;
class AActor;
class UMaterialInterface;
class UNiagaraDataInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNiagaraComponentOnSystemFinished, UNiagaraComponent*, PSystem);

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraComponent : public UFXSystemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UNiagaraSystem* Asset;
    
    UPROPERTY(EditAnywhere)
    ENiagaraTickBehavior TickBehavior;
    
    UPROPERTY()
    FNiagaraUserRedirectionParameterStore OverrideParameters;
    
    UPROPERTY(EditAnywhere)
    uint8 bForceSolo: 1;
    
    UPROPERTY()
    uint8 bAutoDestroy: 1;
    
    UPROPERTY()
    uint8 bRenderingEnabled: 1;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bAutoManageAttachment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAutoAttachWeldSimulatedBodies: 1;
    
    UPROPERTY()
    float MaxTimeBeforeForceUpdateTransform;
    
    UPROPERTY(BlueprintAssignable)
    FNiagaraComponentOnSystemFinished OnSystemFinished;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleInstanceOnly)
    TWeakObjectPtr<USceneComponent> AutoAttachParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AutoAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AutoAttachLocationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AutoAttachRotationRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAttachmentRule AutoAttachScaleRule;
    
    UFUNCTION(BlueprintCallable)
    void SetVariableVec4(FName InVariableName, const FVector4& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableVec3(FName InVariableName, FVector InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableVec2(FName InVariableName, FVector2D InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableQuat(FName InVariableName, const FQuat& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableObject(FName InVariableName, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableMaterial(FName InVariableName, UMaterialInterface* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableLinearColor(FName InVariableName, const FLinearColor& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableInt(FName InVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableFloat(FName InVariableName, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableBool(FName InVariableName, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableActor(FName InVariableName, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetSeekDelta(float InSeekDelta);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderingEnabled(bool bInRenderingEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetPaused(bool bInPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableVec4(const FString& InVariableName, const FVector4& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableVec3(const FString& InVariableName, FVector InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableVec2(const FString& InVariableName, FVector2D InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableQuat(const FString& InVariableName, const FQuat& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableObject(const FString& InVariableName, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableLinearColor(const FString& InVariableName, const FLinearColor& InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableInt(const FString& InVariableName, int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableFloat(const FString& InVariableName, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableBool(const FString& InVariableName, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNiagaraVariableActor(const FString& InVariableName, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSimTime(float InMaxTime);
    
    UFUNCTION(BlueprintCallable)
    void SetForceSolo(bool bInForceSolo);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredAge(float InDesiredAge);
    
    UFUNCTION(BlueprintCallable)
    void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoDestroy(bool bInAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    void SetAsset(UNiagaraSystem* InAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowScalability(bool bAllow);
    
    UFUNCTION(BlueprintCallable)
    void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
    
    UFUNCTION(BlueprintCallable)
    void SeekToDesiredAge(float InDesiredAge);
    
    UFUNCTION(BlueprintCallable)
    void ResetSystem();
    
    UFUNCTION(BlueprintCallable)
    void ReinitializeSystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSeekDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPreviewLODDistanceEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPreviewLODDistance() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(const FString& InEmitterName, const FString& InValueName);
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetNiagaraParticleValues_DebugOnly(const FString& InEmitterName, const FString& InValueName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetNiagaraParticlePositions_DebugOnly(const FString& InEmitterName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSimTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForceSolo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDesiredAge() const;
    
    UFUNCTION(BlueprintCallable)
    UNiagaraDataInterface* GetDataInterface(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNiagaraSystem* GetAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENiagaraAgeUpdateMode GetAgeUpdateMode() const;
    
    UFUNCTION(BlueprintCallable)
    void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
    
    UNiagaraComponent();
};

