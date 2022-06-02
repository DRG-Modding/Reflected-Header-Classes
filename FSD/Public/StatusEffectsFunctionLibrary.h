#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "StatusEffectsFunctionLibrary.generated.h"

class UStatusEffect;
class AActor;
class UDamageClass;

UCLASS(Blueprintable)
class UStatusEffectsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStatusEffectsFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxResistance(TSubclassOf<UStatusEffect> StatusEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDamageClass* GetDamageClass(TSubclassOf<UStatusEffect> StatusEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanTrigger(TSubclassOf<UStatusEffect> StatusEffect, AActor* OtherActor);
    
};

