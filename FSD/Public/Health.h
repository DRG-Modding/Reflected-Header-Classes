#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "EHealthbarType.h"
#include "Health.generated.h"

class AActor;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UHealth : public UInterface {
    GENERATED_BODY()
};

class IHealth : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual  return false; IsDead() const PURE_VIRTUAL(IsDead,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return false; IsAlive() const PURE_VIRTUAL(IsAlive,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return NULL; GetOwner() const PURE_VIRTUAL(GetOwner,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return 0.0f; GetMaxHealth() const PURE_VIRTUAL(GetMaxHealth,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return EHealthbarType::None; GetHealthbarType() const PURE_VIRTUAL(GetHealthbarType,);
    
    UFUNCTION(BlueprintCallable)
    virtual  return 0.0f; GetHealth() const PURE_VIRTUAL(GetHealth,);
    
};

