#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FloatPerkComponent.h"
#include "EyeForEyePerkComponent.generated.h"

class UStatusEffect;
class UDamageClass;
class AActor;

UCLASS(Abstract)
class UEyeForEyePerkComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float CoolDown;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UStatusEffect> EyeForEyeSTE;
    
    UPROPERTY(Transient)
    TSubclassOf<UStatusEffect> LoadedSTE;
    
    UFUNCTION()
    void OnHit(float Damage, UDamageClass* inDamageClass, AActor* DamageCauser, bool anyHealthLost);
    
public:
    UEyeForEyePerkComponent();
};

