#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "WeakpointChannel.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "WeakpointGlowComponent.generated.h"

class UCurveFloat;
class UHealthComponentBase;
class UMeshComponent;
class UFSDPhysicalMaterial;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class UWeakpointGlowComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EmissiveParam;
    
    UPROPERTY(Transient)
    TArray<FWeakpointChannel> Channels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRuntimeFloatCurve WeakpointHitCurve;
    
    UPROPERTY(EditAnywhere)
    UFSDPhysicalMaterial* WeakPointMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AddFirstChannelAutomatically;
    
    UPROPERTY(EditAnywhere)
    int32 ReplaceMatIndex;
    
public:
    UFUNCTION(BlueprintCallable)
    bool StopLoopingGlow(int32 aGlowID, bool aFade);
    
protected:
    UFUNCTION()
    void ShowBodypartHit(float Amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUpWeakPointGlowOnMeshByBone(const UMeshComponent*& Mesh, int32 MaterialIndex, FName Bone, UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    int32 SetUpWeakPointGlowOnMesh(UMeshComponent* Mesh, int32 MaterialIndex, UFSDPhysicalMaterial* PhysicalMaterial, UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetChannelEnabled(bool Enabled, int32 Channel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnableWeakpointRegistration(bool Enabled);
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void All_ShowWeakPointHit(uint8 Channel);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddWeakpointGlow(bool loopIndefinitely, float loopTime, UCurveFloat* GrowCurve, UCurveFloat* FadeCurve, int32 UniqueId, int32 Channel);
    
    UWeakpointGlowComponent();
};

