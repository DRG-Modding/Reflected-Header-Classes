#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Targetable.generated.h"

class UHealthComponentBase;
class UParticleSystem;

UINTERFACE(Blueprintable)
class UTargetable : public UInterface {
    GENERATED_BODY()
};

class ITargetable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void ShowDamageEffects(UParticleSystem* Particles, FVector Location, FRotator Orientation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UHealthComponentBase* GetTargetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTargetCenterMass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsTargetable() const;
    
};

